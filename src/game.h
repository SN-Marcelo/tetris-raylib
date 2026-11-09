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
    void LockBlock();
    bool BlockFits();
    void MoveBlockLeft();
    void MoveBlockRight();
    void UpdateScore(int linesCleared, int moveDownPoints);
    Block GetRandomBlock();
    std::vector<Block> GetAllBlocks();
    
public:
    Grid grid;
    bool gameOver;
    int score;

    Game();
    void Draw();
    void MoveBlockDown();
    void HandleInput();
};

#endif