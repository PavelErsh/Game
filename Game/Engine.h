#pragma once
#include <SFML/Graphics.hpp>
#include "Gun.h";

using namespace sf;

class Engine
{
private:

    RenderWindow m_Window;

    // ��������� ������ � �������� ��� ����
    Sprite m_BackgroundSprite;
    Texture m_BackgroundTexture;

    // ��������� �����
    Gun m_Gun;

    void input();
    void update(float dtAsSeconds);
    void draw();

public:
    // ����������� ������
    Engine();

    // ������� ����� ������� ��� ��������� �������
    void start();

};