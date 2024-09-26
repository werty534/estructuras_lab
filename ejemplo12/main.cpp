#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

struct persona {
	char nombre[30];
	int edad;
	long teléfono;
};

void Escribir(persona p){
	cout << p.nombre << " tiene " << p.edad << " años y su teléfono es " << p.teléfono;
	cout << endl;
}

void EscribirPuntero(persona* p){
	cout << p -> nombre << " tiene " << p -> edad << " años y su teléfono es " << p -> teléfono;
	cout << endl;
}

persona CrearPersona(char n[30], int e, long t){
	persona aux;
	strcpy(aux.nombre, n);
	aux.edad = e;
	aux.teléfono = t;
	return aux;
}

int main(int argc, char **argv)
{
	persona ejemplo;
	ejemplo = CrearPersona((char*)"Jesús", 99, 123456789);
	cout << "Paso por valor" << endl;
	Escribir(ejemplo);
	cout << endl;
	ejemplo = CrearPersona((char*)"Mario", 55, 987654321);
	cout << "Paso con punteros" << endl;
	EscribirPuntero(&ejemplo);
    return 0;
}
