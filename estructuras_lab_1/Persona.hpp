class Persona {
public:
	Persona(int edad);
	~Persona();
		int getEdad();
		bool esMujer();
		void setEdad(int edad);
		void mostrar();
private:
	bool género;
	int edad;
	char dni[10];
};