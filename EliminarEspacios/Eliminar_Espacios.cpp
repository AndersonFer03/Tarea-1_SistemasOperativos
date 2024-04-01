#include <iostream>
#include <stdio.h>
using namespace std;
void eliminarEspacios(){
	string texto="";
	int tamanno=0;
	cout<<"Digite el texto a utilizar para eliminar sus espacios: "<<endl;
	getline(cin,texto);
	for(int i=0; i<=texto.size();i++){
		if(texto[i]!= ' '&&texto[i]!='\t'){
			tamanno++;
		}
	}
	char* buffer = new char[tamanno+1];
	int posicion=0;
	for(int j=0;j<=texto.size();j++){
		if(texto[j]!=' '&&texto[j]!='\t'){
			buffer[posicion]=texto[j];
			posicion++;
		}
	}
	buffer[posicion]='\0';
	cout<<"El texto resultante de la eliminaciòn de los espacios es:"<<endl;
	cout<<buffer<<endl;
	delete[] buffer;

}
int main(int argc,char *argv[]){

	eliminarEspacios();
	return 0;
}
