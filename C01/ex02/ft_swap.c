#include <stdio.h>

// Definición de la función para intercambiar enteros
void ft_swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/*
// Función principal main para probar la función ft_swap
int main()
{
    int x = 5, y = 10;

    printf("Antes del intercambio:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    // Llamada a la función ft_swap para intercambiar x e y
    ft_swap(&x, &y);

    printf("Después del intercambio:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}
*/
