//este arreglo reguistra 5 numeros enteros y encientra el numero mas grande y el mas chico

#include <stdio.h>
#define NUM_C 5

int main(){
//variables
    int numeros[NUM_C];
//estas variables funcionan como punto de partida y se inicializa con 0 y con un num muy grande
    int mayor = 0;
    int menor = 1000000;
//entrada de datos en el arreglo
    for(int celdas = 0; celdas < NUM_C; celdas++){
        scanf("%i", &numeros[celdas]);
    }
//hace la desicion de saber cual es el mas grande y el mas chico
    for(int celdas = 0; celdas < NUM_C; celdas++){
        if(numeros[celdas] > mayor){
            mayor = numeros[celdas];
        }
        if(numeros[celdas] < menor){
            menor = numeros[celdas];
        }
    }
//salida de datos 
    printf("el numero mayor es: %i\n", mayor);
    printf("el numero menor es: %i\n", menor);


    return 0;
}