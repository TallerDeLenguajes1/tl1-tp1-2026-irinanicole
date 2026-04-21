#include <stdio.h>

int main()
{
    printf("\nHola Mundo\n");
    
    /*
    e) Declare un puntero en el procedimiento principal que apunte a una variable 
        de algún tipo y muestre por pantalla lo siguiente: 
        1) El contenido del puntero 
        2) La dirección de memoria almacenada por el puntero.  
        3) la dirección de memoria de la variable. 
        4) la dirección  de memoria del puntero. 
        5) el tamaño de memoria utilizado por esa variable usando la función sizeof()
    */
   int variable = 54;
    int * p = &variable;
    
    printf("\nEl contenido del puntero: %d",*p);
    printf("\nLa direccion almacenda por el puntero: %p",p);
    printf("\nLa direccion de memoria de la variable: %p",&variable);
    printf("\nLa direccion de memoria del puntero: %p",&p);
    printf("\nEl tamanio de memoria utilizado por esa variable: %d bytes", sizeof(variable));

    
    return 0;
}