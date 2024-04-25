/*al ingresar una lista de numeros por teclado se pedira al usuario
un numero que se buscara en la lista ya registrada, si el numero
se repite solo contara el primero que el algoritmo encuentre*/

#include <stdio.h>
#include <stdlib.h>
#define CELDAS 6

int main(){
//variables
    int lista[CELDAS];
    int num_a_buscar = 0;
    int posicion = 0;
    int num_encontrado = 0;
//entrada
    printf("Ingrese un maximo de 6 numeros:\n");

    for(int celdas = 0; celdas < CELDAS ; celdas++){
        scanf("%i", &lista[celdas]);
    }
    system("clear");
//numero a buscar
    printf("Que numero desea buscar?\n");
    scanf("%i", &num_a_buscar);
//algoritmo
    for(int celdas = 0; celdas < CELDAS; celdas++){
        if(num_a_buscar == lista[celdas]){
            /*si el numero que desea buscar el usuario dentro de la lista
            es igual a algun numero dentrontro de esta entonces num_encontrado
            sera igual a 1 (verdadero), se guardara la posicion y se terminara
            la busqueda*/
            num_encontrado = 1;
            posicion = celdas;
            break;
        }
    }
//salida
    if(num_encontrado == 1){
        printf("el numero %i si esta en la lista\n", num_a_buscar);
        printf("esta en la posicion [%i]\n", posicion);
    }else{
        printf("el numero no esta en la lista\n");
    }
    
    return 0;
}