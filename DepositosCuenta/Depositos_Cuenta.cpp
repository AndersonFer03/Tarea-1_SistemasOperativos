#include <iostream>
#include <stdio.h>
#include <pthread.h>
using namespace std;
const int maximo_depositos= 10;
int saldo=100;

pthread_mutex_t mutex;
void* depositar(void* arg){
	int cant=*((int*)arg);
	pthread_mutex_lock(&mutex);
	saldo+=cant;

	pthread_mutex_unlock(&mutex);
}
void generarDepositos(){
	pthread_t hilos[maximo_depositos];
	for(int i=0; i<maximo_depositos;i++){
		int cant=rand()%901+100;
		pthread_create(&hilos[i],NULL,depositar,&cant);
	}
	for(int i=0;i<maximo_depositos;i++){
		pthread_join(hilos[i],NULL);

	}

}
int main(int argc,char* argv[]){

	pthread_mutex_init(&mutex,NULL);
	printf("Saldo Inicial: %d\n",saldo),
	generarDepositos();
	printf("Saldo Final de la Cuenta: %d\n",saldo);
	pthread_mutex_destroy(&mutex);
	return 0;
}
