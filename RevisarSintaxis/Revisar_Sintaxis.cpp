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
	stack<int> lineasCorchete;
	stack<int> lineasParent;
	stack<int> lineasLlave;
	int numLinea=0;
	int nivelCorchete=0;
	int nivelParentesis=0;
	int nivelLlave=0;
	string linea;
	while(getline(archivo,linea)){
		int tamanno=linea.size();
		for(int i=0;i<tamanno;i++){
			if(linea[i]=='{'){
				nivelLlave++;
				lineasLlave.push(i);
			}else if(linea[i]=='}'){
				nivelLlave--;
				if(nivelLlave<0){
					lineasLlave.push(i);
				}else{
					lineasLlave.pop();
				}
			}
			if(linea[i]=='('){
				nivelParentesis++;
				lineasParent.push(i);
			}else if(linea[i]==')'){
				nivelParentesis--;
				if(nivelParentesis<0){
					lineasParent.push(i);
				}else{
					lineasParent.pop();
				}
			}
			if(linea[i]=='['){
				nivelCorchete++;
				lineasCorchete.push(i);

			}else if(linea[i]==']'){
				nivelCorchete--;
				if(nivelCorchete<0){
					lineasCorchete.push(i);
				}else{
					lineasCorchete.pop();
				}

			}
		}

	}
		if(lineasLlave.empty()&&lineasCorchete.empty()&&lineasParent.empty()){
			cout<<"El archivo no presenta errores de sintaxis"<<endl;
			return;

		}else{

			while(!lineasLlave.empty()){
				cout<<"Error de uso llaves en la linea:  "<<lineasLlave.top()<<endl;
				lineasLlave.pop();
			}
			while(!lineasCorchete.empty()){
				cout<<"Error de uso de Corchete en la linea:  "<<lineasCorchete.top()<<endl;
				lineasCorchete.pop();

			}
			while(!lineasParent.empty()){
				cout<<"	Error de uso de parentesis en la linea: "<<lineasParent.top()<<endl;
				lineasParent.pop();
			}
		}

	archivo.close();
}


int main(int argc,char*argv[]){

	revisarSintaxis();

}
