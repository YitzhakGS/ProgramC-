#include <stdio.h>

int main () {
//declaro una variable de tipo puntero
    int *puntero;
//declaro un erreglo de numeros enteros
    int lista[10] ={1, 2, 3, 4, 4, 7, 8, 9, 5, 4};
//transfiero los valores de el arreglo al puntero, ahora este es mi arreglo o lista
    puntero = lista;
    for(int i=0; i < 10; i++){
        /*recorro el arreglo pero en lugar de poner lista[i], pongo *puntero
        y el final le hago un incremento a este para que recorra cada elemento */
        printf("\n posicion[%d] = valor :%d ",i, *puntero);
        printf("\tDireccion: %p",&puntero);
        puntero++;
    }
    printf("\n");
    return 0;
}