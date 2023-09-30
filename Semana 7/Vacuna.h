#pragma once
#include"Base.h"

class Vacuna: public Base
{
public:
	Vacuna();
	~Vacuna();
	void dibujar();
};

Vacuna::Vacuna():Base(rand() % 80 + 20, rand() % 18 + 6, 1, 0, 4, 1, 3)
{
}
Vacuna::~Vacuna(){}
void Vacuna::dibujar()
{
	Console::ForegroundColor = (ConsoleColor)color;
	Console::SetCursorPosition(x, y); cout << "|->";
}