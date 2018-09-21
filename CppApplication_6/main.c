/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: xodsergey
 *
 * Created on 20 сентября 2018 г., 14:33
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
/*Программа которая подсчитывает кол-во введеных символов, для выхода из прораммы нужно использовать EOF, ввести в консоли Ctrl + D */
main()
{
    long count = 0;                                                             //Переменная для подсчета кол-ва введенных символов
    
    while(getchar() != EOF)                                                     //Пока веденный символ не равен EOF - концу фалй цикл не закончится
    {
        ++count;                                                                //Прибавляет к count'у +1, вводя символ и нажимая интер вводятся 2 символа!!!
    printf ("%ld\n", count);                                                    //Вывод результата после использования EOF
    }
}