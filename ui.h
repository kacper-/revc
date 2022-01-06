#ifndef UI_H
#define UI_H

#include<cstdio>
#include "game.h"

uint8_t play(struct game *g, bool(*is_correct) (struct game*, uint8_t))
{
    // TODO implement human player move using user interface
    printf("Playing... %d\n", is_correct(g, 0));
    return 0;
}

#endif // UI_H
