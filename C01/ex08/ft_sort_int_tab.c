#include <stdio.h>

// Definición de la función para ordenar un array de enteros en orden ascendente.
void ft_sort_int_tab(int *tab, int size)
{
    int i, j, temp;

    // Se establece un índice de inicio en 0.
    i = 0;

    // Se itera a través del array utilizando un bucle while.
    while (i < size - 1)
    {
        // Se establece un índice de inicio para el siguiente elemento.
        j = i + 1;
        while (j < size)
        {
            // Si el elemento actual es mayor que el siguiente, se intercambian los valores.
            if (tab[i] > tab[j])
            {
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
            j++;
        }
        i++;
    }
}

/*
// Función principal.
int main()
{
    // Se define un array de enteros y su tamaño.
    int tab[] = {3, 5, 1, 8, 2};
    int size = sizeof(tab) / sizeof(tab[0]);

    // Se muestra el array sin ordenar.
    printf("Array sin ordenar:\n");
    int i = 0;
    while (i < size)
    {
        printf("%d ", tab[i]);
        i++;
    }
    printf("\n");

    // Se llama a la función para ordenar el array.
    ft_sort_int_tab(tab, size);

    // Se muestra el array ordenado.
    printf("Array ordenado:\n");
    int j = 0;
    while (j < size)
    {
        printf("%d ", tab[j]);
        j++;
    }
    printf("\n");

    return 0;
}
*/

