/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-melo <tde-melo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:14:28 by tde-melo          #+#    #+#             */
/*   Updated: 2022/11/29 18:10:33 by tde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

int *binary(int n)
{
    static int b[8];
    int i = 0;
    
    while (n > 0)
    {
        b[i] = n % 2;
        n /= 2;
        i++;
    }
    
    return b;
        
}

int main(int ac, char** av)
{
    // int pid = atoi(av[1]);
    // int n = atoi(av[2]);
    // char *str = av[1];
    
    int n = 4;
    int *b = binary(n);

    int i = 7;
    while (i >= 0)
    {
        printf("%d", b[i]);
        i--;
    }
    // printf("\n%d", str[0]);
        
   


    return (0);
}