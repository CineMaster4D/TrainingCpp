/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: xodsergey
 *
 * Created on 20 сентября 2018 г., 16:05
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
//Программа которая считает колличество введенных символов в том числе и интер!
main()
{
    double count;                                                               //Дробная переменная для счета введеных символов
    for (count = 0; getchar() != EOF; ++count)                                  //Происходит какой то пиздец нужно исправлять*/   
    {
        ;                                                                       //Пустая инструкция! Нужна т.к по правилам  Си, тело цикла for не должно быть пустым
        printf("%.0F\n", count);                                                //Вывод на экран(тут есть вопросы у самого программиста по поводу %.0f)
    }
}
