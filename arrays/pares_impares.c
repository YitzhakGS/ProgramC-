/*mediante un arreglo se registran 5 numeros enteros
y se suman todos los numeros pares y tambien todos los impares*/

#include <stdio.h>
#define CELDAS 5

int main(){
//variables
    int lista[CELDAS];
    int sumaP = 0, sumaI = 0, res = 0;
//entrada
    printf("introduce 5 numeros enteros\n");
    for(int celda = 0; celda < CELDAS; celda++){
        scanf("%i", &lista[celda]);
    }
/*algoritmo: se recorre el arreglo para conocer el residuo de dividirlo 
entre dos a cada elemento y saber si este es par o impar, para despues sumarlos */
    for( int celda = 0; celda < CELDAS; celda++){
        res = lista[celda] % 2;

        if(res == 0 ){
            sumaP += lista[celda];
        }else{
            sumaI += lista[celda];
        }
    }
//salida
    printf("la suma de los numeros pares es: %i\n", sumaP);
    printf("la suma de los numeros impares es: %i\n", sumaI);

    return 0;
}
