#include "evaluador.c"
// Ingresa tu respuesta dentro de los parentesis
int main(){
	// ¿Qué es un algoritmo?
	respuesta("Son los pasos para hacer una tarea");

	// Imprime los tres tipos de errores
	respuesta("Errores de sintaxis, errores lógicos, errores de ejecución");
	
	// Como se llama la librería de salida y entradada de C
	respuesta();
	
	// Desarrolla un algoritmo que permita leer dos valores distintos, determinar cual es el mayor y escribirlo
	respuesta(
		"inicio
		leer valor1
		leer valor2
		if valor1>valor2{
			Escribir "valor1 es mayor que valor2"}
		else{
			Escribir "valor2 es mayor que valor1"}
		fin"
		);

	// ¿Qué es un arreglo?
	respuesta("Es una estructura que almacena varios elementos de un tipo");

	//¿Qué esta mal en el siguiente ejemplo?. Escribe la solución
	/*
		while(i<10){
			printf("%c", i);
		}
	 */
	respuesta( "no se le da un valor a la variable, está mal el especificador para imprimir la variable y no hay un incremento en la variable para que el programa llegue a un final
		i = 1
		while(i<10){
			printf("%d, i");
			i++;
		}"
	);
	
	// Declaración if que aumente el pago a un 3% si el puntaje es mayor que 90, de lo contrario aumenta el pago en un 1%
	respuesta(
		"int puntaje = x;
		float pago = x;
		if(puntaje>=90){
			float aumento = pago * 0.03;
			pago += aumento;
		}else{
			float aumento = pago * 0.01;
			pago += aumento;
		}"
	);
	
	// Expresión booleana que evalue como verdadero si un numero esta en el rango de 1 a 10, multiplicarlo por 2 en caso de q se encuentre en el rango
	respuesta(
		"if(i>=1 && i<=10){
			número * 2;
		}else{
			printf("No está dentro del rango");
		}"
	);

	// Elabora tres funciones que impriman los números del 10 al 1, con los tres tipos de bucle
	respuesta( "void DoWhile(){
		int i = 10
		Do{
			printf("%d", i);
			i--;
		}While(i>=1);
	}"
	);
	respuesta( "void for(){
		for(int i=10; i>=1; i--){
			printf("%d\n", i);
		}
	}"
	);
	respuesta( "void while(){
		int = 10
		while(i>=1){
			printf("%d\n", i);
			i--;
		}
		}"
	);

	// Escribe un algoritmo para calcular la resta de dos numeros enteros, si el resultado de dicha serie esta en el rango de 2 al 8, devuelve 10
	respuesta( "#include <stdio.h>
	int main(){
		int numero1, numero2;
		scanf("%d", &numero1);
		scanf("%d", &numero2);
		int resta = numero1 - numero2;
		if(resta >= 2 && resta <= 8 ){
			return 10;
		}else{
			printf("%d\n", resta);
		}
		return 0;
	}"
	);
	
	// Que imprime el siguiente codigo
	/*
		if(!x){
			printf("Luzio");
		} else{
			printf("Lis");
		}
	*/
	respuesta("No sabemos que valor tiene X, por lo tanto no se puede saber que imprimirá");
	
	// Crea una condicional que indica al usuario que su calificación es buena en caso de ser mayor a 8, pero que no excede del 10
	respuesta(
		"if(calificacion>10){
			printf("la calificación excede el parametro\n");
			return 0;
		}else if (calificacion > 8){
			printf("Felicidades, tienes una buena calificación\n");
		}else{
			printf("Que burro\n");
		}"
	);

	// Indica como puedo declarar un arreglo de caracteres en C
	respuesta( "char nombreArreglo[];" );
	
	// Este bucle cuantas veces imprime hola mundo
	/*
		int x = 1; 
		do{
			printf("Hola mundo\n");
		} while(x > 1);
	*/
	respuesta( "Lo imprime una vez" );

	// Que hay de malo en este bucle
	/*
		for(i = 0; i > 10; i++){
			printf("%d\n", i);
		}
	*/
	respuesta( "Si la variable i no se declaró antes, ese sería un error y la condición del bucle está mal, ya que debería de ser i <10 si es que se desea que imprimir los números" );

	// Reescribe el siguiente bucle for en un while
	/*
		for(int i=100; i > 40+1; i--){
			printf("%d\n", i);
		} 
	*/
	respuesta(
		"int i = 100;
		while (i > 40+1){
			printf("%d\n", i);
			i--;
		}"
	);

	// Como puedo mostrar los valores uno a uno del siguiente arreglo? int nums[] = {10, 20, 50, 10, 80};
	respuesta( "usando un ciclo for:
		int nums[] = {10, 20, 50, 10, 80};
		for(int i = 0; i < 5; i++){
			printf("%d", nums[i]);
		}"
	);

	// Haz un programa en el cual le pidas al usuario 10 valores, de estos 10 valores itera para encontrar cuantos son pares y cuantos impares. (Usa arreglos!!!)
	respuesta( "#include <stdio.h>
		int main(){
			int impares = 0;
			int pares = 0;
			int valores[10];
			printf("Ingrese los 10 valores");
			for(int i = 0; i<10; i++){
				scanf("%d", &valores[i]);
				if (valores[i] % 2 != 0){
					impares++;
				}else{
					pares++;
				}
			}
			printf("Número de pares = %d\n", pares);
			printf("Número de impares = %d\n", impares);
		}"
	);
}

// Suerte!
