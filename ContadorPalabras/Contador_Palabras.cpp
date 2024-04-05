#include <iostream>
#include <stdio.h>
using namespace std;
void ContarPalabras(){
	int contador=0;
	bool esPalabra=false;
	int caracter=0;
	while((caracter=getchar())!=EOF){
		if((caracter==32)&&esPalabra){
			esPalabra=false;
			contador++;
		}else{
			if(caracter!=32){
				esPalabra=true;
			}
		}

	}
	if(esPalabra){
		contador++;
	}
	cout<<"La cantidad de palabras ingresadas es de: "<<contador<<endl;

}
int main(int argc,char *argv[]){
	cout<<"Ingrese un texto para contar sus palabras: "<<endl;
	ContarPalabras();
	return 0;
}
