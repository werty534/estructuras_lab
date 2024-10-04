#include "Persona.hpp"

Persona::Persona(int edad, bool esMujer, const char dni[10])
{
    this->edad = edad;
    this->genero = esMujer;
    for(int i = 0; (dni[i] != '\0' && i < 10); i++) {
        this->dni[i] = dni[i];
    }
}
int Persona::getEdad() { return this->edad; }
void Persona::setEdad(int edad) { this->edad = edad; }
bool Persona::esMujer() { return this->genero; }
void Persona::mostrar()
{
    cout << "DNI: ";
    for(int i = 0; i < 10; i++) {
        cout << this->dni[i];
    }
    cout << "\tEdad: " << this->edad << "\tSexo: " << (this->genero ? "mujer" : "hombre") << endl;
}
Persona::~Persona() {}