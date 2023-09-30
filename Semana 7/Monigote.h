#pragma once
#include"Base.h"

class Monigote:public Base
{
public:
	Monigote();
	~Monigote(); 
	void dibujar();
};

Monigote::Monigote():Base(0,0, 0, 0, 2, 2, 5)
{
}
Monigote::~Monigote(){}
void Monigote::dibujar()
{
	Console::ForegroundColor = (ConsoleColor)color;
	Console::SetCursorPosition(x, y); cout << "o";
	Console::SetCursorPosition(x, y+1); cout <<char(197);
}