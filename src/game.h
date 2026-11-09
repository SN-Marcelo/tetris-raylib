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

    bool IsBlockOutside();
    void RotateBlock();
    void Reset();
    
public:
    Grid grid;
    bool gameOver;

    Game();
    Block GetRandomBlock();
    std::vector<Block> GetAllBlocks();
    void Draw();
    void HandleInput();
    void MoveBlockLeft();
    void MoveBlockRight();
    void MoveBlockDown();
    void LockBlock();
    bool BlockFits();
};

#endif