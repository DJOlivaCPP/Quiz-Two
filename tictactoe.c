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

typedef char input;

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
    if (in == '1')
    {
        int move;
        while (end == 3)
        {
            printf("Board State:\n");
            printf(divider);
            printf("|%s|%s|%s|\n", val1, val2, val3);
            printf("|%s|%s|%s|\n", val4, val5, val6);
            printf("|%s|%s|%s|\n", val7, val8, val9);
            printf("Where would you like to put an X:\n");
            in = getchar();

            playerMove(in);

            checkWin();
            if(end == 1){
                printf("Player One Wins!\n");
            } else if (end == 2){
                printf("CPU Wins!\n");
            } else if (end == 4){
                printf("Tie\n");
            } else {
                move = moveCPU();
                printf("CPU places an O at: %d\n", move);
            }

            checkWin();
            if(end == 1){
                printf("Player One Wins!");
            } else if (end == 2){
                printf("CPU Wins!");
            } else if (end == 4){
                printf("Tie");
            }
        }


    } else if (in == '2') {
        while (end == 3)
        {
            printf("Board State:\n");
            printf(divider);
            printf("|%s|%s|%s|\n", val1, val2, val3);
            printf("|%s|%s|%s|\n", val4, val5, val6);
            printf("|%s|%s|%s|\n", val7, val8, val9);
            printf("Where would player one like to put an X:\n");
            in = getchar();

            playerMove(in);

            checkWin();
            if(end == 1){
                printf("Player One Wins!\n");
            } else if (end == 2){
                printf("CPU Wins!\n");
            } else if (end == 4){
                printf("Tie\n");
            } else {
                printf("Where would player one like to put an X:\n");
                in = getchar();
                player2Move(in);
            }

            checkWin();
            if(end == 1){
                printf("Player One Wins!\n");
            } else if (end == 2){
                printf("CPU Wins!\n");
            } else if (end == 4){
                printf("Tie\n");
            }
        }


    }

    return 0;
}

int playerMove(char in)
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

int player2Move(char in)
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

    if(val1 != '1' && val2 != '2' && val3 != '3' && val4 != '4' && val5 != '5' && val6 != '6' && val7 != '7' && val8 != '8' && val9 != '9'){
        end = 4;
    }
}