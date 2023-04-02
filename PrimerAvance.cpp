#include <iostream>
using namespace std;

int main()
{
	char nombre[20], descripcion[150], genero[30], clasificacion[30], consola[20];
	float precio;
	int numeroarticulo, opc, otroart;
	cout << "\t***Menu de Opciones***" << endl;
	cout << "1. Alta de articulos\n2. Modificador de articulos\n3. Baja de Articulos\n4. Lista de Articulos\n5. Limpiar Pantalla\n6. Salir\n";
	cin >> opc;

	switch (opc)
	{
	case 1:
		cout << "Ingrese numero de articulo" << endl;
		cin >> numeroarticulo;
		cout << "Ingrese nombre del articulo" << endl;
		cin >> nombre;
		cout << "Ingrese descripcion del articulo" << endl;
		cin >> descripcion;
		cout << "Ingrese genero" << endl;
		cin >> genero;
		cout << "Ingrese clasificacion" << endl;
		cin >> clasificacion;
		cout << "Ingrese la consola" << endl;
		cin >> consola;
		cout << "Ingrese el precio" << endl;
		cin >> precio;
		cout << "Desea agregar otro articulo\n1. Si\n2.No\n";
		cin >> otroart;
		if (otroart == 1)
		{
			system("pause");
			return main();
		}
		else
		{
			return main();
		}
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		system("cls");
		return main();
		break;
	case 6:
		exit(1);
		break;
	}




}