#include <stdio.h>

// Función que muestra uno a uno en la pantalla los caracteres de un string
void ft_putstr(char *str)
{
    // Mientras el carácter apuntado por "str" sea diferente de '\0' (el final del string)
    while (*str)
    {
        // Imprime el carácter apuntado por "str" utilizando printf y el especificador de formato "%c"
        printf("%c", *str);
        // Incrementa el valor de "str" para que apunte al siguiente carácter del string
        str++;
    }
}

/*
// Función principal del programa
int main()
{
    // Declara un puntero "str" que apunta al string "Hola, mundo!"
    char *str = "Hola, mundo!";
    // Llama a la función "ft_putstr" pasando como argumento el puntero "str"
    ft_putstr(str);
    // Devuelve el valor 0 para indicar que el programa se ha ejecutado correctamente
    return 0;
}
*/

/*
La primera línea incluye la biblioteca de entrada/salida estándar "stdio.h".

La función "ft_putstr" recibe como parámetro un puntero a un char "str" y no devuelve ningún valor.

Dentro de la función "ft_putstr", se utiliza un bucle while para iterar sobre cada carácter del string apuntado por "str". La condición del bucle while evalúa si el carácter apuntado por "str" es diferente de '\0' (el carácter nulo que indica el final del string). Mientras esta condición sea verdadera, el bucle sigue ejecutando el código que se encuentra dentro de su cuerpo.

Dentro del bucle while, se utiliza la función "printf" para imprimir en la pantalla el carácter apuntado por "str". El especificador de formato utilizado en printf es "%c", que indica que el argumento correspondiente es un carácter.

Al final de cada iteración del bucle while, se incrementa el valor de "str" para que apunte al siguiente carácter del string.

La función "main" es la función principal del programa. Dentro de ella, se declara un puntero "str" que apunta al string "Hola, mundo!".

Se llama a la función "ft_putstr" pasando como argumento el puntero "str".

La función "main" devuelve el valor 0.

En resumen, este programa muestra el string "Hola, mundo!" en la pantalla, imprimiendo uno a uno los caracteres que lo componen utilizando la función "ft_putstr".

*/