#include<conio.h>
#include"Manejadora.h"
int main()
{
	srand(time(0));
	Manejador obj;
	char tecla;
	clock_t tiempo=clock();
	while (obj.colisionObjetos())// true  false=termina
	{
		Console::SetCursorPosition(90, 0); cout << "Cantidad de virus: " << obj.getCantidadVirus();
		Console::SetCursorPosition(90, 1); cout << "Cantidad de colisión: " << obj.getcantidadColision();
		if ((clock() - tiempo) / CLOCKS_PER_SEC >= 5)//si es que ya pasron 5 segundas
		{
			obj.insetar_vacuna();
			tiempo = clock();
		}
		obj.borrar_todos();
		if (_kbhit())
		{
			tecla = getch();
			obj.mover_monigote(tecla);
			if (toupper(tecla) == 'V')
				obj.insetar_virus();
		}
		obj.mover_todos();
		obj.dibujar_todos();
		_sleep(100);
	}
	Console::Clear();
	Console::SetCursorPosition(30,15);
	if (obj.getcantidadColision() >= 3)cout << "Te eliminaron";
	else cout << "Ganaste";
	getch();
	getch();
	return 0;
}


