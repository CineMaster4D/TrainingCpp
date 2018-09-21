/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: xodsergey
 *
 * Created on 19 сентября 2018 г., 13:16
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

/*Функция ввода и вывода символа введеннго с клавиатуры, для выхода из функции нужно применить EOF (В консоли это ctrl + d) */
main()
{
    int letter;
    letter = getchar();                                                         //Получить символ с клавиатуры
    while(letter != EOF)                                                        //Пока не равно EOF будет выполнятся цикл
    {
        putchar(letter);                                                        //Вывод на экран веденного символа
        letter = getchar();                                                     //Копирование полученного символа с клавиатуры
    }
}