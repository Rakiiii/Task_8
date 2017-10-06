#include <windef.h>
#include "Include_and_constants.h"

int Multiplication() //умножение на 2
{
    system( "cls" ) ;
    printf( "Add your number_\n" ) ;
    int Number = In() ; //читаем число для умножения
    Number = Number << 1 ; //побитовый сдвиг влево на 1 бит соответствует умножение числа на 2 в 1 степени
    printf( "Your number multiplied by 2 in dec is %d\n" , Number ) ; //выводим в десятичном виде
    printf( "Your number multiplied by 2 in bin is " ) ;
    if( Number > 0 ) printf( "0" ) ; //разбираемся со знаком в двоичном виде
    else printf( "1" ) ;
    BinaryNumbers( Number , BinaryLength( Number ) ) ; //выводим в двоичном виде
    return 0 ;
}


int Division() //деление на 2
{
    system( "cls" ) ;
    printf( "Add your number_\n" ) ;
    int Number = In() ; //читаем число для деления
    Number = Number >> 1 ; // побитовый сдвиг вправо на 1 соответствует делению числа на 2 в 1 степени
    printf( "Your number divided by 2 is %d\n" , Number ) ; //выводим в десятичном виде
    printf( "Your number multiplied by 2 in bin is " ) ;
    if( Number > 0 ) printf( "0" ) ; //разбираемся со знаком в двоичном виде
    else printf( "1" ) ;
    BinaryNumbers( Number , BinaryLength( Number ) ) ; //выводим в двоичном виде
    return 0 ;
}



int main() {
    while(TRUE) //меню
    {
        system( "cls" ) ;
        printf( "1.Multiplication by 2\n2.Division by 2\n3.Exit" ) ;
        char Choose = getch() ;
        switch ( Choose )
        {
            case '1' :
                Multiplication() ;
                printf( "Press any button to restart the programme_ " ) ;
                getch() ;
                break ;
            case '2' :
                Division() ;
                printf( "Press any button to restart the programme_ " ) ;
                getch() ;
                break ;
            case '3' :
                return 0 ;
            default:
                break ;
        }
    }
}