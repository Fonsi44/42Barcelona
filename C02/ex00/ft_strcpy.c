#include <stdio.h>

void ft_strcpy(char *dest, char *src)
{
	// Inicializamos un contador i a cero
	int i = 0;
	// Mientras no hayamos llegado al final de la cadena src
	while (src[i] != '\0')
	{
		// Copiamos el carácter src[i] en dest[i]
		dest[i] = src[i];
		// Incrementamos el contador i para pasar al siguiente carácter
		i++;
	}
	// Agregamos el caracter nulo al final de la cadena de destino
	dest[i] = '\0';
}

int main()
{
	// Definimos una cadena de origen
	char str1[] = "Hello";
	// Definimos una cadena de destino con suficiente espacio para contener la cadena de origen
	char str2[6];
	// Copiamos la cadena de origen a la cadena de destino
	ft_strcpy(str2, str1);
	// Imprimimos ambas cadenas para verificar que la copia se ha realizado correctamente
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	return 0;
}