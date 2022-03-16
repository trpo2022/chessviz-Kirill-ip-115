#include "include/board_print_plain.h"

extern char board[11][11];

void print_board()
{
    system("clear");
    printf("\n");
    for (uint32_t i = 0; i < RAWS; ++i) {
        for (uint32_t j = 0; j < COL; ++j) {
            if ((board[i][j] > 'a' && board[i][j] < 'z') && i <= 7) {
                printf(KMAG1 "%c ", board[i][j]);
            } else {
                printf(KMAG2 "%c ", board[i][j]);
            }
        }

        printf("\n");
    }
}

