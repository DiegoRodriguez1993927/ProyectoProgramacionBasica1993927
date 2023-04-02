#include <iostream>
#include <math.h> 
#include <conio.h> 
#include <stdio.h>
#include <string.h>
#include <string>
#include <wchar.h>
using namespace std;

struct tienda
{
	char nombre[20], descripcion[150], genero[30], clasificacion[30], consola[20];
	float precio;
	int numeroarticulo, otroart;
};

int main()
{
	tienda registros[3];
	int opc;

	do
	{
		printf("\t***Menu de Opciones*** \n");
		printf("1. Alta de articulos\n2. Modificador de articulos\n3. Baja de Articulos\n4. Lista de Articulos\n5. Limpiar Pantalla\n6. Salir\n");
		cin >> opc;

		switch (opc)
		{

		case 1:
			for (int i = 0; i < 3; i++)
			{
				printf("Ingrese numero de articulo \n");
				scanf_s("%d",&registros[i].numeroarticulo);
				cin.ignore();
				printf("Ingrese nombre del articulo \n");
				gets_s(registros[i].nombre);
				printf("Ingrese descripcion del articulo \n");
				gets_s(registros[i].descripcion);
				printf("Ingrese genero \n");
				gets_s(registros[i].genero);
				printf("Ingrese clasificacion \n");
				gets_s(registros[i].clasificacion);
				printf("Ingrese la consola \n");
				gets_s(registros[i].consola);
				printf("Ingrese el precio \n");
				scanf_s("%f", &registros[i].precio);
			
			}
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			for (int i = 0; i < 3; i++)
			{
				printf("El numero del articulo es:\n %d \n", registros[i].numeroarticulo);
				printf("El nombre del articulo es:\n %s \n", registros[i].nombre);
				printf("La descripcion del articulo es:\n %s \n", registros[i].descripcion);
				printf("El genero del articulo es;\n %s \n", registros[i].genero);
				printf("La clasificacion del articulo es;\n %s \n", registros[i].clasificacion);
				printf("La consola del articulo es;\n %s \n", registros[i].consola);
				printf("El precio del articulo es;\n %f \n", registros[i].precio);
			}
			break;
		case 5:
			system("cls");
			return main();
			break;
		case 6:
			exit(1);
			break;
		}
	} while (opc != 6);




}