#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class Gun
{
    // ��� private ���������� ����� ���� �������� ������ ������ �������
private:

    // ������� �����
    Vector2f m_Position;

    // ��������� ������ Sprite
    Sprite m_Sprite;

    // ��������� ��������
    Texture m_Texture;

    // ���������� ���������� ��� ������������ ����������� ��������
    bool m_LeftPressed;
    bool m_RightPressed;

    // �������� ����� � �������� � �������
    float m_Speed;

    // �������� ������
public:

    // ����������� ����� � ������������
    Gun();

    // ��� �������� ������� � ������� �������
    Sprite getSprite();

    // ��� �������� ����
    void moveLeft();

    void moveRight();

    // ����������� ��������
    void stopLeft();

    void stopRight();

    // ��� ������� ����� ���������� �� ������ ����
    void update(float elapsedTime);

};