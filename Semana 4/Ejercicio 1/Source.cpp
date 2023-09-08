#include"Jugar.h"

int main()
{
	srand(time(0));
	Console::SetWindowSize(ANCHO_CONSOLA, ALTO_CONSOLA);
	Jugar* obj = new Jugar();
	char tecla='0';
	while (true)
	{
		if (_kbhit())
		{
			tecla = getch();
			obj->borrar_todos();
		}
		obj->elegir_avion(tecla);
		_sleep(100);
	}
	delete obj;
	getch();
	return 0;
}


