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

typedef int input;

int main(){
    // prompt user:
    //  vs CPU or vs Player2

    input in;
    int end = 0;
    printf("Enter a value to play against CPU or Player");
    printf("1 - CPU");
    printf("2 - Player 2");
    in = getchar();

    // preparing board state
    char divider[] = "+-----+";
    char val1 = '1';
    char val2 = '2';
    char val3 = '3';
    char val4 = '4';
    char val5 = '5';
    char val6 = '6';
    char val7 = '7';
    char val8 = '8';
    char val9 = '9';

    // vs CPU
    // while loop to keep game runnning until tie or win
    if (in == 1){
        while (end == 0){
            printf("Board:");
            printf(divider);
            printf("|%s|%s|%s|", val1, val2, val3);
            printf("|%s|%s|%s|", val4, val5, val6);
            printf("|%s|%s|%s|", val7, val8, val9);
            printf("Where would you like to put an X:");
            in = getchar();

            switch(in){
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
        }
    }

    // compute win states
    // display winner if win state

    return 0;
}