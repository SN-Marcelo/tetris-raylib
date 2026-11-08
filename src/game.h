#pragma once
#ifndef GAME_H
#define GAME_H

#include "grid.h"
#include "block.h"
#include "blocks.cpp"

class Game
{
private:
    std::vector<Block> blocks;
    Block currentBlock;
    Block nextBlock;

public:
    Grid grid;

    Game();
    Block GetRandomBlock();
    std::vector<Block> GetAllBlocks();
    void Draw();
};

#endif