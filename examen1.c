#include "evaluador.c"
// Ingresa tu respuesta dentro de los parentesis
int main(){
	// ¿Qué es un algoritmo?
	respuesta("Secuencia ordenada de pasos para lograr un fin");

	// Imprime los tres tipos de errores
	respuesta("compilación, lógicos y de tiempo de ejecucion");

	// Como se llama la librería de salida y entradada de C
	respuesta("#include <stdio.h>");

	// Desarrolla un algoritmo que permita leer dos valores distintos, determinar cual es el mayor y escribirlo
	respuesta(
           Definir valor1, valor2 como enteros
           Lee valor1, valor2
           Si valor1 < valor2 entonces
                Imprimir "Valor 2 es mayor"
           Sino Imprimir "Valor 1 es mayor"
           FinSi
           );

	// ¿Qué es un arreglo?
	respuesta("Es un conjunto de datos de un mismo tipo. Son celdas que almacenan datos de un mismo tipo.");

	//¿Qué esta mal en el siguiente ejemplo?. Escribe la solución
	/*
		while(i<10){
			printf("%c", i);
		}
	 */
	respuesta( "No tiene el "i++", además supongo que está trabajando con enteros entonces debería ser "%d". La solución debería ser:
           while(i<10){
                printf ("%d", i);
                i++;
           }"
           );

	// Declaración if que aumente el pago a un 3% si el puntaje es mayor que 90, de lo contrario aumenta el pago en un 1%
	respuesta();

	// Expresión booleana que evalue como verdadero si un numero esta en el rango de 1 a 10, multiplicarlo por 2 en caso de q se encuentre en el rango
	respuesta(
           int numero
           scanf("%d", &numero);

           if ((numero >= 1) && (numero <= 10)) {
                num = num * num;
           }
           );

	// Elabora tres funciones que impriman los números del 10 al 1, con los tres tipos de bucle
	respuesta("Do While:\n"
           int i = 1;
           do {
            printf("%d", i);
            i++;
           }while(i <= 10);
           );
	respuesta("For:\n"
           for(int = 1; i <= 10; i++)
                printf ("%d", i);
           );
	respuesta("While:\n"
           int i = 1;
           while(i <= 10) {
                printf ("%d", i);
                i++;
           }
           );

	// Escribe un algoritmo para calcular la resta de dos numeros enteros, si el resultado de dicha serie esta en el rango de 2 al 8, devuelve 10
	respuesta(
           "Definir num1, num2, resta como enteros
           Leer num1, num2,
           resta = num1 - num2
           Si resta >= 2 && resta <= 8 entonces
                Imprimir 10
           Sino Imprimir resta
           FinSi"
           );

	// Que imprime el siguiente codigo
	/*
		if(!x){
			printf("Luzio");
		} else{
			printf("Lis");
		}
	*/
	respuesta("Imprime Luzio");

	// Crea una condicional que indica al usuario que su calificación es buena en caso de ser mayor a 8, pero que no excede del 10
	respuesta(
           int calificacion;
           scanf ("%d", &calificacion);
           if ((calificacion > 8) && (calificacion < 10)) {
            printf ("La calificación es buena, pero no excede del 10");
           }
           );

	// Indica como puedo declarar un arreglo de caracteres en C
	respuesta("Se declaran así: TipoDeDato NombreVariable[Cantidad de datos que almacenará];");

	// Este bucle cuantas veces imprime hola mundo
	/*
		int x = 1;
		do{
			printf("Hola mundo\n");
		} while(x > 1);
	*/
	respuesta("Ninguna");

	// Que hay de malo en este bucle
	/*
		for(i = 0; i > 10; i++){
			printf("%d\n", i);
		}
	*/
	respuesta("El operador debería ser < ");

	// Reescribe el siguiente bucle for en un while
	/*
		for(int i=100; i > 40+1; i--){
			printf("%d\n", i);
		}
	*/
	respuesta(
           int i = 100
           while (i > 40+1) {
                printf("%d\n", i);
                i--;
           }
           );

	// Como puedo mostrar los valores uno a uno del siguiente arreglo? int nums[] = {10, 20, 50, 10, 80};
	respuesta(
           for (int i = 0; i < 5; i++) {
            printf ("%d ", nums[i]);
           }
           );

	// Haz un programa en el cual le pidas al usuario 10 valores, de estos 10 valores itera para encontrar cuantos son pares y cuantos impares. (Usa arreglos!!!)
	respuesta(
           int valores[10] = {};
           for (int i = 0; i < 10; i++) {
            scanf("%d", &valores[i]);
           }


           );
}

// Suerte!
