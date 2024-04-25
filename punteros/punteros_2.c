#include <stdio.h>

/*cuando se pasa un arreglo a un funcion, este ya lo hace como un tipo puntero
por lo que solo estoy escriviendo otro manera en la cual se puede hacer*/
void modificacion(int *a, int *n){
    for (int i = 0; i < *n; i++){
        a[i] *= 2;
    }
}

int main (){

    int lista[] = {10, 4, 8, 3, 13, 5};
/*calculo la longuitud de mi arreglo dividiendo el el tamaño total del
arreglo entre el tamaño de un elemento individual del arreglo*/
    int size = sizeof(lista)/sizeof(lista[0]);
//en los paramtos de la funcion unicamente mandamos como referencia "size"
//"lista" no se pasa por referencia ya q este lo hace sin la necesidad de declararlo
    modificacion(lista, &size);
//salida del arreglo ya cambiado
    for (int i = 0; i < size; i++){
        printf("%i ", lista[i]);
    }
    
    return 0;
}