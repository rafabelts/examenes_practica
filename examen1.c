#include "evaluador.c"
// Ingresa tu respuesta dentro de los parentesis
int main(){
	// ¿Qué es un algoritmo?
	respuesta("son series de pasos para realizar una tarea, realizar o automatizar");

	// Imprime los tres tipos de errores
	respuesta("compilacion, ejecucion y logicos perro segun ahora son logicos, regresion y sintaxis   ");
	
	// Como se llama la librería de salida y entradada de C
	respuesta("stdio.h");
	
	// Desarrolla un algoritmo que permita leer dos valores distintos, determinar cual es el mayor y escribirlo
	respuesta("int a,b,mayor;
				scanf('%d %d', &a, &b);
				mayor = a;
				if(mayor < b){
					mayor = b
					printf('%d' mayor);
				}printf('%d',mayor);
	
	
	");

	// ¿Qué es un arreglo?
	respuesta("un arreglo es un vector que almacena numeros en forma de lista que van enumerados por un indice que inicia en el 0");

	//¿Qué esta mal en el siguiente ejemplo?. Escribe la solución
	/*
		while(i<10){
			printf("%c", i);
		}
	 */
	respuesta("%c imprimer un caracter pero tambien que la i no tiene un fin o no tiene el aumentador por lo que se encicla si i cumple la condicion");
	
	// Declaración if que aumente el pago a un 3% si el puntaje es mayor que 90, de lo contrario aumenta el pago en un 1%
	respuesta("");
	
	// Expresión booleana que evalue como verdadero si un numero esta en el rango de 1 a 10, multiplicarlo por 2 en caso de q se encuentre en el rango
	respuesta();

	// Elabora tres funciones que impriman los números del 10 al 1, con los tres tipos de bucle
	respuesta("Do While:\n");
	respuesta("For:\n");
	respuesta("While:\n");

	// Escribe un algoritmo para calcular la resta de dos numeros enteros, si el resultado de dicha serie esta en el rango de 2 al 8, devuelve 10
	respuesta();
	
	// Que imprime el siguiente codigo
	/*
		if(!x){
			printf("Luzio");
		} else{
			printf("Lis");
		}
	*/
	respuesta("dependera del valor de la variabel X ");
	
	// Crea una condicional que indica al usuario que su calificación es buena en caso de ser mayor a 8, pero que no excede del 10
	respuesta();

	// Indica como puedo declarar un arreglo de caracteres en C
	respuesta("char arreglo[10]");
	
	// Este bucle cuantas veces imprime hola mundo
	/*
		int x = 1; 
		do{
			printf("Hola mundo\n");
		} while(x > 1);
	*/
	respuesta("solo una vez");

	// Que hay de malo en este bucle
	/*
		for(i = 0; i > 10; i++){
			printf("%d\n", i);
		}
	*/
	respuesta("que no sea inicializado ninguna i");

	// Reescribe el siguiente bucle for en un while
	/*
		for(int i=100; i > 40+1; i--){
			printf("%d\n", i);
		} 
	*/
	respuesta(
		
		
		"int i = 100;
		while(i > 40+1){
		printf('%d/n', i);
		i--
	}");

	// Como puedo mostrar los valores uno a uno del siguiente arreglo? int nums[] = {10, 20, 50, 10, 80};
	respuesta("con un blucle for");

	// Haz un programa en el cual le pidas al usuario 10 valores, de estos 10 valores itera para encontrar cuantos son pares y cuantos impares. (Usa arreglos!!!)
	respuesta();
}

// Suerte!
