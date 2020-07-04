#include "Engine.h"

void Engine::input()
{
    // Обрабатываем нажатие Escape
    if (Keyboard::isKeyPressed(Keyboard::Escape))
    {
        m_Window.close();
    }

    // Обрабатываем нажатие клавиш движения
    if (Keyboard::isKeyPressed(Keyboard::A))
    {
        m_Gun.moveLeft();
    }
    else
    {
        m_Gun.stopLeft();
    }

    if (Keyboard::isKeyPressed(Keyboard::D))
    {
        m_Gun.moveRight();
    }
    else
    {
        m_Gun.stopRight();
    }

}