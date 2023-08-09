/*  Create Rock Paper Scissors Game
    Player 1 : Rock
    Player 2(computer) : Scissors --> Player 1 gets 1 points

    Rock vs Scissors - Rock win
    Paper vs Rock - Paper win
    Scissors vs Paper - Scissors win

    Write a C program to allow user to play this game three times with computer. Log the score of computer and the player.
    Display the name of the winner at the end.

    Note : Youu have to display name if the player during the game. Take player name as an input form the player.
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

char name[20];
int Player_Score = 0, Computer_Score = 0; // Gloval variable

void GameRules()
{
    printf("\n\n\n\t\t********** Welcome to the Rock,Paper,Scissors Game. **********\n\n");
    printf("\n\t\t\tWinning rules :\n");
    printf("\n\t\t\t\t1. Rock vs Scissors --> Rock win \n");
    printf("\t\t\t\t2. Paper vs Rock --> Paper win \n");
    printf("\t\t\t\t3. Scissors vs Paper --> Scissors win \n\n");
}

void Choice()
{
    printf("\n\t\t\t<---------- Choice are ---------->\n");
    printf("\n\t\t\tPress 1 : Rock");
    printf("\n\t\t\tPress 2 : Paper");
    printf("\n\t\t\tPress 3 : Scissors\n");
}

void Enter_choice()
{
    int i;
    int player_choice, computer_choice;
    srand(time(NULL));
    for (i = 1; i <= 5; i++)
    {
        printf("\n\t\t\tYour tern!\n\t\t\tPlease Enter Your Choice : ");
        scanf("%d", &player_choice);
        printf("\n\t\t\tNow Computer tern!\n\n");
        computer_choice = (rand() % 3) + 1;

        if (player_choice == 1)
        {
            if (computer_choice == 1)
            {
                printf("\t\t\t%s chose Rock and Computer chose Rock\n", name);
                printf("\t\t\tDraw!\n");
            }
            else if (computer_choice == 2)
            {
                printf("\t\t\t%s chose Rock and Computer chose Paper\n",name);
                printf("\t\t\tComputer Wins!\n");
                Computer_Score++;
            }
            else
            {
                printf("\t\t\t%s chose Rock and Computer chose Scissors\n", name);
                printf("\t\t\t%s Win!\n", name);
                Player_Score++;
            }
        }
        else if (player_choice == 2)
        {
            if (computer_choice == 1)
            {
                printf("\t\t\t%s chose Paper and Computer chose Rock\n", name);
                printf("\t\t\t%s Win!\n", name);
                Player_Score++;
            }
            else if (computer_choice == 2)
            {
                printf("\t\t\t%s chose Paper and Computer chose Paper\n", name);
                printf("\t\t\tDraw!\n");
            }
            else
            {
                printf("\t\t\t%s chose Paper and Computer chose Scissors\n", name);
                printf("\t\t\tComputer Wins!\n");
                Computer_Score++;
            }
        }
        else if (player_choice == 3)
        {
            if (computer_choice == 1)
            {
                printf("\t\t\t%s chose Scissors and Computer chose Rock\n", name);
                printf("\t\t\tComputer Wins!\n");
                Computer_Score++;
            }
            else if (computer_choice == 2)
            {
                printf("\t\t\t%s chose Scissors and Computer chose Paper\n", name);
                printf("\t\t\t%s Win!\n", name);
                Player_Score++;
            }
            else
            {
                printf("\t\t\t%s chose Scissors and Computer chose Scissors\n", name);
                printf("\t\t\tDraw!\n");
            }
        }
        else
        {
            printf("\n\t\t\tWrong Choice!\n");
        }
        printf("\n\t\t\t%s Score : %d   ,   Computer Score : %d\n", name, Player_Score, Computer_Score);
    }
    if (Computer_Score > Player_Score)
    {
        printf("\n\t\t\tComputer Wins %d to %d\n\n", Computer_Score, Player_Score);
    }
    else if (Computer_Score < Player_Score)
    {
        printf("\n\t\t\t%s Wins %d to %d\n\n", name, Player_Score, Computer_Score);
    }
    else if (Computer_Score = Player_Score)
    {
        printf("\n\t\t\tNo Winner!\n\t\tIt is a Draw\n\n");
    }
}

int main()
{
    int i;
    GameRules();
    printf("\n\t\t\tPlayer name : ");
    scanf("%s", &name);
    Choice();
    Enter_choice();
    getch();
    return 0;
}