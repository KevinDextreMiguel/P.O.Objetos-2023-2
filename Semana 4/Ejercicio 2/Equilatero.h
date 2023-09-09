#pragma once
#include"Triangulo.h"

class Equilatero:public Triangulo
{
public:
	Equilatero(char car,int l);
	~Equilatero();
	void mostrar();
private:
	int lado;
};

Equilatero::Equilatero(char car,int l):Triangulo(car)
{
	lado = l;
	dx = 1;
	dy = -1;
}

Equilatero::~Equilatero(){}
void Equilatero::mostrar()
{
	while (true)
	{
		Console::SetCursorPosition(x, y); cout << caracter;

		if (contador >= lado)dy = 1;
		if (contador >= lado * 2)
		{
			dy = 0;
			dx = -2;
		}
		if (contador >= lado * 3)break;
		x += dx;
		y += dy;
		contador++;
		_sleep(100);
	}
}