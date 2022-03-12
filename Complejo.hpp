#include<iostream>
using std::cout;
using std::endl;
using std::cin;

class Complejo{
	public:
		//Constructor
		Complejo(double, double);
		//Contructor suma
		Complejo(double, double, double, double);
		//Constructor por defecto
		Complejo();
		//Funciones miembros
		void setReal(double);
		void setImaginario(double);
		void mostrarComplejo();
		void conjugado();
		void modulo();
		double getReal();
		double getImaginario();
		
	
	private:
		//Atributos
		double real, imaginario;
};
