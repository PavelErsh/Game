#include "Gun.h"

Gun::Gun()
{
    // Вписываем в переменную скорость Пушки
    m_Speed = 400;

    // Связываем текстуру и спрайт
    m_Texture.loadFromFile("gun.jpg");
   //test
    m_Sprite.setTexture(m_Texture);

    // Устанавливаем начальную позицию Пушки в пикселях
    m_Position.x = 800;
    m_Position.y = 800;

}

// Делаем приватный спрайт доступным для функции draw()
Sprite Gun::getSprite()
{
    return m_Sprite;
}

void Gun::moveLeft()
{
    m_LeftPressed = true;
}

void Gun::moveRight()
{
    m_RightPressed = true;
}

void Gun::stopLeft()
{
    m_LeftPressed = false;
}

void Gun::stopRight()
{
    m_RightPressed = false;
}

// Двигаем Пушку на основании пользовательского ввода в этом кадре,
// прошедшего времени и скорости
void Gun::update(float elapsedTime)
{
    if (m_RightPressed)
    {
        m_Position.x += m_Speed * elapsedTime;
    }

    if (m_LeftPressed)
    {
        m_Position.x -= m_Speed * elapsedTime;
    }

    // Теперь сдвигаем спрайт на новую позицию
    m_Sprite.setPosition(m_Position);

}