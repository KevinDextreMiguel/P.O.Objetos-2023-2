#include"Jugar.h"
#include"Equilatero.h"
#include"TriRectangulo.h"

int menu()
{
	int opc;
	do
	{
		cout << "=============MENU==============";
		cout << "\n1. Dibujar un triangulo reactangulo";
		cout << "\n2. Dibujar un triangulo Equilatero";
		cout << "\nIngrese una opción: "; cin >> opc;
	} while (opc<1||opc>2);
	return opc;
}

int pedir_lado()
{
	int l;
	//do
	//{
		cout << "\n\nIngrese el lado: "; cin >> l;
	//} while (l<5||l>100);
	return l;
}
int main()
{
	srand(time(0));
	//Console::SetWindowSize(ANCHO_CONSOLA, ALTO_CONSOLA);
	//Jugar* obj = new Jugar();
	//char tecla='0';
	//while (true)
	//{
	//	if (_kbhit())
	//	{
	//		tecla = getch();
	//		obj->borrar_todos();
	//	}
	//	obj->elegir_avion(tecla);
	//	_sleep(100);
	//}
	//delete obj;

	Equilatero *objE;
	TrianguloREctangulo *objR;
	int l1,l2;
	char c;
	while (true)
	{
		int opc = menu();
		l1 = pedir_lado();
		cout << "\nCaracter: "; cin >> c;
		switch (opc)
		{
		case 1:
			l2 = pedir_lado();
			objR = new TrianguloREctangulo(l1, l2, c);
			objR->dibujar();
		case 2:
			objE = new Equilatero(c,l1);
			objE->mostrar();
		}
		getch();
		system("cls");
	}

	delete objE;
	delete objR;
	getch();
	return 0;
}


