#include <iostream>
#include <stdio.h>
#include <unistd.h>
using namespace std;
void conjeturaCollatz(int numero){
	cout<<numero<<",  ";
	while(numero!=1){
		if(numero%2==0){
			numero=numero/2;
		}else{
			numero=(3*numero)+1;
		}
		cout<<numero<<",  ";

	}
	cout<<endl;
}
int main(int argc,char* argv[]){

	if(argc!=2){
		cout<<"Error: No se digito una correcta cantidad de argumentos."<<endl;
		cout<<"Digite un solo valor"<<endl;
		return 1;
	}
	int numero=atoi(argv[1]);
	if(numero<=0){
		cout<<"Error: el numero proporcionado es menor que cero"<<endl;
		return 1;
	}
	conjeturaCollatz(numero);

	return 0;
}
