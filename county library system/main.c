/*
Country library management system
By Dennis musa
Feb 2022
MIT license
C89 COMPILER
*/


#include <stdio.h>
#include <stdlib.h>

int menu()
{   int action;
    printf("Select an action below\n");
    printf("1.Add new patron\n");
    printf("2.view all patron\n");
    printf("3.view all books\n");
    printf("4.Add new book\n");
    printf("your action: ");
    scanf("%d",&action);
    return action;
}
int main()
{
    printf("COUNTY LIBRARY SYSTEM!\n");
    printf("WELCOME DENNIS!\n");
    printf("you selected action &d",menu());
    menu();

    return 0;
}
