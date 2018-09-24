
#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
//Простая программа в которой я тестировал вывод функции чар
char get1 (void){
    return 'A';
}

char get2 (void){
    return 'B';
}

char get3 (void){
    return 'C';
}

void main (void){
    printf("%c", get1());
    printf("%c", get2());
    printf("%c", get3());
    return;
}