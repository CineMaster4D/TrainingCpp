/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: xodsergey
 *
 * Created on 21 сентября 2018 г., 13:21
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

void main (void)
{
    int numLetter, numEmtLet, entChar;               //numberLetter - число символов   
    int countNL = 0; int countNEL = 0;               //numberEmptyLetters   - число символов пустых символов
    int countTab = 0;                                //enteredCharacter - введенный символ
                                                     //countNumLet and countNumEmLet - кол-во символов пустых и не пустых
    
    while((entChar = getchar() ) != EOF)                                        //Цикл, который принемает символ с клавиатуры и сравнивает с EOF
    {
        if(entChar != '\t' & entChar != '\n' )                                  //Сравнивает введенный символ с интером и табом
        {
            countNL++;
        }
        else if(entChar == '\t')                                                //Сравнивает введенный символ с табом
        {
            countTab++;
        }
        else if(entChar == '\n')                                                //Сравнивает введенный символ с интером
        {
         countNEL++;                                                       
         printf("countNL = %d, countNEL = %d, countTab = %d\n", countNL, countNEL, countTab);       //Вывод на экран результата
        }
    }
}