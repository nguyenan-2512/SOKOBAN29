#pragma once
#include <SFML/Graphics.hpp>
#include "DynamicArray.h"

class Animation {
private:
    sf::Sprite* sprite;                      // Con tr? ??n sprite c?n animate
    sf::Texture spriteSheet;                 // Sprite sheet texture

    int frameWidth;                          // Chi?u r?ng 1 frame
    int frameHeight;                         // Chi?u cao 1 frame
    int currentFrame;                        // Frame hi?n t?i
    int currentState;                        // Tr?ng th�i hi?n t?i (0-3)
    bool loop;                               // C� l?p l?i kh�ng

    sf::Clock frameClock;                    // ??ng h? ??m th?i gian

    DynamicArray<sf::IntRect> MoveUp_frames;
    DynamicArray<sf::IntRect> MoveDown_frames;
    DynamicArray<sf::IntRect> MoveLeft_frames;
    DynamicArray<sf::IntRect> MoveRight_frames;

public:
    static float animationSpeed;             // T?c ?? animation (gi�y/frame)

    // Enum cho tr?ng th�i (d? ??c h?n int)
    enum State {
        MOVE_UP = 0,
        MOVE_DOWN = 1,
        MOVE_LEFT = 2,
        MOVE_RIGHT = 3
    };

    // Constructor m?c ??nh
    Animation();

    // Constructor ??y ??
    Animation(sf::Sprite* sprite,
        const sf::Texture& spriteSheet,
        int frameWidth,
        int frameHeight,
        int numFrames,
        bool loop = true);

    // C?p nh?t animation
    void update(const int& state, float deltaTime);

    // Reset animation
    void reset();

    // Getter
    int getCurrentFrame() const { return currentFrame; }
    int getCurrentState() const { return currentState; }
}; 
