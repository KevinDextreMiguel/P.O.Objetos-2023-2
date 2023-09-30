#pragma once
#include<iostream>
#define ANCHO_CONSOLA 120
#define ALTO_CONSOLA 30
using namespace std;
using namespace System;
class Base
{
public:
	Base(int _x,int _y, int _dx, int _dy,int _ancho, int _alto,int _color);
	~Base();
	void borrar();
	void mover();
	//set
	void setDx(int _dx);
	void setDy(int _dy);
	void setX(int _x);
	void setY(int _y);
	//get
	int getX();
	int gety();
	int getAncho();
	int getAlto();
	bool colision(int _x, int _y, int _ancho, int _alto);
protected:
	int x, y;
	int dx, dy;
	int ancho, alto;
	int color;
};

Base::Base(int _x, int _y, int _dx, int _dy, int _ancho, int _alto, int _color)
{
	x = _x;
	y = _y;
	dx = _dx;
	dy = _dy;
	ancho = _ancho;
	alto = _alto;
	color = _color;
}
Base::~Base(){}
void Base::borrar()
{
	for (int i = 0; i < ancho; i++)
		for (int j = 0; j < alto; j++)
		{
			Console::SetCursorPosition(x+i, y+j);
			cout << " ";
		}	
}
void Base::mover()
{
	if (x + dx<0 || x + dx + ancho>ANCHO_CONSOLA)dx *= -1;
	if (y + dy<0 || y + dy + alto>ALTO_CONSOLA)dy *= -1;

	x += dx;
	y += dy;
}
//get
void Base::setDx(int _dx) { dx = _dx; }
void Base::setDy(int _dy) { dy = _dy; }
void Base::setX(int _x) { x = _x; }
void Base::setY(int _y) { y = _y; }
//get
int Base::getX() { return x; }
int Base::gety() { return y; }
int Base::getAncho() { return ancho; }
int Base::getAlto() { return alto; }

bool Base::colision(int _x, int _y, int _ancho, int _alto)
{
	return x<_x + _ancho&& x + ancho>_x && y + alto>_y && _y + _alto > y;
}