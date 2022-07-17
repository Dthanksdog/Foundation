// hello everyone, this is TD session 5 (WEEK 6)
// Today the exercises are 3.15, 3.13 and 4.4
// your task is to translate the algorithms (in pseudo-language) into C language

#include <stdio.h>

int main() {
    int N,p,a;
    char player1,player2,current_player,winner;

    printf("Enter an integer:\n");
    scanf("%d",&p);
    printf("Enter an integer:\n");
    scanf("%d",&N);

    winner = '0';
    player1 = '1';
    player2 ='2';

    while(N<=1||p<=0||p>=N)
    {
        printf("Wrong input! please enter N again:\n");
        scanf("%d",&N);
        printf("please enter p again:\n");
        scanf("%d",&p);
    }

    // continue your code here

    return 0;
}
