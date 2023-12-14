#include "evaluador.c"
// Ingresa tu respuesta dentro de los parentesis
int main(){
    // ¿Qué es un algoritmo?
    respuesta("Una serie de pasos para realizar una tarea");


    // Imprime los tres tipos de errores
    respuesta("lógicos, de sintaxis, ejecución");
   
    // Como se llama la librería de salida y entradada de C
    respuesta("<stdio.h>");
   
    // Desarrolla un algoritmo que permita leer dos valores distintos, determinar cual es el mayor y escribirlo
    respuesta(" #include <stdio.h>
                int main(){
                    int a, b;
                    scanf("%d %d", &a, &b);
                    if (a > b) {
                        printf("a es mayor b");
                        else {
                            printf("b es mayor a a");
                        }
                    }
                }
    ");


    // ¿Qué es un arreglo?
    respuesta("Se le conoce como vector también, y se encarga de guardar datos de un mismo tipo en un casillero");


    //¿Qué esta mal en el siguiente ejemplo?. Escribe la solución
    /*
        while(i<10){
            printf("%c", i);
        }
     */
    respuesta("int i = 1; //falta inicializar la variable
                while (i <= 10){   //si se quiere imprimir hasta el 10 necesita tener <=
                    printf("%d", i); //no se usa "% c" pq es d char
                    i++;  // faltaba agregar i++ para iterar d 1 en 1
                }
    ");
   
    // Declaración if que aumente el pago a un 3% si el puntaje es mayor que 90, de lo contrario aumenta el pago en un 1%
    respuesta(" int main(){
                int puntaje;
                int pago;
                if (puntaje > 90) {
                    pago += 3%   // no sé como representarlo ahí
                } else
                    pago += 1%  //no sé como representarlo ahí help
    }
   
    ");
   
    // Expresión booleana que evalue como verdadero si un numero esta en el rango de 1 a 10, multiplicarlo por 2 en caso de q se encuentre en el rango
    respuesta("");


    // Elabora tres funciones que impriman los números del 10 al 1, con los tres tipos de bucle
    respuesta("Do While:\n
                int i = 1;
                do {
                    printf("%d", i);
                    i++;
                } while (i <= 10)
    ");
    respuesta("For:\n
                for (int i = 1; i <= 10; i++){
                printf("%d", i);
                }
    ");
    respuesta("While:\n
                int i = 1;
                while (i <= 10) {
                    printf("%d", i);
                    i++;
                }
    ");


    // Escribe un algoritmo para calcular la resta de dos numeros enteros, si el resultado de dicha serie esta en el rango de 2 al 8, devuelve 10
    respuesta(" int main (){
                int num1, num2, resta;
                scanf("%d %d", &num1, &num2);
                resta = num1 + num2;
                if (resta >= 2 && resta <=8){
                    return 10;
                }


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
    respuesta();
   
    // Crea una condicional que indica al usuario que su calificación es buena en caso de ser mayor a 8, pero que no excede del 10
    respuesta(" int main(){
                int calif;
                scanf("%d", &calif);
                if (calif >= 8 && calif < 10){
                    printf("Buena calificación");
                }
    }
    ");


    // Indica como puedo declarar un arreglo de caracteres en C
    respuesta("char nombre[tamaño]  por ejemplo  char arreglo[10]");
   
    // Este bucle cuantas veces imprime hola mundo
    /*
        int x = 1;
        do{
            printf("Hola mundo\n");
        } while(x > 1);
    */
    respuesta("una vez");


    // Que hay de malo en este bucle
    /*
        for(i = 0; i > 10; i++){
            printf("%d\n", i);
        }
    */
    respuesta("falta declarar la variable de i, i debe ser menor a 10 no mayor");


    // Reescribe el siguiente bucle for en un while
    /*
        for(int i=100; i > 40+1; i--){
            printf("%d\n", i);
        }
    */
    respuesta(" int i = 100;
                while (i > 40 + 1){
                printf("%d\n", i);
                i--;
    }
    ");


    // Como puedo mostrar los valores uno a uno del siguiente arreglo? int nums[] = {10, 20, 50, 10, 80};
    respuesta(" int main(){
                int nums[5]= {10, 20, 50, 10, 80};
                for(int i = 1, i < 5; i++){
                    printf("%d\n", nums[i]);
                }
                }
   
    ");


    // Haz un programa en el cual le pidas al usuario 10 valores, de estos 10 valores itera para encontrar cuantos son pares y cuantos impares. (Usa arreglos!!!)
    respuesta(" int main (){
                int nums[10];
                int par=0, impar=0;


                for (int i = 1; i <= 10; i++){
                    scanf("%d", nums[i]);
                }
               
                for (int i = 1; i <= 10; i++){
                    if (i%2 == 1){
                        impar++;
                    } else {
                        par++;
                    }
                    printf("pares: %d", par);
                    printf("impares: %d", impar);
                }
    }
   
    ");
}

// Suerte!