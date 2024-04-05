#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;
void swap(string*& linea1, string*& linea2){
	string* temp =linea1;
	linea1=linea2;
	linea2=temp;
}
void QuickSort(vector<string*>& array, int inicio,int final){
	int i =inicio,j=final;
	string* pivote = array[(inicio+final)/2];
	do{

		while(*array[i]<*pivote){

			i++;
		}
		while(*array[j]>*pivote){
			j--;
		}

		if(i<=j){
			swap(array[i],array[j]);
			i++;
			j--;
		}
	}while(i<=j);

	if(inicio<j){
		QuickSort(array,inicio,j);
	}
	if(i<final){
		QuickSort(array,i,final);
	}
}
void ordenarTexto(){
	vector<string*> array;
	int caracter=0;
	string linea;
	cout<<"Digite el texto a utilizar para ordenar sus lineas: "<<endl;
	while((caracter=getchar())!=EOF){
		
		if(caracter=='\n'){
			array.push_back(new string(linea));
			linea="";
		}else{
			linea+=caracter;
		}
		caracter=0;
	}
	QuickSort(array,0,array.size()-1);
	cout<<endl<<endl;
	cout<<"---- Lineas Ordenadas ---"<<endl;
	for(int i=0;i<array.size();i++){
		cout<<*array[i]<<endl;
	}
	for(int j=0;j<array.size();j++){
		delete array[j];
	}

}



int main(int argc,char *argv[]){
	ordenarTexto();

}
