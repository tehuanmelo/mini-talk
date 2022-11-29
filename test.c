#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>


int main(){

    int number = 0b00000000;

    number |= 1UL << 0;
    number <<= 1;

    printf("%d", number);


    return (0);
}