#include <stdio.h>
#include <stdlib.h>
/*
 *
 */
#define LOWER 1    //Мин Значение 1

/***Функция вывода всех букв Английского алфавита 
 ****Начинает цикл в котором прибавляется LOWER и после каждой буквы ставится пробел */
main()
{
    char letter = 'A';                                                          //Пееремнная первой буквы алфавита
    while(letter <='Z')                                                         //Начало функции с условием - Пока буква А меньше буквы Z 
    {
        putchar(letter);                                                        //При обращении putchar выдает один символ
        letter = letter + LOWER;
        printf(" ");                                                            //Пробел чтобы избежать слияния букв
    }
}