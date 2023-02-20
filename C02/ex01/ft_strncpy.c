#include <stdio.h>

// Definición de la función ft_strncpy
char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    // Inicializamos un contador i a cero
    unsigned int i = 0;

    // Copiamos los primeros n caracteres de la cadena de origen a la cadena de destino
    while (i < n && src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }

    // Si la cadena de origen es más corta que n caracteres, agregamos caracteres nulos al final de la cadena de destino
    while (i < n) {
        dest[i] = '\0';
        i++;
    }

    // Devolvemos un puntero a la cadena de destino
    return dest;
}

// Función principal para probar la función ft_strncpy
int main()
{
    char src[] = "Hello, World!";
    char dest[13];
    printf("%s\n", ft_strncpy(dest, src, 12)); // copiamos los primeros 12 caracteres de src a dest
    printf("%s\n", ft_strncpy(dest, src, 5)); // copiamos los primeros 5 caracteres de src a dest
    return 0;
}
