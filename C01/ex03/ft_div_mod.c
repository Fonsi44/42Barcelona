#include <stdio.h>

// Definición de la función para dividir dos enteros y almacenar el resultado y el resto
void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}


/*
// Función principal main para probar la función ft_div_mod
int main()
{
    int x = 15, y = 4;
    int division, resto;

    // Llamada a la función ft_div_mod para dividir x entre y y almacenar el resultado y el resto
    ft_div_mod(x, y, &division, &resto);

    printf("El resultado de dividir %d entre %d es %d\n", x, y, division);
    printf("El resto de dividir %d entre %d es %d\n", x, y, resto);

    return 0;
}
*/
