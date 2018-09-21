/*
/ * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: xodsergey
 *
 * Created on 21 сентября 2018 г., 8:35
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(void)
{
    int letter, numberLetter;
     numberLetter = 0;
    /*Функция посчета символа '\n', при использовании EOF (Ctrl + d в консоли) функция завершается*/
    while( (letter = getchar() ) != EOF)
    {
        if(letter == '\n')                                                      //если введенный символ равен символу '\n'(интер) в переменную к переменной записывается +1
        {
            ++numberLetter;
            printf("%d\n", numberLetter);                                       //Вывод на экран результатов
        }
    }
    return 0;
}

