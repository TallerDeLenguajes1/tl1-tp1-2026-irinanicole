#include <stdio.h>

void invertir_numero(int *p) {
    int num = *p;
    int invertido = 0;
    while (num > 0) {
        invertido = (invertido * 10) + (num % 10);
        num = num / 10;
    }
    *p = invertido;
}

void dividir_en_dos(int *p) {
    *p = *p / 2;
}

void sumar_digitos(int *p) {
    int num = *p;
    int suma = 0;
    while (num > 0) {
        suma = suma + (num % 10);
        num = num / 10;
    }
    *p = *p + suma;
}

void procesar_enigma(int *numero) {
    invertir_numero(numero);
    dividir_en_dos(numero);
    sumar_digitos(numero);
}

int main() {
    int dato_secreto = 452;
    
    printf("Iniciando depuracion con el valor: %d\n", dato_secreto);
    
    // Instrucción para el alumno: 
    // Pon un breakpoint aquí (F9) y usa F11 (Step Into) para entrar a cada función.
    procesar_enigma(&dato_secreto);
    
    printf("Resultado final del enigma: %d\n", dato_secreto);
    
    return 0;
}