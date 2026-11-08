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
    
public:
    int colorId;
    std::map<int, std::vector<Position>> cells;

    Block();
    void Draw();
};

#endif