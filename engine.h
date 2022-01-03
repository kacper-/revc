#ifndef ENGINE_H
#define ENGINE_H

#include "game.h"

void new_game(uint8_t(*player) (struct game*))
{
    struct game g;

    clean_game(&g);

    g.board[0][3] = 1 << 5;
    g.board[0][4] = 1 << 4;
    g.board[1][3] = 1 << 4;
    g.board[1][4] = 1 << 5;

    player(&g);
}

#endif // ENGINE_H