#include <stdio.h>

// Definición de la función para dividir dos enteros y almacenar el resultado y el resto
void ft_ultimate_div_mod(int *a, int *b) {
    int temp = *a;
    *a = *a / *b;
    *b = temp % *b;
}

/*
// Función principal main para probar la función ft_ultimate_div_mod
int main() {
    int x = 15, y = 4;

    // Imprimimos los valores originales
    printf("Antes de la operación:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    // Llamada a la función ft_ultimate_div_mod para dividir x entre y y almacenar el resultado y el resto
    ft_ultimate_div_mod(&x, &y);

    // Imprimimos los valores resultantes
    printf("Después de la operación:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}
*/

/*
La función ft_ultimate_div_mod recibe dos punteros a enteros (int *a y int *b) como parámetros. Dentro de la función, se utiliza una variable temporal temp para almacenar el contenido de a. Luego, se calcula el resultado de la división de a entre b y se asigna este resultado a a. Finalmente, se calcula el resto de la división de temp entre b y se asigna este resultado a b.

En la función main, se declaran dos variables enteras x e y que representan los números que se van a dividir. Se imprimen sus valores originales. Luego se llama a la función ft_ultimate_div_mod para realizar la división y se imprimen los resultados para verificar que se hayan calculado correctamente.
*/