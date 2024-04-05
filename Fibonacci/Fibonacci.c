#include <iostream>
#include <stdio.h>
#include <pthread.h>
using namespace std;

int fibonacci(int num){
	if(num<=1){
		return num;
	}else{
		return fibonacci(num-1)+fibonacci(num-2);
	}
}
void* calcularFibonacci(void* arg){
	int* result=(int*)arg;
	int num=result[0];
	for(int i=0;i<num;i++){
		result[i+1]=fibonacci(i);
	}
	pthread_exit(NULL);

}
void* mostrarResultado(void* arg){
	int* result=(int*)arg;
	int num=result[0];
	cout<<"La secuencia fibonacci para "<<num<<endl;
	for(int i=1;i<=num;i++){
		printf("%d ",result[i]);
	}
	cout<<endl;
	pthread_exit(NULL);


}
int main(int argc, char* argv[]){

	int num=0;
	cout<<"Digite un numero para calcular la secuencia: ";
	cin>>num;

	int result[num+1];
	result[0]=num;
	pthread_t hiloPadre;
	pthread_create(&hiloPadre,NULL, mostrarResultado,(void*)result);

	pthread_t hiloHijo;
	pthread_create(&hiloHijo,NULL, calcularFibonacci,(void*)result);

	pthread_join(hiloPadre,NULL);
	pthread_join(hiloHijo,NULL);

	return 0;

}
