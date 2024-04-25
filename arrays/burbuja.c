/*al ingresar 5 numeros enteros al arreglo, un algoritmo los ordena
de menor a mayor, conocido como "Bubble Sort" porque el numero mas grande
sube como si fuera una burbuja*/

#include <stdio.h>
#define MAX 5
int main(){
//variables
    int lista[MAX];
    int contador = MAX;
//entrada
    printf("ingresa 5 numeros enteros:\n");

    for(int i = 0; i < MAX; i++){
        printf("faltan [%i] datos\n", contador--);
        scanf("%i", &lista[i]);
    }
//algoritmo
    for(int ciclos = 0; ciclos < MAX; ciclos++){

        for(int num = 0; num < (MAX-1); num++){

            if(lista[num] > lista[num+1]){
                /*intercambio de variable en la que un numero "x" pasa a ser "y"
                al igual que "y" pasa a ser "x" sin que se borre el valor de ninguna*/
                int num_c = lista[num];
                lista[num] = lista[num+1];
                lista[num+1] = num_c;

            }
        }
    }
//sallida
    printf("Los datos ordenados de menor a mayor\n");

    for(int i = 0; i < MAX; i++){
        printf("pocision [%i] dato %i,\n",i+1, lista[i]);
    }

    return 0;
}