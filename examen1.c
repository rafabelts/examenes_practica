#include "evaluador.c"
// Ingresa tu respuesta dentro de los parentesis
int main(){
	// ¿Qué es un algoritmo?
	respuesta("un algoritmo es una secuencia de instrucciones para resolver un problema, puede ser una idea y el programa esta formado de ellos");

	// Imprime los tres tipos de errores
	respuesta("compilación, logico, sintaxis ");

	// Como se llama la librería de salida y entradada de C
	respuesta("iostream");

	// Desarrolla un algoritmo que permita leer dos valores distintos, determinar cual es el mayor y escribirlo
	respuesta("int a, b;
             "scanf("%d %d", &a, &b);
             "if (a > b) {
                "printf(a ""es mayor a"" b)
                "}
                "else {
                    "printf(b ""es mayor a"" a)
                    "}
             );

	// ¿Qué es un arreglo?
	respuesta("una variable que almacena sus elementos en la memoria ");

	//¿Qué esta mal en el siguiente ejemplo?. Escribe la solución
	/*
		while(i<10){
			printf("%c", i);
		}
	 */
	respuesta(
		"while(i<10){
			"printf("%c", i);
			"i++;
		"}
		);

	// Declaración if que aumente el pago a un 3% si el puntaje es mayor que 90, de lo contrario aumenta el pago en un 1%
	respuesta("if (puntaje>90) {
           "aumento=pago * (3/100);
           "printf(pago+aumento);
           "}
           "else {
               "aumento=pago * (1/100);
                "printf(pago+aumento);
               "}
           );

	// Expresión booleana que evalue como verdadero si un numero esta en el rango de 1 a 10, multiplicarlo por 2 en caso de q se encuentre en el rango
	respuesta();

	// Elabora tres funciones que impriman los números del 10 al 1, con los tres tipos de bucle
	respuesta("void imprimir_numeros_do_while(void) {
        "int i = 10;
            "do {
            "printf("%d\n", i);
            "i--;
        "} while (i >= 1);
         "   }
        ");
	respuesta("void imprimir_numeros_for(void) {
        "for (int i = 10; i >= 1; i--) {
            "printf("%d\n", i);
            "}
            "}
            );
	respuesta("void imprimir_numeros_while(void) {
            "int i = 10;
            "while (i >= 1) {
        "printf("%d\n", i);
        "i--;
        "});

	// Escribe un algoritmo para calcular la resta de dos numeros enteros, si el resultado de dicha serie esta en el rango de 2 al 8, devuelve 10
	respuesta("int a, b;
           "scanf("%d %d", &a, &b);
            "resta = a - b
           "  if (2 <= resta && resta <= 8) {
            "printf("10");
            "} else {
            "printf("tu resta no esta dentro del rango");
                "}
            "}
           );

	// Que imprime el siguiente codigo
	/*
		if(!x){
			printf("Luzio");
		} else{
			printf("Lis");
		}
	*/
	respuesta("si el usuario pone X pone Lis, si pone otra cosa pone Luzio");

	// Crea una condicional que indica al usuario que su calificación es buena en caso de ser mayor a 8, pero que no excede del 10
	respuesta("if (8 >= calificacion && calificacion <= 10) ");

	// Indica como puedo declarar un arreglo de caracteres en C
	respuesta("char nombre[longitud_del_arreglo_si_se_conoce];");

	// Este bucle cuantas veces imprime hola mundo
	/*
		int x = 1;
		do{
			printf("Hola mundo\n");
		} while(x > 1);
	*/
	respuesta("1 vez pq el primero se ejecuta la primera parte que es DO y se para pq la condicional no se cumple");

	// Que hay de malo en este bucle
	/*
		for(i = 0; i > 10; i++){
			printf("%d\n", i);
		}
	*/
	respuesta("en que la condicional es falsa y no imprimira nada");

	// Reescribe el siguiente bucle for en un while
	/*
		for(int i=100; i > 40+1; i--){
			printf("%d\n", i);
		}
	*/
	respuesta("int i=100;
           "while(i > 40+1){
           "printf("%d\n", i);
           "i--;
           "}
           );

	// Como puedo mostrar los valores uno a uno del siguiente arreglo? int nums[] = {10, 20, 50, 10, 80};
	respuesta("for (i = 0; i < sizeof(nums) / sizeof(nums[0]); i++) {
    "printf("%d\n", nums[i]);
  "}
  );

	// Haz un programa en el cual le pidas al usuario 10 valores, de estos 10 valores itera para encontrar cuantos son pares y cuantos impares. (Usa arreglos!!!)
	respuesta("al chile no se, hasta ahi llego mi conocimento");
}

// Suerte!
