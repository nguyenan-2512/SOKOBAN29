#pragma once
#include "GameObject.h"

// L?p Goal ??i di?n cho v? tr� ?�ch (d?u X) m� Box c?n ???c ??y ??n
class Goal : public GameObject {
public:
    Goal(int x, int y, int tileSize);
    void draw(sf::RenderWindow& window) override;
};
