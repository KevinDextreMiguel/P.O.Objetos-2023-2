#pragma once
#include"Triangulo.h"

class TrianguloREctangulo :public Triangulo
{
public:
	TrianguloREctangulo(int _l1,int _l2,char car);
	~TrianguloREctangulo();
	void dibujar();
private:
	int l1, l2;
	int hipotenusa;
};

TrianguloREctangulo::TrianguloREctangulo(int _l1, int _l2,char car):Triangulo(car)
{
	l1 = _l1;
	l2 = _l2;
	dx = 1;
	dy = 1;
	hipotenusa = sqrt(l1 * l1 + l2 * l2);
}

TrianguloREctangulo::~TrianguloREctangulo(){}
void TrianguloREctangulo::dibujar()
{
	int auxX = x;
	int auxY = y;
	while (true)
	{
		Console::SetCursorPosition(x, y); cout << caracter;
		if (contador >= hipotenusa + l2 + l1)break;
		else if (contador >= hipotenusa + l2 || auxX == x + 1)
		{
			dx = 0;
			dy = -2;
		}
		else if(contador >= hipotenusa)
		{
			dx = -1;
			dy = 0;
		}

		x += dx;
		y += dy;
		contador++;
		_sleep(100);
	}
}