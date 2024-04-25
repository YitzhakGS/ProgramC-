//este fue el primero que hice, creo q si se nota
//este programa registra 5 numeros y los suma, es todo 
#include <stdio.h>

int main(){
    int numeros[5];
    int suma;
    printf("ingresa 5 numeros enteros:\n");
//entrada de datos 
    for(int celda = 0; celda < 5; celda++){
        scanf("%i", &numeros[celda]);
    }
//suma los datos del arreglo
    for(int celda = 0; celda < 5; celda++){
        suma += numeros[celda];
    }
//imprime el resultado de la suma
    printf("La suma total es: %i", suma);

    return 0;
}