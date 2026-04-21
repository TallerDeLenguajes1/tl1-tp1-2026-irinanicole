#include <stdio.h>

int potencia_cuadrada(int x);
void potencia_cuadrada_2(int * x);
void mostrar_direc_y_contenido(int * variable);
void invertir(int * x, int * y); //deberá devolver en el valor de a en la variable b, y en el valor de b el valor de a  
void orden(int * x, int * y); //deberá devolver en el valor de a el valor más chico, y en el valor de b el valor más grande

int main()
{
    // a) Haga una función que devuelva el cuadrado de un número 
    int num;
    printf("\nIngrese un numero: ");
    scanf("%d", &num);

    int cuadrado =  potencia_cuadrada(num);
    printf("\n\nEl cuadrado de %d es %d",num,cuadrado);

    // b) Haga la función anterior, pero devolviendo un tipo void
    int aux_num= num;
    potencia_cuadrada_2(&aux_num);
    printf("\n\nEl cuadrado de %d calculado con la función 2 es: %d",num,aux_num);

    // c) Al recibir una variable muestre por pantalla la dirección y el contenido de la variable
    int * var;
    printf("\n\n Ingrese un valor para 'var': ");
    scanf("%d", var);
    mostrar_direc_y_contenido(var);
    
    // d) Dado dos parámetros de entrada, deberá invertir los valores entre ambos.  
    int a,b;
    printf("\n Ingrese un valor para 'a': ");
    scanf("%d", &a);
    printf("\n Ingrese un valor para 'b': ");
    scanf("%d", &b);

    printf("\na = %d\nb = %d",a,b);
    invertir(&a,&b);
    printf("\nAhora, intercambiados:\na= %d\nb = %d",a,b);

    // e) Dado dos parámetros de entrada, deberá devolverlos de forma ordenada, en el primer parámetro el menor y en el segundo el mayor.
    int c,d;
    printf("\n Ingrese un valor para 'c': ");
    scanf("%d", &c);
    printf("\n Ingrese un valor para 'd': ");
    scanf("%d", &d);

    printf("\nc = %d\nd = %d",c,d);
    orden(&c,&d);
    printf("\nAhora, ordenados:\nc= %d\nd = %d",c,d);


    return 0;
}

int potencia_cuadrada(int x)
{
    return x*x;
}

void potencia_cuadrada_2(int * x)
{
    (*x) = (*x) *(*x);
}

void mostrar_direc_y_contenido(int * variable)
{
    printf("\nLa dirección de memoria de 'var' es : %p", variable);
    printf("\nEl contenido de 'var' es : %d", *variable);
}

void invertir(int * x, int * y)
{
    int aux = *x;
    *x = *y;
    *y = aux;
}

void orden(int * x, int * y)
{
    if (*x > *y)
    {
        invertir(x,y);
    }
}