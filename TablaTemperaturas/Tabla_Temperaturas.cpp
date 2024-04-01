#include <iostream>
using namespace std;

void mostrarTabla(){
	double celsius=0;
	for(int fahrenheit=0;fahrenheit<=300;fahrenheit+=20){
		celsius=(5.0/9.0)*(fahrenheit-32);
		cout<<"      "<<fahrenheit<<"    ----    "<<celsius<<endl;
	}

}
int main(int argc,char *argv[]) {

	cout<<"--- Tabla de Temperaturas ---"<<endl;
	cout<<"Fahrenheit    ----   Celsius"<<endl;
	mostrarTabla();
}
