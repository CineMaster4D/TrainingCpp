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
main()
{
    int c;
    c = getchar();
    while(c != EOF)
    {
        putchar(c);
        c = getchar();
    }
}