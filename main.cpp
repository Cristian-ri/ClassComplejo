#include "Complejo.hpp"

int main()
{
	cout<<"---------------Prueba--------------"<<endl;
	Complejo c1(-2,3), c2(8,-5);
	c1.mostrarComplejo();
	c2.mostrarComplejo();
	cout<<"Parte real del objecto 1: "<<c1.getReal()<<endl;
	cout<<"Parte imaginaria del objeto 2: "<<c2.getImaginario()<<endl;
	cout<<"----------Fin prueba----------------"<<endl;
	cout<<"\n";
	
	cout<<"Conjugado de los complejos: "<<endl;
	c1.conjugado();
	c2.conjugado();
	
	return 0;
}


