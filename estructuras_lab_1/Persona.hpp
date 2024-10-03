#include <iostream>
using namespace std;

class Persona {
public:
	Persona(int edad, bool esMujer, const char dni[10]);
	~Persona();
	int getEdad();
	bool esMujer();
	void setEdad(int edad);
	void mostrar();
private:
	bool genero;
	int edad;
	char dni[10];
};