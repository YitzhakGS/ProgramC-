/*el codigo copia una cadenad de caracteres a un bloque de memoria dinamico medinte 
el uso de (malloc) que se guarda en un puntero */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char nombre[20];
    char *puntero_nombre;
    int longitud;
//se copia una cadena a la ya creada (nombre)
    strcpy(nombre,"Guerrero");
//se mide la longitud de la cadena
    longitud = strlen(nombre);
//se usa la funcion (malloc) para crear un bloque de memoria dinamico
/*este bloque tinene la longitud de (longitud+1)*sizeof(char), se agrega el +1 por el valor nulo('\0')
que indica el final de la cadenay se multiplica por sizeof(char), este devuelve el tamaño en bytes de
un elemento de tipo char calculando la longitud total de bits que tendra el puntero*/
    puntero_nombre = malloc((longitud+1)*sizeof(char));
//se copia la cadena (nombre) al puntero con la longitud exacta con 
    strcpy(puntero_nombre,nombre);
//se imprime en pantalla el puntero como string
    printf("Nombre: %s",puntero_nombre);

    return 0;
}