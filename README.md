# Tarea-1_SistemasOperativos
Ejercios realizados en Oracle VM VirtualBox Manager. Desarrollado con el sistema operativo libre Debian con la distribución de Linux.

## Documentación de Indicaciones por cada Ejercicio.
> Las Respuestas son ejemplos de ejecución de cada ejercicio. 
1. Programa que calcule la tabla de temperaturas Fahrenheit y sus equivalentes Celsius.
   - Archivo: TablaTemperaturas
   - Indicaciones:
		- Abrir el archivo:  cd TablaTemperaturas
	    - Código ejecución: ./tablaTemperaturas

    - Resultado de 0 a 300 grados:
    - ![image](https://github.com/AndersonFer03/Tarea-1_SistemasOperativos/assets/105822681/d1c2fd89-4e2b-45f4-ab4e-08d8e3071b10)


2. Escriba un programa que cuente la cantidad de palabras de una entrada dada por el usuario.
   
   - Archivo: ContadorPalabras
   - Indicaciones:
		- Abrir el archivo:  cd ContadorPalabras
		- Código ejecución: ./contarPalabras
		- Digitar el texto
		- Finalizar de digitar: Presionar ENTER, CTRL+D

   - Resultado: 
		- Texto:   
       La famosa banda de rock se separó, al menos   
       por un tiempo. Los integrantes quieren trabajar un tiempo   
       como solistas.
		
     - Cantidad: 20 palabras

3. 	Escriba un programa que elimine los espacios en blanco y tabuladores de una entrada dada por el usuario.
    - Archivo: EliminarEspacios
    - Indicaciones:
		  - Abrir el archivo:  cd EliminarEspacios
		  - Código ejecución: ./ eliminarEspacios
		  - Digitar el texto
	  	- Finalizar de digitar: Presionar ENTER, CTRL+D

    - Resultado: 
	   - Texto:   
       La famosa banda de rock se separó, al menos   
       por un tiempo. Los integrantes quieren trabajar un tiempo   
       como solistas.
      - Eliminación de espacios:   		 Lafamosabandaderockseseparó,almenosporuntiempo.Losintegrantesquierentrabajaruntiempocomosolistas.

4. Escriba un programa para revisar los errores de sintaxis rudimentarios de un programa en C: paréntesis, llaves y corchetes no alineados.
   - Archivo: RevisarSintaxis
     - Indicaciones:
     - Abrir el archivo:  cd RevisarSintaxis
     - Código ejecución: ./ revisarSintaxis
     - Digitar nombre de archivo: nombreArchivo.c 
	> Se revisa el código del "nombreArchivo.c" almacenado en la carpeta del codigo fuente de Revisar Sintaxis.

   - Resultado: 	
     - Nombre Archivo: Prueba.c
     - Código: 
	```ruby
 	#include <iostream>
	using namespace std;

	int suma(int num1,int num2)){
		int result=num1+num2;
		return result;
	
	}
	int main(int argc,char *argv[]]){
		int  number=12;
		cout<<"Hello World"<<)endl;
		
		if(number>10)) {
			suma((number,5);
		}}
	}

 	```
     - Salida:   
	Error de sintaxis en la línea 4: paréntesis no alineados  
	Error de sintaxis en la línea 9: corchetes no alineados  
	Error de sintaxis en la línea 9: paréntesis no alineados  
	Error de sintaxis en la línea 11: paréntesis no alineados  
	Error de sintaxis en la línea 13: paréntesis no alineados  
	Error de sintaxis en la línea 14: paréntesis no alineados  
	Error de sintaxis en la línea 16: llaves no alineadas  
	Errores de sintaxis  


5. Escriba una versión simplificada de la función "sort" de UNIX. Utilice un array de apuntadores a cadenas de caracteres y quicksort para ordenar.
    - Archivo: VersionSort
    - Indicaciones:
		 - Abrir el archivo:  cd VersionSort
		 - Código ejecución: ./versionSort
		 - Digitar el texto
		 - Finalizar de digitar: Presionar ENTER, CTRL+D

    - Resultado: 
		 - Texto:   
        un sistema operativo es un conjunto   
        de programas que permite manejar la 
        memoria, disco, medios de almacenamiento    
        de información y recursos de nuestra computadora.   
	
	  - Salida:   
        de información y recursos de nuestra computadora.  
        de programas que permite manejar la   
        memoria, disco, medios de almacenamiento  
			  un sistema operativo es un conjunto  

6.	La conjetura de Collatz. La situación consiste en tomar cualquier número entero positivo y aplicarle la siguiente fórmula:
    - ![image](https://github.com/AndersonFer03/Tarea-1_SistemasOperativos/assets/105822681/dae26b38-7313-4175-9923-ed5a80725010)
    - Archivo: ConjeturaCollatz
    - Indicaciones:
	   - Abrir el archivo:  cd ConjeturaCollatz
		 - Código ejecución: ./conjeturaCollatz  #Numero

    - Resultado: 
		 - Entrada: ./conjeturaCollatz 8
	 	 - Salida del programa:  8, 4, 2, 1  
7. 	Escriba un programa en C que permita crear N procesos hijos e imprima el PID y el PPID de cada uno de los procesos hijos y además del proceso padre.         
    - Archivo: ProcesosHijosPID
    - Indicaciones:
		 - Abrir el archivo:  cd ProcesosHijosPID
		 - Código ejecución: ./procesarHijos  #Numero   
		  Formato salida el programa:    
		      - Hijo #1:   PID = AAAA, PPID = XXXX  
 	        - Hijo #2:   PID = BBBB, PPID = XXXX  
 	        - Hijo #3:   PID = CCCC, PPID = XXXX  
		     > Los PID incrementan, los PPID mantienen mismo número de proceso.

    - Resultado: 
		 - Entrada:  ./procesarHijos 3
		 - Salida del programa:    
        Un caso dado
		    - Hijo #1:   PID = 674, PPID = 673
 		    - Hijo #2:   PID = 675, PPID = 673
 		    - Hijo #3:   PID = 676, PPID = 673

8. 	Realizar una aplicación para ejemplificar el uso de Mutex en Pthreads. Simular el saldo de una cuenta bancaria luego de realizar operaciones de depósito, con un máximo de 10 depósitos simultáneos, debe dar el resultado del balance final de la cuenta.
    - Archivo: DepositosCuenta
    - Indicaciones:
		 - Abrir el archivo:  cd DepositosCuenta
		 - Código ejecución: ./depositar 
		 - Monto de depósitos: Generados de forma aleatoria.

   - Resultado: 
	  - Salida del programa:  
        - Saldo Inicial: 100
        - Saldo Final: Saldo Inicial + La suma de los depósitos dados.
9.	Crear una aplicación para calcular la secuencia de Fibonacci utilizando hilos.
    - Archivo: Fibonacci
    - Indicaciones:
		 - Abrir el archivo:  cd Fibonacci
		 - Código ejecución: ./fibonacci 
		 - Numero de Fibonacci: Posterior se digita el número de veces que se aplica la
                                                           secuencia.
    - Resultado: 
		 - Entrada: 7
	   - Salida del programa:    
      0	   1    1    2    3    5    8
10.	Desarrollar un programa que muestra el uso de tuberías (pipes) para enviar información entre el proceso padre y el proceso hijo. El texto que se va a enviar se envía por parámetro al programa.
     - Archivo: Tuberias
     - Indicaciones:
	    - Abrir el archivo:  cd Tuberias
	    - Código ejecución: ./tuberias “texto 
	    - Texto: El argumento corresponde a una palabra.

     - Resultado: 
	    - Entrada: ./tuberías Mundo
	    - Salida del programa:  
		    - Contenido enviado Proceso padre: Mundo
			 - Contenido recibido Proceso hijo: Mundo



