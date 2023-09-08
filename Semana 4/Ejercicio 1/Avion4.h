#pragma once
#include"Avion.h"
class Avion4:public Avion
{
public:
	Avion4();
	~Avion4();
	void dibujar();
private:

};

Avion4::Avion4():Avion(3,14)
{
}

Avion4::~Avion4(){}
void Avion4::dibujar()
{
	Console::ForegroundColor = (ConsoleColor)color;
	Console::SetCursorPosition(x, y);
	cout << "    __!__";
	Console::SetCursorPosition(x, y + 1);
	cout << "_____(_)_____";
	Console::SetCursorPosition(x, y + 2);
	cout << "    ! ! !";
}