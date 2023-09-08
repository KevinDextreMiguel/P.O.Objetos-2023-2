#pragma once
#include"MisLibrerias.h"
#define ANCHO_CONSOLA 120
#define ALTO_CONSOLA 30

class Avion
{
public:
	Avion(int _alto,int _ancho);
	~Avion();

	void borrar();
	void mover();
protected:
	int x, y; 
	int dx, dy;
	int ancho, alto;
	int color;
};

Avion::Avion(int _alto, int _ancho)
{
	ancho = _ancho;
	alto = _alto;
	x = rand() % (ANCHO_CONSOLA - ancho);
	y = rand() % (ALTO_CONSOLA - alto);
	dx = dy = 1;
	color = rand() % 13 + 1;
}

Avion::~Avion(){}
void Avion::borrar()
{
	for (int i = 0; i < ancho; i++)
		for (int j = 0; j < alto; j++)
		{
			Console::SetCursorPosition(x+i, y+j);
			cout << " ";
		}
	
}
void Avion::mover()
{
	if (x + dx<0 || x + dx + ancho>ANCHO_CONSOLA)dx *= -1;
	if (y + dy<0 || y + dy + alto>ALTO_CONSOLA)dy *= -1;

	x += dx;
	y += dy;
}