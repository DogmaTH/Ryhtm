#include "funciones.h"
int main (){
    int op;
    ////// MENU ///////
    while(1){
        printf("--------Menu de Juegos uwu----------\n");
        printf("1.- Snake\n");
        printf("2.- Conduccion\n");
        printf("3.- Ahorcado\n");
        printf("4.- Salir\n");
        scanf("%d", &op);
        if (op==4){
            printf("Cerrando ..........");
            break;
        }
        switch (op){
            case 1:
            snake();
            break;
            case 2:
            break;
            case 3:
            ahorcado();
            break;
            default:
            printf("opcion no valida");
        }

    }
}