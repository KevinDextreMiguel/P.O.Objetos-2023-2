#pragma once
#include"Avion1.h"
#include"Avion2.h"
#include"Avion3.h"
#include"Avion4.h"

class Jugar
{
public:
	Jugar();
	~Jugar();
	void elegir_avion(char tecla);
	void borrar_todos();
private:
	Avion1 obj1;
	Avion2 obj2;
	Avion3 obj3;
	Avion4 obj4;
};

Jugar::Jugar()
{
}

Jugar::~Jugar(){}
void Jugar::elegir_avion(char tecla)
{
	switch (tecla)
	{
	case '1':
		obj1.borrar();
		obj1.mover();
		obj1.dibujar();		
		break;
	case '2':
		obj2.borrar();
		obj2.mover();
		obj2.dibujar();
		break;
	case '3':
		obj3.borrar();
		obj3.mover();
		obj3.dibujar();
		break;
	case '4':
		obj4.borrar();
		obj4.mover();
		obj4.dibujar();
	}
}

void Jugar::borrar_todos()
{
	obj4.borrar();
	obj3.borrar();
	obj2.borrar();
	obj1.borrar();
}