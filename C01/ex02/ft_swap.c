/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fonsi <fonsi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 20:07:04 by fonsi             #+#    #+#             */
/*   Updated: 2023/02/18 20:07:21 by fonsi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
