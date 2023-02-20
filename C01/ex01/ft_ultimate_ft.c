#include <stdio.h>

// Función que recibe un puntero a un puntero a un puntero a un puntero a un puntero a un puntero a un puntero a un puntero a un puntero a un entero.
void ft_ultimate_ft(int *********nbr)
{
    // Se asigna el valor 42 a la variable entera apuntada por el puntero más interno.
    *********nbr = 42;
}

/*
int main()
{
    // Se inicializa una variable entera n en 0.
    int n = 0;
    // Se crea un puntero p1 que apunta a la variable entera n.
    int *p1 = &n;
    // Se crea un puntero p2 que apunta al puntero p1.
    int **p2 = &p1;
    // Se crea un puntero p3 que apunta al puntero p2.
    int ***p3 = &p2;
    // Se crea un puntero p4 que apunta al puntero p3.
    int ****p4 = &p3;
    // Se crea un puntero p5 que apunta al puntero p4.
    int *****p5 = &p4;
    // Se crea un puntero p6 que apunta al puntero p5.
    int ******p6 = &p5;
    // Se crea un puntero p7 que apunta al puntero p6.
    int *******p7 = &p6;
    // Se crea un puntero p8 que apunta al puntero p7.
    int ********p8 = &p7;
    // Se crea un puntero p9 que apunta al puntero p8.
    int *********p9 = &p8;

    // Se imprime el valor de la variable entera n antes de llamar a la función.
    printf("Antes de llamar a ft_ultimate_ft, n = %d\n", n);
    // Se llama a la función ft_ultimate_ft pasándole el puntero más interno.
    ft_ultimate_ft(p9);
    // Se imprime el valor de la variable entera n después de llamar a la función.
    printf("Después de llamar a ft_ultimate_ft, n = %d\n", n);

    // Se indica que el programa termina correctamente.
    return 0;
}
*/