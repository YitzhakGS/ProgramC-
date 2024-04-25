/*el siguiente programa realiza el pasaje de parametros por referencia a una funcion, 
mediane el uso de punteros accediendo directamente a la direccion de memoria de la variable 
ya creada*/

#include <stdio.h>
//funcion que recive punteros con la direccion de memoria de las variablres
void operaciones(int *num1, int *num2, int *cociente, float *resultado){
    //cada variable  accede al dato que tiene almacenado
    *cociente = *num1 / *num2;
    *resultado = *num1 % *num2;
}

int main () {
//variables
    int num1 = 0, num2 = 0, cociente = 0;
    float resultado = 0;
//entrada
    printf("ingresa el primer nuemero:\n");
    scanf("%i", &num1);
    printf("ingresa el segunso numero:\n");
    scanf("%i", &num2);
//funcion que sus arametros al tener el & madna la direccion de memoria de las variables
    operaciones(&num1, &num2, &cociente, &resultado);
    printf("El cociente de los dos numeros es :%i\nLa divicion de los dos numeros son: %.1f", cociente, resultado);

    return 0;
}