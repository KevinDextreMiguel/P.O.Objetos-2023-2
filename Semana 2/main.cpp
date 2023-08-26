#include"Triangulo.h"
#include"VectorContrasenias.h"
void ejercicio1()
{
	srand(time(NULL));
	Triangulo obj1 = Triangulo(0, 10, 5);
	Triangulo obj2 = Triangulo(0, 20, 10);

	while (true)
	{
		obj1.borrar();
		obj1.mover();
		obj1.dibujar();

		obj2.borrar();
		obj2.mover();
		obj2.dibujar();
		_sleep(100);
	}
}

void ejercicio2()
{
	VectorContrasenias obj;
	obj.generar_contrasenias();
	obj.imprimir();
}
int main()
{
	Console::SetWindowSize(ANCHO_CONSOLA, ALTO_CONSOLA);
	//ejercicio1();
	ejercicio2();
	
	getch();
	return 0;
}
