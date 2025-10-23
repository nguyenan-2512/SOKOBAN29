#pragma once
#include "GameObject.h"

// L?p Obstacle ??i di?n cho v?t c?n - kh�ng th? ??y ???c
// Kh�c v?i Wall (t??ng) v� Box (th�ng c� th? ??y)
class Obstacle : public GameObject {
public:
    Obstacle(int x, int y, int tileSize);
    void draw(sf::RenderWindow& window) override;
};