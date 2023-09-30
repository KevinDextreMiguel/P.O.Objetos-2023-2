#pragma once
#include<vector>
#include"Casa.h"
#include"Monigote.h"
#include"Vacuna.h"
#include"Virus.h"
class Manejador
{
public:
	Manejador();
	~Manejador();
	void borrar_todos();
	void mover_todos();
	void dibujar_todos();
	void mover_monigote(char tecla);
	void insetar_vacuna();
	void insetar_virus();
	bool colisionObjetos();
	int getCantidadVirus();
	int getcantidadColision();
private:
	Monigote* monigote;
	Casa* casa; 
	vector<Vacuna>vacunas;
	vector<Virus>virus;
	int cantidadColision;
	bool condicion;
	bool inmunidad;
	clock_t tiempo;
};

Manejador::Manejador()
{
	cantidadColision = 0;
	condicion=true;
	inmunidad=false;
	monigote = new Monigote();
	casa = new Casa();
	tiempo = clock();
}
Manejador::~Manejador()
{
	delete monigote;
	delete casa;
}
void Manejador::borrar_todos()
{
	monigote->borrar();
	for (int i = 0; i < virus.size(); i++)
		virus[i].borrar();
	for (int i = 0; i < vacunas.size(); i++)
		vacunas.at(i).borrar();
}
void Manejador::mover_todos()
{
	monigote->mover();
	for (int i = 0; i < virus.size(); i++)
		virus[i].mover();
	for (int i = 0; i < vacunas.size(); i++)
		vacunas.at(i).mover();
}
void Manejador::dibujar_todos()
{
	casa->dibujar();
	monigote->dibujar();
	for (int i = 0; i < virus.size(); i++)
		virus[i].dibujar();
	for (int i = 0; i < vacunas.size(); i++)
		vacunas.at(i).dibujar();
}

void Manejador::mover_monigote(char tecla)
{
	switch (tecla)
	{
	case 75: monigote->setDx(-1); monigote->setDy(0); break;
	case 72: monigote->setDx(0); monigote->setDy(-1); break;
	case 77: monigote->setDx(1); monigote->setDy(0); break;
	case 80: monigote->setDx(0); monigote->setDy(1); 
	}
}
void Manejador::insetar_vacuna()
{
	if (vacunas.size() < 5)
		vacunas.push_back(Vacuna());
}
void Manejador::insetar_virus()
{
	virus.push_back(Virus());
}
bool Manejador::colisionObjetos()
{
	//Colisión Virus - Monigote
	for (int i = 0; i < virus.size(); i++)
		if (virus[i].colision(monigote->getX(), monigote->gety(), monigote->getAncho(), monigote->getAlto()))
		{
			if (!inmunidad)
			{
				monigote->borrar();
				monigote->setX(0);
				monigote->setY(0);
				cantidadColision++;
			}
		}
	//Colisión Virus - Monigote
	for (int i = 0; i < vacunas.size(); i++)
		if (vacunas[i].colision(monigote->getX(),monigote->gety(), monigote->getAncho(), monigote->getAlto()))
		{
			tiempo = clock();
			inmunidad = false;
		}
	//colsion Casa - Monigote
	if (monigote->colision(casa->getX(), casa->gety(), casa->getAncho(), casa->getAlto()))
		condicion = false;
	if ((clock() - tiempo) / CLOCKS_PER_SEC >= 10)
		inmunidad = false;
	if(cantidadColision>=3)
		condicion = false;
	return condicion;
}
int Manejador::getCantidadVirus() { return virus.size(); }
int Manejador::getcantidadColision() { return cantidadColision; }