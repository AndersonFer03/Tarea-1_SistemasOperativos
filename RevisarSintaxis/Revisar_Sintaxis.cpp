#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stack>
#include <fstream>
using namespace std;
void revisarSintaxis(){
	string nombre;
	cout<<"Digite el nombre del archivo .c"<<endl;
	cin>>nombre;
	ifstream archivo(nombre);
	if(!archivo.is_open()){
		cout<<"No se pudo abrir el archivo"<<endl;
		return;
	}
	int numLinea=1;
	int nivelCorchete=0;
	int nivelParentesis=0;
	int nivelLlave=0;
	string linea;
	while(getline(archivo,linea)){
		for (int i = 0; linea[i] != '\0'; i++) {
           		 if (linea[i] == '(') {
               			 nivelParentesis++;
           		 } else if (linea[i] == ')') {
                		nivelParentesis--;
                		if (nivelParentesis < 0) {
                    			printf("Error de sintaxis en la línea %d: paréntesis no alineados\n", numLinea);
              		  	}
           		 } else if (linea[i] == '{') {
              			 nivelLlave++;
            		 } else if (linea[i] == '}') {
               			 nivelLlave--;
               			 if (nivelLlave < 0) {
                  		  printf("Error de sintaxis en la línea %d: llaves no alineadas\n", numLinea);
                		}
          		} else if (linea[i] == '[') {
               			 nivelCorchete++;
            		} else if (linea[i] == ']') {
               			 nivelCorchete--;
               			 if (nivelCorchete < 0) {
                  		  printf("Error de sintaxis en la línea %d: corchetes no alineados\n", numLinea);
                		}
           		 }
       		 }
        	numLinea++;
   	 }

   	 if (nivelParentesis != 0||nivelLlave!=0||nivelCorchete!=0) {
      	  	cout<<"Errores de sintaxis\n";
        } else {
      		  cout<<"El archivo no contiene errores de sintaxis\n";
        }
	archivo.close();
}


int main(int argc,char*argv[]){

	revisarSintaxis();

}
