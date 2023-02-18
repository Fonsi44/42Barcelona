/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fonsi <fonsi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 20:09:28 by fonsi             #+#    #+#             */
/*   Updated: 2023/02/18 20:09:48 by fonsi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_rev_int_tab(int *tab, int size)
{
    int temp; // variable temporal para almacenar un valor temporalmente

    int i = 0; // variable de índice para iterar sobre la mitad del array

    while (i < size / 2) // iterar hasta la mitad del array (no es necesario recorrer todo el array)
    {
        temp = tab[i]; // guardar el valor actual
        tab[i] = tab[size - i - 1]; // intercambiar el valor actual con su par opuesto en el array
        tab[size - i - 1] = temp; // guardar el valor original del otro lado en la posición actual
        i++; // avanzar al siguiente par de elementos
    }
}

/*
int main()
{
    int array[] = {1, 2, 3, 4, 5}; // inicializar un array con algunos valores
    int size = sizeof(array) / sizeof(int); // calcular el tamaño del array

    printf("Array original: ");

    int i = 0;

    while (i < size) // iterar sobre los elementos del array original y mostrarlos en pantalla
    {
        printf("%d ", array[i]);
        i++;
    }
    printf("\n");

    ft_rev_int_tab(array, size); // invertir los elementos del array

    printf("Array invertido: ");

    int j = 0;

    while (j < size) // iterar sobre los elementos del array invertido y mostrarlos en pantalla
    {
        printf("%d ", array[j]);
        j++;
    }
    printf("\n");

    return 0; // indicar que el programa terminó correctamente
}
*/

