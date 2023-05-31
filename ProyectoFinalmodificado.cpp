#include <iostream>
#include <fstream>
#include <stdlib.h>
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
	string status;
};
int contador, alta;

tienda* ZHOP; // * para punteros
void Alta();
void Lista();
void Eliminar();
void Modificar();
void Archivos();

int main()
{
	int opc;

	do
	{
		printf("Bienvenido ZHOP tu tienda de videojuegos y articulos gaming para videojuegos\n");
		printf("\t%c%c%c%cMenu de Opciones%c%c%c%c \n", 175, 175, 175, 175, 174, 174, 174, 174);
		printf("1. Alta de articulos\n2. Modificador de articulos\n3. Baja de Articulos\n4. Lista de Articulos\n5. Limpiar Pantalla\n6. Salir\n");
		scanf_s("%d", &opc);

		switch (opc)
		{

		case 1:
			Alta();
			return main();
			break;
		case 2:
			Modificar();
			return main();
			break;
		case 3:
			Eliminar();
			return main();
			break;
		case 4:
			Lista();
			return main();
			break;
		case 5:
			system("cls");
			return main();
			break;
		case 6:
			Archivos();
			exit(1);
			break;
		}
	} while (opc != 6);




}
void Alta()
{
	printf("¿Cuantos articulos deseas agregar?¨\n");
	scanf_s("%d", &alta);
	ZHOP = new tienda[alta];
	for (int i = 0; i < alta; i++)
	{
		ZHOP[i].numeroarticulo = i+1;
		cin.ignore();
		printf("Ingrese nombre del articulo \n");
		gets_s(ZHOP[i].nombre);
		printf("Ingrese descripcion del articulo \n");
		gets_s(ZHOP[i].descripcion);
		printf("Ingrese genero \n");
		gets_s(ZHOP[i].genero);
		printf("Ingrese clasificacion \n");
		gets_s(ZHOP[i].clasificacion);
		printf("Ingrese la consola \n");
		gets_s(ZHOP[i].consola);
		printf("Ingrese el precio \n");
		scanf_s("%f", &ZHOP[i].precio);
		ZHOP[i].precio = ZHOP[i].precio * 1.16;
	};
}
void Lista()
{
	for (int i = 0; i < alta; i++)
	{
		if (ZHOP[i].status == "ELIMINADO")
		{
			printf("El registro %d fue eliminado\n", i + 1);
		}
		else
		{
			printf("Registro %d \n", i + 1);
			printf("El numero del articulo es:\n %d \n", ZHOP[i].numeroarticulo);
			printf("El nombre del articulo es:\n %s \n", ZHOP[i].nombre);
			printf("La descripcion del articulo es:\n %s \n", ZHOP[i].descripcion);
			printf("El genero del articulo es;\n %s \n", ZHOP[i].genero);
			printf("La clasificacion del articulo es;\n %s \n", ZHOP[i].clasificacion);
			printf("La consola del articulo es;\n %s \n", ZHOP[i].consola);
			printf("El precio del articulo es;\n %f \n", ZHOP[i].precio);
		}
	}
}
void Eliminar()
{
	int j;
	printf("Ingrese el registro que deseas eliminar \n");
	scanf_s("%d", &j);
	j = j - 1;
	for (int i = j; i == j; i++)
	{
		printf("Eliminando registro %d \n", j + 1);
		ZHOP[i].status = "ELIMINADO";
	}
}
void Modificar()
{
	int j, opcion, opcion2;
	do
	{
		printf("Ingrese el numero de registro que desea modificar \n");
		scanf_s("%d", &j);
		j = j - 1;

		for (int i = j; i == j; i++)
		{
			if ((ZHOP[i].status == "ELIMINADO"))
			{
				printf("Ingrese un registro valido \n");
				opcion2 = 1;
			}
			else
			{
				opcion2 = 2;
			}
		}
	} while (opcion2 == 1);
	printf("Ingrese que desea modificar \n 1-Nombre del articulo \n 2-Descripcion del articulo \n 3-Genero del articulo \n 4-Clasificacion del articulo \n 5-Consola del articulo \n 6-Precio del articulo \n");
	scanf_s("%d", &opcion);

	switch (opcion)
	{
	case 1:
		for (int i = j; i == j; i++)
		{
			while (getchar() != '\n');
			printf("Ingresa el nombre \n");
			gets_s(ZHOP[i].nombre);
		}
		break;
	case 2:
		for (int i = j; i == j; i++)
		{
			while (getchar() != '\n');
			printf("Ingresa la descripcion \n");
			gets_s(ZHOP[i].descripcion);
		}
		break;
	case 3:
		for (int i = j; i == j; i++)
		{
			while (getchar() != '\n');
			printf("Ingresa el genero \n");
			gets_s(ZHOP[i].genero);
		}
		break;
	case 4:
		for (int i = j; i == j; i++)
		{
			while (getchar() != '\n');
			printf("Ingresa la clasificacion \n");
			gets_s(ZHOP[i].clasificacion);
		}
		break;
	case 5:
		for (int i = j; i == j; i++)
		{
			while (getchar() != '\n');
			printf("Ingresa la consola \n");
			gets_s(ZHOP[i].consola);
		}
		break;
	case 6:
		for (int i = j; i == j; i++)
		{
			printf("Ingresa el precio \n");
			scanf_s("%f", &ZHOP[i].precio);
			ZHOP[i].precio = ZHOP[i].precio * 1.16;
		}
		break;
	}
}
void Archivos()
{
	ofstream archivo;
	string nombrearchivo;
	int texto;
	string texto2;

	nombrearchivo = "ZHOP.txt";

	archivo.open(nombrearchivo.c_str(), ios::out);

	if (archivo.fail())
	{
		cout << "Hubo un error al crear el archivo";
		exit(1);
	}
	archivo << "NumeroArt" << "\t";
	archivo << "Nombre" << "\t";
	archivo << "Descripcion" << "\t";
	archivo << "Genero" << "\t";
	archivo << "Clasificacion" << "\t";
	archivo << "Consola" << "\t";
	archivo << "Precio" << "\t";
	archivo << "Status" << "\n";

	for (int i = 0; i < alta; i++)
	{
		if (ZHOP[i].status == "ELIMINADO")
		{
			texto2 = "Este registro fue eliminado";
			texto = i;
			archivo << texto2 << texto << "\n";
		}
		else
		{
			texto = ZHOP[i].numeroarticulo;
			archivo << texto << "\t" << "\t";
			texto2 = ZHOP[i].nombre;
			archivo << texto2 << "\t" << "\t";
			texto2 = ZHOP[i].descripcion;
			archivo << texto2 << "\t" << "\t";
			texto2 = ZHOP[i].genero;
			archivo << texto2 << "\t" << "\t";
			texto2 = ZHOP[i].clasificacion;
			archivo << texto2 << "\t" << "\t";
			texto2 = ZHOP[i].consola;
			archivo << texto2 << "\t" << "\t";
			archivo << ZHOP[i].precio << "\t" << "\t";
		}
	}

	archivo.close();
}