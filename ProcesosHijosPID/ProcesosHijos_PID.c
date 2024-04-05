#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

using namespace std;
int crearProcesos(int hijos){
	for(int i=0;i<hijos;i++){
		pid_t pid=fork();

		if(pid<0){
			cout<<"Error: No se pudo crear el proceso hijo "<<i+1<<endl;
			return 1;

		}else if(pid==0){
			printf("Hijo #%d: PID=%d, PPID = %d\n",i+1,getpid(),getppid());
			return 0;

		}else{
			wait(NULL);
		}
	}

}
int main (int argc,char *argv[]){
	if(argc!=2){
		cout<<"Error: El numero argumentos no es valido"<<endl;
		cout<<"Debe digitar un solo numero"<<endl;
		return 1;
	}
	int hijos=atoi(argv[1]);
	if(hijos<=0){
		cout<<"Error: El numero de hijos debe ser mayor que cero"<<endl;
		return 1;

	}

	return crearProcesos(hijos);
}
