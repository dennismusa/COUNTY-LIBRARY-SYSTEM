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
    if(action< 1 && action> 4){
       print("invalid Action.try again\n");
    }

    return action;

void execute_action(int action){
    switch(action){
    case 1:
        printf("adding a new patron\n");
        break;
     case2:
        printf("list of all patron\n");
        break;
     case3:
        printf("list of all book\n");
        break;
     case4:
        printf("adding a new book\n");
        break;
     default:printf("invalid action.\n");

    }
}
int main()
{
    printf("COUNTY LIBRARY SYSTEM!\n");
    printf("WELCOME DENNIS!\n");
    Execute_action(menu());

    return 0;
}
