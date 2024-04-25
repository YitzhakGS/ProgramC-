/*
el siguiente programa es un juego donde imaginemos que tenemos un tablero de 4x4, en cada cesilla
hay una puerta (osea los 0), y detras de esta hay una persona (se representa como un 1) el objetivo
del usuario es adivinar detras de que puerta (0) se encuentra esa persona (1), y se tienen 3 intentos
para adivinar, si no se consigue solo termina el programa, ademas, despues de cada intento fallido
se actualizara el tablero mostrando un (*) en la "puerta" que selecciono el usuario, y al final se
revelara el tablero con la ubicacion de la persona (osea el 1).

Realmente estoy muy orgulloso de este programa en particular ya que es el mas "conplejo" :3
*/

#include <stdio.h>
#include <stdlib.h> //para usar la funcion srand y rand
#include <time.h> //para usar la funcion time


//se declaran como MACROS/constantes las filas y celdas que tendra el tablero para mayor comodidad
#define FILAS 4
#define CELDAS 4

//funcion que imprime la matriz o el tablero
void imprimir_Matriz(char tablero[FILAS][CELDAS]){
    for(int filas = 0; filas < FILAS; filas++){
        for(int celdas = 0; celdas < CELDAS; celdas++){
            printf("%c ", tablero[filas][celdas]);
        }
        printf("\n");
    }
}

/*
esta funcion se encarga de generar dos numeros aleatorios que seran la posicion en la que se va
a esconder nuetra persona (1), esto mediante el uso de la funcion "srand()" se utiliza "time(NULL)"
para inicializar este contador que por lo que entendi trabaja como un reloj en segundos, este
numero se muestra gracias a "rand() % x+1" aqui lo que hacemos es que el numero "aleatorio" que 
arrojo "srand(time(NULL))" tenga un limite o un rango establecido con la operaciondel MODULO y "x+1"
que este ultimo funciona como el limite.
*/

//la funcion que retorna el valor "aleatorio de "fila_aleatoria
int posicion_aleatoria_f(int count, int fila_a, int celda_a){
    while(count < 20){
        srand(time(NULL));
        fila_a = rand() % FILAS;
        int num = rand() % CELDAS;
        if(fila_a != num){
            celda_a = num;
            break;
        }
        count++;
    }
    return fila_a;
}
//la funcion que retorna el valor "aleatorio de "celda_aleatoria
int posicion_aleatoria_c(int count, int fila_a, int celda_a){
    while(count < 20){
        srand(time(NULL));
        fila_a = rand() % FILAS;
        int num = rand() % CELDAS;
        if(fila_a != num){
            celda_a = num;
            break;
        }
        count++;
    }
    return celda_a;
}

/*
esta funcion se encarga de reguistrar la pocision en la que el usuario quiere buscar para
saber si se encuentra la persona (1), ya que se registraron los numeros que tienen que ser mayores
a -1 y menores que 4 se comparan los numros y si son iuales el valor que retornan es 1 pero si no
el valor es 0, actualizando el tablero con sus caracteres correspondientes  
*/
int adivina(int fila_a, int celda_a, char tablero[FILAS][CELDAS]){
    int b_fila = 0, b_celda = 0, resultado = 0;
    do{
        printf("en que fila cree que se encuentra?\n");
        scanf("%i", &b_fila);
        printf("en que colunma cree que se encuentra?\n");
        scanf("%i", &b_celda);
        system("clear");

    }while((b_fila < 0 || b_fila > 3) || (b_celda < 0 || b_celda > 3));

    if((fila_a == b_fila) && (celda_a == b_celda)){
        tablero[b_fila][b_celda] = '1';
        resultado = 1;
    }else{
        tablero[b_fila][b_celda] = '*';
        resultado = 0;
    }

    return resultado;
}
//FUNCION PRINCIPAL
int main(){
//variables
    int fila_a = 0, celda_a = 0, contador = 1, count = 3;;
//este es nuestro tablero 4x4
    char tablero[FILAS][CELDAS] = {
        {'0', '0', '0', '0'},
        {'0', '0', '0', '0'},
        {'0', '0', '0', '0'},
        {'0', '0', '0', '0'}
    };
//se mandan a llamar las funciones de numeros aleatorios 
    fila_a = posicion_aleatoria_f(contador, fila_a, celda_a);
    celda_a = posicion_aleatoria_c(contador, fila_a, celda_a);

//  si desea conocer la ubicacion quite este los comentarios, los numeros aparecen arriba de las instrucciones
//  printf("\n%i ", fila_a);
//  printf("%i \n", celda_a);

//son las instrucciones para el usuario
    printf("ENCUENTRA EL '1' ESCONDIDO DETRAS DE UNO DE LOS '0'\n");
    printf("las filas van de (0-3) de arriba a abajo \ny las columnas van de (0-3) de izquierda a derecha\n");
    printf("\n");
//funcion que miestra en pantalla el tablero
    imprimir_Matriz(tablero);
//se inicia un ciclo para que el usuario tenga 3 intentos 
    while(contador < 4){
        printf("\n");
        printf("TIENES %i INTENTOS DE 3\n", count);
        //funcion que reguistra y compara las pocisiones aleatorias con las que introdujo el usuario
        int intento = adivina(fila_a, celda_a, tablero);
        //de la funcion se retorna un numero 0 o 1, y gracias a este se sabe si fallo o acerto
        if(intento == 0){
            printf("MUY CERCA!!! INTENTALO DE NUEVO!!!\n");
            printf("\n");
            imprimir_Matriz(tablero);
            printf("\n");
            contador++;
            count-=1;
        }else {
            printf("BRAVO!!! LO ENCONTRASTE!!\n");
            printf("\n");
            imprimir_Matriz(tablero);
            printf("\n");
            //se usa break para que el programa termine una vez q se encontro a la persona (1)
            break;
        }
        //cuando el contador es igual a 4 se termina el programa
        if(contador == 4){
            printf("Mala suerte, sigue intentando\n");
            printf("\n");
            tablero[fila_a][celda_a] = '1';
            imprimir_Matriz(tablero);
        }
    }

    return 0;
}