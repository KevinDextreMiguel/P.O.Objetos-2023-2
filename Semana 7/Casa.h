#pragma once
#include"Base.h"

class Casa:public Base
{
public:
	Casa();
	~Casa();
	void dibujar();
};
Casa::Casa():Base(105,24, 0, 0, 11,5,12)
{
}
Casa::~Casa(){}
void Casa::dibujar()
{
	Console::ForegroundColor = (ConsoleColor)color;
	Console::SetCursorPosition(x, y);
	cout << "        ||";
	Console::SetCursorPosition(x, y + 1);
	cout << "  ______ _";
	Console::SetCursorPosition(x, y + 2);
	cout << "´´\\_-___\\";
	Console::SetCursorPosition(x, y + 3);
	cout << "/\\_-___\\";
	Console::SetCursorPosition(x, y + 4);
	cout << "|[]| [] ||";
}