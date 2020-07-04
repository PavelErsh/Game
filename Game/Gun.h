#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class Gun
{
    // Все private переменные могут быть доступны только внутри объекта
private:

    // Позиция Пушки
    Vector2f m_Position;

    // Объявляем объект Sprite
    Sprite m_Sprite;

    // Добавляем текстуру
    Texture m_Texture;

    // Логические переменные для отслеживания направления движения
    bool m_LeftPressed;
    bool m_RightPressed;

    // Скорость Пушки в пикселях в секунду
    float m_Speed;

    // Открытые методы
public:

    // Настраиваем Пушку в конструкторе
    Gun();

    // Для отправки спрайта в главную функцию
    Sprite getSprite();

    // Для движения Боба
    void moveLeft();

    void moveRight();

    // Прекращение движения
    void stopLeft();

    void stopRight();

    // Эта функция будет вызываться на каждый кадр
    void update(float elapsedTime);

};