/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-melo <tde-melo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:55:16 by tde-melo          #+#    #+#             */
/*   Updated: 2022/11/29 17:44:43 by tde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>


static int mybit = 0b00000000;

void handler(int sig)
{
    static int received = 0;
    ++received;
    
    if (received <= 7)
    {
       if(sig == SIGUSR1)
       {
            mybit |= 1UL << 0;
            mybit <<= 1;
       }
        else
            mybit <<= 1; 
    } 

    if (received == 7)
        printf("%d", mybit);
    
}

int main(){
    int pid = getpid();
    printf("PID %d\n", pid);

    signal(SIGUSR1, handler);
    signal(SIGUSR2, handler);
       

    while(1)
        pause();
    


    return (0);
}
