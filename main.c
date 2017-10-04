#include <windef.h>
#include "Include_and_constants.h"

int Multiplication()
{
    system("cls");
    printf("Add your number_\n");
    int Number = In();
    Number = Number << 1 ;
    printf("Your number multiplied by 2 in dec is %d\n" , Number);
    printf("Your number multiplied by 2 in bin is ");
    if(Number > 0)printf("0");
    else printf("1");
    BinaryNumbers( Number , BinaryLength( Number ) );
    return 0;
}


int Division()
{
    system("cls");
    printf("Add your number_\n");
    int Number = In();
    Number = Number >> 1 ;
    printf("Your number divided by 2 is %d\n" , Number);
    printf("Your number multiplied by 2 in bin is ");
    if(Number > 0)printf("0");
    else printf("1");
    BinaryNumbers( Number , BinaryLength( Number ) );
    return 0;
}



int main() {
    while(TRUE)
    {
        system("cls");
        printf("1.Multiplication by 2\n2.Division by 2\n3.Exit");
        char Choose = getch();
        switch (Choose)
        {
            case '1' :
                Multiplication();
                printf("Press any button to restart the programme_ ");
                getch();
                break;
            case '2' :
                Division();
                printf("Press any button to restart the programme_ ");
                getch();
                break;
            case '3' :
                return 0;
            default:
                break;
        }
    }
}