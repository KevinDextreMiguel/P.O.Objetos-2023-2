#pragma once
#include"MisLibrerias.h"

class Triangulo
{
public:
	Triangulo(char car);
	~Triangulo();
protected:
	int x, y;
	int dx, dy;
	char caracter;
	int contador;
};

Triangulo::Triangulo(char car)
{
	x = 50;
	y = 15;
	caracter = car;
	contador = 0;
}

Triangulo::~Triangulo(){}