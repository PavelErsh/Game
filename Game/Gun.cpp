#include "Gun.h"

Gun::Gun()
{
    // ��������� � ���������� �������� �����
    m_Speed = 400;

    // ��������� �������� � ������
    m_Texture.loadFromFile("gun.jpg");
   //test
    m_Sprite.setTexture(m_Texture);

    // ������������� ��������� ������� ����� � ��������
    m_Position.x = 800;
    m_Position.y = 800;

}

// ������ ��������� ������ ��������� ��� ������� draw()
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

// ������� ����� �� ��������� ����������������� ����� � ���� �����,
// ���������� ������� � ��������
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

    // ������ �������� ������ �� ����� �������
    m_Sprite.setPosition(m_Position);

}