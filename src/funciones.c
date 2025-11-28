#include "funciones.h"
///// Ahorcado /////
void ahorcado() {
    char palabraSecreta[]="computadora"; 
    int longitud=strlen(palabraSecreta);
    char progreso[50];      
    int intentos=6;       
    char letra;
    int aciertos=0;
    for (int i=0; i<longitud; i++) {
        progreso[i]='_';
    }
    progreso[longitud]='\0';
    printf("=== JUEGO DEL AHORCADO ===\n");
    
    while (intentos>0 && aciertos<longitud) {
        printf("\nPalabra: %s\n", progreso);
        printf("Intentos restantes: %d\n", intentos);
        printf("Ingresa una letra: ");
        scanf("%c", &letra);
        letra=tolower(letra); 
        int encontrado=0;
        for (int i=0; i<longitud; i++) {
            if (palabraSecreta[i]==letra && progreso[i]=='_') {
                progreso[i]=letra;
                aciertos++;
                encontrado=1;
            }
        }
        if (!encontrado) {
            printf("Letra incorrecta\n");
            intentos--;
        } else {
            printf("Bien\n");
        }
    }
    printf("\n--------- RESULTADO ---------\n");
    if (aciertos == longitud) {
        printf("Ganaste :) La palabra era: %s\n", palabraSecreta);
    } else {
        printf("Perdiste :( La palabra era: %s\n", palabraSecreta);
    }
}
void snake(){
    printf("Aun no");
}