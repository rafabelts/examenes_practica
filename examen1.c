#include "evaluador.c"
// Ingresa tu respuesta dentro de los parentesis
int main(){
	// ¿Qué es un algoritmo?
	respuesta("Serie de pasos que se realizan para completar una tarea en específico");

	// Imprime los tres tipos de errores
	respuesta("De lógica, sintaxis y de compilación(?)");
	
	// Como se llama la librería de salida y entradada de C
	respuesta("stdio.h");
	
	// Desarrolla un algoritmo que permita leer dos valores distintos, determinar cual es el mayor y escribirlo
	respuesta("
		int n1, n2;
		scanf("%d", n1);
		scanf("%d", n2);
		if (n1>n2){
			printf("%d es mayor que %d", n1, n2);
		} else if (n2>n1){
			printf("%d es mayor que %d", n2, n1);
		} else if(n1 == n2){
			printf("Los numeros son iguales");
		}
		");

	// ¿Qué es un arreglo?
	respuesta("Un arreglo es una variable que puede guardar distintos valores del mismo tipo de dato dentro de ella.");

	//¿Qué esta mal en el siguiente ejemplo?. Escribe la solución
	/*
		while(i<10){
			printf("%c", i);
		}
	 */
	respuesta("Si lo que querías era imprimir del 1 al 10 el código tiene los errores:
	- no está asignado el tipo de dato ni el valor de la variable "i"
	- el printf va a imprimir un dato tipo caracter y se está comparando con un "10" que es un valor numérico (?)
	- cuando el ciclo termina el valor de "i" no aumenta.
	solución:
	int i = 1
	while(i<=10){
		printf("%d", i)\n;
		i++;
	}

	
	");
	
	// Declaración if que aumente el pago a un 3% si el puntaje es mayor que 90, de lo contrario aumenta el pago en un 1%
	respuesta("int puntaje, pago;
	           if(puntaje>90){
		           pago = pago + (pago / 100 * 3);
				else {
					pago = pago + (pago / 100);
				}
	}");
	
	// Expresión booleana que evalue como verdadero si un numero esta en el rango de 1 a 10, multiplicarlo por 2 en caso de q se encuentre en el rango
	respuesta("int n1;
			   scanf("%d"), n1;
			   if(n1>=1 && n1<=10){
			   n1 += n1;
			   }
			   ");

	// Elabora tres funciones que impriman los números del 10 al 1, con los tres tipos de bucle
	respuesta("Do While:
				int i = 10;
				do{
					printf("%d\n", i);
					i--;
				}while(i>0);
	\n");
	respuesta("For:
	          for(int i=10; i>0; i--){
				printf("%d\n", i);
			  }
	\n");
	respuesta("While:
	            int i = 10
				while(i>0){
					printf("%d\n", i);
					i--;
				}	
	\n");

	// Escribe un algoritmo para calcular la resta de dos numeros enteros, si el resultado de dicha serie esta en el rango de 2 al 8, devuelve 10
	respuesta("
			int n1, n2;
			scanf("%d", n1);
			scanf("%d", n2);
			int resta;
			resta = n1 - n2;
			if (resta >= 2 && resta <= 8){
				printf("10");
			}else{
				printf("%d", resta);
			}
	");
	
	// Que imprime el siguiente codigo
	/*
		if(!x){
			printf("Luzio");
		} else{
			printf("Lis");
		}
	*/
	respuesta("No veo que el código tenga salida alguna porque la variable "x" no tiene un valor asignado");
	
	// Crea una condicional que indica al usuario que su calificación es buena en caso de ser mayor a 8, pero que no excede del 10
	respuesta("
			int calif;
			if (calif>8 && calif<=10){
				printf("tu calificacion es buena");
			} else {
				printf ("tu calificación es mala");
			}
	");

	// Indica como puedo declarar un arreglo de caracteres en C
	respuesta("
			char arreglo[];
	");
	
	// Este bucle cuantas veces imprime hola mundo
	/*
		int x = 1; 
		do{
			printf("Hola mundo\n");
		} while(x > 1);
	*/
	respuesta("Ninguna, la condicional no se cumple");

	// Que hay de malo en este bucle
	/*
		for(i = 0; i > 10; i++){
			printf("%d\n", i);
		}
	*/
	respuesta("La condicional no se cumple porque la variable "i" no es mayor que 10");

	// Reescribe el siguiente bucle for en un while
	/*
		for(int i=100; i > 40+1; i--){
			printf("%d\n", i);
		} 
	*/
	respuesta("
	        int i = 100;
			while(i>40+1){
				printf("%d\n", i);
				i--;
			}
	");

	// Como puedo mostrar los valores uno a uno del siguiente arreglo? int nums[] = {10, 20, 50, 10, 80};
	respuesta("
			int nums[] = {10, 20, 50, 10, 80};
			for(int i=0; i<5; i++){
				printf("%d\n", nums[i]);
				i++;
			}
	");

	// Haz un programa en el cual le pidas al usuario 10 valores, de estos 10 valores itera para encontrar cuantos son pares y cuantos impares. (Usa arreglos!!!)
	respuesta("
	        int nums[10];
			int contadorPar = 0;
			int contadorImpar = 0;

			for(int i=0; i<10; i++){
				scanf("%d", nums[i]);
				if(nums[i] % 2 == 0){
					contadorPar++;
				} else{
					contadorImpar++;
				}
			}
			printf("En los numeros que introdujo hay %d numeros pares y %d numeros impares", contadorPar, contadorImpar);
	");
}

// Suerte!
