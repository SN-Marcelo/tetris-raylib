#pragma once
#ifndef BLOCK_H
#define BLOCK_H

#include <vector>
#include <map>
#include "position.h"
#include "colors.h"

class Block
{
private:
    int cellSize;
    int rotationState;
    std::vector<Color> colors;

    int rowOffset;
    int columnOffset;
    
public:
    int colorId;
    std::map<int, std::vector<Position>> cells;

    Block();
    void Draw();
    void Move(int rows, int columns);
    std::vector<Position> GetCellPositions();
    void Rotate();
};

#endif