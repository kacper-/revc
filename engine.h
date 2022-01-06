#ifndef ENGINE_H
#define ENGINE_H

#include "game.h"

bool is_correct(struct game *g, uint8_t p)
{
    // TODO implement checking move correctnes
    return true;
}

void new_game(uint8_t(*player) (struct game*, bool(*f) (struct game*, uint8_t)))
{
    struct game g;

    clean_game(&g);

    g.board[0][3] = 1 << 5;
    g.board[0][4] = 1 << 4;
    g.board[1][3] = 1 << 4;
    g.board[1][4] = 1 << 5;

    player(&g, is_correct);
}

#endif // ENGINE_H