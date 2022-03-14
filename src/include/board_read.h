#ifndef BOARD_READ_H_
#define BOARD_READ_H_

#include "board_print_plain.h"

void input(Move* move, uint8_t type_err);
void check_type_move(Move* move);
void checkX(Move* move);
void checkY(Move* move);
void checkD(Move* move);
void check_pawn(Move* move);

#endif //BOARD_READ_H_