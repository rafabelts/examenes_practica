// Realiza una calculadora básica que ocupe le pregunte al usuario cuantos valores va a usar para la operacion que el indique
#include <stdio.h>

int main(){
    int valores;
    int opcion;
    float numeros[valores];
    

    printf("Ingrese la cantidad de valores para la operación\n");
    scanf("%d", &valores);
    if(valores<2){
        printf("Se necesitan al menos 2 números para la operación");
        return 0;
    } 

    do{
        printf("Seleccione la operación que desea realizar:\n");
        printf("1. Suma\n");
        printf("2. Resta\n");
        printf("3. Multiplicación\n");
        printf("4. División\n");
        printf("5. Salir\n");

        scanf("%d", &opcion);

        if(opcion == 1){

            printf("Ingrese los valores\n");
            for (int i = 0; i < valores; i++){
                scanf("%f", &numeros[i]);
            } 

            float resultado = 0;
            for(int i = 0; i < valores; i++ ){
                resultado += numeros[i];
            }
            printf ("%.3f\n", resultado);
            printf(" \n");

        }else if(opcion == 2){

            printf("Ingrese los valores\n");
            for (int i = 0; i < valores; i++){
                scanf("%f", &numeros[i]);
            } 

            float resultado = numeros[0];
            for(int i = 1; i < valores; i++ ){
                resultado -= numeros[i];
            }
            printf ("%.3f\n", resultado);
            printf(" \n");

        }else if(opcion == 3){

            printf("Ingrese los valores\n");
            for (int i = 0; i < valores; i++){
                scanf("%f", &numeros[i]);
            } 

            float resultado = numeros[0];
            for(int i = 1; i < valores; i++ ){
                resultado *= numeros[i];
            }
            printf ("%.3f\n", resultado);
            printf(" \n");

        }else if(opcion == 4){

            printf("Ingrese los valores\n");
            for (int i = 0; i < valores; i++){
                scanf("%f", &numeros[i]);
            } 

            float resultado = numeros[0];
            for(int i = 1; i < valores; i++ ){
                resultado /= numeros[i];
            }
            printf ("%.3f\n", resultado);
            printf(" \n");

        }else if(opcion > 5 || opcion < 1){
            printf("No se reconoce esta opción, si desea salir presione 5\n");
            printf(" \n");
        }
        
    }while(opcion != 5);

    return 0;
}


/* Programa donde:
1. El usuario ingrese cuantos valores tiene su arreglo
2. El usuario llene el arreglo
3. Buscar cual es el dato mayor
4. Mostrar cuantos datos son menores al dato mayor
5. Mostrar el promedio de los datos
*/
#include <stdio.h>

int main(){

    int valores;
    int vector[valores];
    int datoMayor = 0;
    float promedio = 0;
    int datosMenores = 0;

    printf("Ingrese cuantos valores desea en su vector:\n");
    scanf("%d", &valores);

    printf("Ingrese los valores para el vector\n");
    for (int i = 0; i < valores; i++){
        scanf("%d", &vector[i]);
        if(datoMayor < vector[i]){
            datoMayor = vector[i];
        }
        promedio += vector[i];
    }
    
    for (int i = 0; i < valores; i++){
    	if (datoMayor > vector[i]){
    		datosMenores++;
		}
	}
	
    promedio /= valores;

    printf("El dato mayor es: %d\n", datoMayor);
    printf("La cantidad de datos menores al dato mayor son: %d\n", datosMenores);
    printf("El promedio de los datos es: %.2f\n", promedio);

    return 0;
}