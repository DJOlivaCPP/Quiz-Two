/*
+-----+
| | | |
+-----+
| | | |
+-----+
| | | |
+-----+
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef int input;

int end = 3;
char val1 = '1';
char val2 = '2';
char val3 = '3';
char val4 = '4';
char val5 = '5';
char val6 = '6';
char val7 = '7';
char val8 = '8';
char val9 = '9';

int main()
{
    // prompt user:
    //  vs CPU or vs Player2

    input in;
    char cpu;
    time_t t;
    srand((unsigned)time(&t));
    printf("Enter a value to play against CPU or Player");
    printf("1 - CPU");
    printf("2 - Player 2");
    in = getchar();

    // preparing board state
    char divider[] = "+-----+";

    // vs CPU
    // while loop to keep game runnning until tie or win
    if (in == 1)
    {
        while (end == 3)
        {
            printf("Board State:");
            printf(divider);
            printf("|%s|%s|%s|", val1, val2, val3);
            printf("|%s|%s|%s|", val4, val5, val6);
            printf("|%s|%s|%s|", val7, val8, val9);
            printf("Where would you like to put an X:");
            in = getchar();

            playerMove(in);

            checkWin();
            if(end == 1){
                printf("Player One Wins!");
            } else if (end == 2){
                printf("CPU Wins!");
            } else {
                printf("CPU places an O at: " + moveCPU());
            }

            checkWin();
            if(end == 1){
                printf("Player One Wins!");
            } else if (end == 2){
                printf("CPU Wins!");
            }
        }
    }

    return 0;
}

int playerMove(int in)
{
    switch (in)
    {
    case '1':
        val1 = 'X';
        break;
    case '2':
        val2 = 'X';
        break;
    case '3':
        val3 = 'X';
        break;
    case '4':
        val4 = 'X';
        break;
    case '5':
        val5 = 'X';
        break;
    case '6':
        val6 = 'X';
        break;
    case '7':
        val7 = 'X';
        break;
    case '8':
        val8 = 'X';
        break;
    case '9':
        val9 = 'X';
        break;
    }

    return 1;
}

int player2Move(int in)
{
    switch (in)
    {
    case '1':
        val1 = 'O';
        break;
    case '2':
        val2 = 'O';
        break;
    case '3':
        val3 = 'O';
        break;
    case '4':
        val4 = 'O';
        break;
    case '5':
        val5 = 'O';
        break;
    case '6':
        val6 = 'O';
        break;
    case '7':
        val7 = 'O';
        break;
    case '8':
        val8 = 'O';
        break;
    case '9':
        val9 = 'O';
        break;
    }

    return 1;
}

int moveCPU()
{
    int valid = 0;
    int move;

    do
    {
        move = rand() % 9;

        if (move == 1 && val1 != 'X')
        {
            valid = 1;
            player2Move(move);
        }
        else if (move == 2 && val2 != 'X')
        {
            valid = 1;
            player2Move(move);
        }
        else if (move == 3 && val3 != 'X')
        {
            valid = 1;
            player2Move(move);
        }
        else if (move == 4 && val4 != 'X')
        {
            valid = 1;
            player2Move(move);
        }
        else if (move == 5 && val5 != 'X')
        {
            valid = 1;
            player2Move(move);
        }
        else if (move == 6 && val6 != 'X')
        {
            valid = 1;
            player2Move(move);
        }
        else if (move == 7 && val7 != 'X')
        {
            valid = 1;
            player2Move(move);
        }
        else if (move == 8 && val8 != 'X')
        {
            valid = 1;
            player2Move(move);
        }
        else if (move == 9 && val9 != 'X')
        {
            valid = 1;
            player2Move(move);
        }

    } while (valid == 0);

    return move;
}

int checkWin()
{
    // check if player 1 wins
    if (val1 == 'X' && val2 == 'X' && val3 == 'X')
    {
        end = 2;
    }
    else if (val4 == 'X' && val5 == 'X' && val6 == 'X')
    {
        end = 2;
    }
    else if (val7 == 'X' && val8 == 'X' && val9 == 'X')
    {
        end = 2;
    }
    else if (val1 == 'X' && val4 == 'X' && val7 == 'X')
    {
        end = 2;
    }
    else if (val2 == 'X' && val5 == 'X' && val8 == 'X')
    {
        end = 2;
    }
    else if (val3 == 'X' && val6 == 'X' && val9 == 'X')
    {
        end = 2;
    }
    else if (val4 == 'X' && val5 == 'X' && val6 == 'X')
    {
        end = 2;
    }
    else if (val1 == 'X' && val5 == 'X' && val9 == 'X')
    {
        end = 2;
    }
    else if (val3 == 'X' && val5 == 'X' && val7 == 'X')
    {
        end = 2;
    }

    // check if player 2 wins
    if (val1 == 'O' && val2 == 'O' && val3 == 'O')
    {
        end = 2;
    }
    else if (val4 == 'O' && val5 == 'O' && val6 == 'O')
    {
        end = 2;
    }
    else if (val7 == 'O' && val8 == 'O' && val9 == 'O')
    {
        end = 2;
    }
    else if (val1 == 'O' && val4 == 'O' && val7 == 'O')
    {
        end = 2;
    }
    else if (val2 == 'O' && val5 == 'O' && val8 == 'O')
    {
        end = 2;
    }
    else if (val3 == 'O' && val6 == 'O' && val9 == 'O')
    {
        end = 2;
    }
    else if (val4 == 'O' && val5 == 'O' && val6 == 'O')
    {
        end = 2;
    }
    else if (val1 == 'O' && val5 == 'O' && val9 == 'O')
    {
        end = 2;
    }
    else if (val3 == 'O' && val5 == 'O' && val7 == 'O')
    {
        end = 2;
    }
}