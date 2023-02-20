#include <stdio.h>

// Función que cuenta el número de caracteres en un string y devuelve el número encontrado
int ft_strlen(char *str)
{
    // Inicializa una variable "count" para contar el número de caracteres
    int count = 0;
    // Itera a través del string, incrementando la variable "count" por cada carácter encontrado
    while (*str)
    {
        count++;
        str++;
    }
    // Devuelve el número de caracteres contados
    return count;
}

/*
// Función principal del programa
int main()
{
    // Declara un puntero "str" que apunta al string "Hola, mundo!"
    char *str = "Hola, mundo!";
    // Llama a la función "ft_strlen" pasando como argumento el puntero "str"
    int len = ft_strlen(str);
    // Imprime el número de caracteres contados utilizando printf y el especificador de formato "%d"
    printf("El número de caracteres es: %d\n", len);
    // Devuelve el valor 0 para indicar que el programa se ha ejecutado correctamente
    return 0;
}
*/
