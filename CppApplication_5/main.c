

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
/*2 ver*/
/*Функция ввода вывода символа, для выхода из цикла while необходимо использовать EOF введя в консоли Ctrl + d*/
main()
{
    int letter;                                                                 /*Переменная для ввода*/
    while(  (letter = getchar() ) != EOF)                                       /*Пока не будет использована константа EOF  цикл будет продолжаться*/
        putchar(letter);                                                        /*Вывод на экран введенной буквы*/
}

