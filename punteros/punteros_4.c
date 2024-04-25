/*estos son punteros a funciones, una funcion se manda a llamar con un puntero*/

#include <stdio.h>
//se declaran dos funciones 
int suma(int num1, int num2){
    return num1 + num2;
}
int resta(int num1, int num2){
    return num1 - num2;
}
//FUNCION PRINCIPAL
int main(){
    int num1 = 0, num2 = 0;
    int (*puntero)(int, int); // se declara un puntero a una funcion, que devuelve un nimero entero y con el parametro de dos numeros enteros 
//entrada de mis dos numeros
    printf("introduce tu primer numero:\n");
    scanf("%i", &num1);
    printf("introduce tu primer numero:\n");
    scanf("%i", &num2);
//el puntero a funcion se inicializa con la llamada a la funcion suma
    puntero = &suma; //es como si ahora (puntero) fuera (suma)
    //cuando se imprime el resultado se pide con el (*puntero), y los dos parametros
    printf("resultado de la suma: %i\n", (*puntero)(num1, num2));
//ocurre los mismo con la resta
    puntero = &resta;
    printf("resultado de la resta: %i\n", (*puntero)(num1, num2));
    return 0;
}