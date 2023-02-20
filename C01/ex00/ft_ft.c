#include <stdio.h>

// Declaración de la función ft_ft que recibe un puntero a int y le asigna el valor 42
void ft_ft(int *nbr)
{
    *nbr = 42; // Asignación del valor 42 al int al que apunta el puntero
}

/*
int main()
{
    int num = 0; // Variable para almacenar el número inicial
    printf("Número inicial: %d\n", num); // Imprime el número inicial
    ft_ft(&num); // Llamada a la función ft_ft para asignarle el valor 42 a num
    printf("Número después de llamar a la función: %d\n", num); // Imprime el número después de llamar a la función
    return 0;
}
*/