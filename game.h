#ifndef GAME_H
#define GAME_H

#include <cstdint>

const int BOARD_SIZE = 8;
const int PLAYERS_SIZE = 2;

struct game
{
    uint8_t turn;
    uint8_t board[PLAYERS_SIZE][BOARD_SIZE];
};

void clean_game(struct game *g)
{
    for (uint8_t p = 0; p < PLAYERS_SIZE; p++)
    {
        for (uint8_t f = 0; f < BOARD_SIZE; f++)
        {
            g->board[p][f] = 0;
        }
    }
    g->turn = 0;
}

#endif // GAME_H
