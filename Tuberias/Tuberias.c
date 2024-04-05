#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

using namespace std;
#define tamanno 200;

void procesarTuberia(char* entrada){

	int pipefd[2];
	pid_t pid;
	char texto[100];

	if(pipe(pipefd)==-1){
		perror("pipe");

	}

	pid=fork();
	if(pid==-1){

		perror("fork");
	}
	if(pid==0){
		close(pipefd[1]);
		read(pipefd[0],texto,sizeof(texto));
		printf("Contenido recibido Proceso hijo: %s\n",texto);
		close(pipefd[0]);

	}else{
		close(pipefd[0]);
		write(pipefd[1], entrada,strlen(entrada)+1);
		close(pipefd[1]);
		printf("Contenido enviado Proceso padre: %s\n",entrada);

	}


}
int main(int argc, char *argv[]){


	if(argc!=2){
		cout<<"Error: Cantidad de argumentos no valido"<<endl;
		cout<<"Solo se debe agregar un argumento"<<endl;
		return 1;
	}
	char* entrada=argv[1];
	procesarTuberia(entrada);

}
