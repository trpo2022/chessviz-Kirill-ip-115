#include "board.h"
#include "board_print_plain.h"
int main()
{
    char A[10][10];
    layout(A);
    output(A);
    char xx, xx1;
    int x, x1;
    int yy, yy1;
    int y, y1;
    printf("\n\n");
    while (1) {
        for (int flag = 0; flag != 4;) {
            flag = 0;
            scanf("%c %d %c %d", &xx, &yy, &xx1, &yy1);
            board(xx, yy, xx1, yy1);
            if (xx == 'a') {
                x = 1;
                flag++;
            }
            if (xx == 'b') {
                x = 2;
                flag++;
            }
            if (xx == 'c') {
                x = 3;
                flag++;
            }
            if (xx == 'd') {
                x = 4;
                flag++;
            }
            if (xx == 'e') {
                x = 5;
                flag++;
            }
            if (xx == 'f') {
                x = 6;
                flag++;
            }
            if (xx == 'g') {
                x = 7;
                flag++;
            }
            if (xx == 'h') {
                x = 8;
                flag++;
            }

            if (yy == 1) {
                y = 8;
                flag++;
            }
            if (yy == 2) {
                y = 7;
                flag++;
            }
            if (yy == 3) {
                y = 6;
                flag++;
            }
            if (yy == 4) {
                y = 5;
                flag++;
            }
            if (yy == 5) {
                y = 4;
                flag++;
            }
            if (yy == 6) {
                y = 3;
                flag++;
            }
            if (yy == 7) {
                y = 2;
                flag++;
            }
            if (yy == 8) {
                y = 1;
                flag++;
            }

            if (xx1 == 'a') {
                x1 = 1;
                flag++;
            }
            if (xx1 == 'b') {
                x1 = 2;
                flag++;
            }
            if (xx1 == 'c') {
                x1 = 3;
                flag++;
            }
            if (xx1 == 'd') {
                x1 = 4;
                flag++;
            }
            if (xx1 == 'e') {
                x1 = 5;
                flag++;
            }
            if (xx1 == 'f') {
                x1 = 6;
                flag++;
            }
            if (xx1 == 'g') {
                x1 = 7;
                flag++;
            }
            if (xx1 == 'h') {
                x1 = 8;
                flag++;
            }

            if (yy1 == 1) {
                y1 = 8;
                flag++;
            }
            if (yy1 == 2) {
                y1 = 7;
                flag++;
            }
            if (yy1 == 3) {
                y1 = 6;
                flag++;
            }
            if (yy1 == 4) {
                y1 = 5;
                flag++;
            }
            if (yy1 == 5) {
                y1 = 4;
                flag++;
            }
            if (yy1 == 6) {
                y1 = 3;
                flag++;
            }
            if (yy1 == 7) {
                y1 = 2;
                flag++;
            }
            if (yy1 == 8) {
                y1 = 1;
                flag++;
            }

            /*if (flag != 4) {
                     printf("Wrong input\n");
                return 0;
            }*/
        }
        printf("\n\n");
        if (!move(y, x, y1, x1, A)) {
            printf("Wrong move\n");
        }
        output(A);
        printf("\n\n");
    }
    return 0;
}
