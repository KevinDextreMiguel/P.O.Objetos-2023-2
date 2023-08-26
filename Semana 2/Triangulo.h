#pragma once
#include<iostream>
#include<conio.h>
#include<vector>
#define ANCHO_CONSOLA 120
#define ALTO_CONSOLA 30
using namespace std;
using namespace System;

class Triangulo
{
public:
	Triangulo(int _x,int _y, int _color);
	~Triangulo();
	void borrar();
	void mover();
	void dibujar();
private:
	int x, y;
	int dx, dy;
	int tamanio;
	int color;
};

Triangulo::Triangulo(int _x, int _y,int _color)
{
	x = _x; y = _y;
	dx= dy=1;
	tamanio = rand() % 4 + 5;
	//color = _color;
	color = rand() % 9+2;
}

Triangulo::~Triangulo(){}

void Triangulo::borrar()
{
	for (int i = 0; i < tamanio; i++)
		for (int j = 0; j < tamanio; j++)
		{
			Console::SetCursorPosition(x + i, y + j); cout << " ";
		
		}
}
void Triangulo::mover()
{
	if (x + dx < 0 || dx + x + tamanio > ANCHO_CONSOLA)dx = dx * -1;
	if (y + dy < 0 || dy + y + tamanio > ALTO_CONSOLA)dy = dy * -1;

	x += dx;
	//y += dy;
}
void Triangulo::dibujar()
{
	Console::ForegroundColor = (ConsoleColor)color;
	if(dx>0)
		for (int i = 0; i < tamanio; i++)
			for (int j = 0; j < tamanio; j++)
			{
				if (i == 0 || j == tamanio - 1 || i == j)
				{
					Console::SetCursorPosition(x +i, y+j); cout << "*";
				}
				else
				{
					Console::SetCursorPosition(x + i, y + j); cout << " ";
				}
			}

	else 
		for (int i = 0; i < tamanio; i++)
			for (int j = 0; j < tamanio; j++)
				if (j == 0 || i == tamanio - 1 || i == j)
				{
					Console::SetCursorPosition(x + i, y + j); cout << "*";
				}
				else
				{
					Console::SetCursorPosition(x + i, y + j); cout << " ";
				}

}
