<<<<<<< Updated upstream
=======
#include "Complejo.hpp"
//apuntador tipo objeto
/*Complejo *ptrComplejo;
void ingresarComplejo(Complejo *, int);*/
>>>>>>> Stashed changes


int main() 
{
<<<<<<< Updated upstream
	
	
	return 0;
}
=======
	int op;
	int cantidadC;
	
	cout<<"---------------Prueba--------------"<<endl;
	Complejo c1(-2,3), c2(8,-5), resultado(0,0);
	Complejo c3(5,8);
	c1.mostrarComplejo();
	c2.mostrarComplejo();
	c3.mostrarComplejo();
	cout<<"Parte real del objecto 1: "<<c1.getReal()<<endl;
	cout<<"Parte imaginaria del objeto 2: "<<c2.getImaginario()<<endl;
	cout<<"----------Fin prueba----------------"<<endl;
	cout<<"\n";
	
	cout<<"Conjugado de los complejos: "<<endl;
	c1.conjugado();
	c2.conjugado();
	cout<<"\n";
	cout<<"Modulo de un complejo"<<endl;
	c3.modulo();
	cout<<"\n";
	cout<<"Suma de complejos forma 1"<<endl;
	c1.sumaform1(&c1,&c2);
	c1.mostrarComplejo();
	cout<<"\n";
	cout<<"Suma de complejos forma 2"<<endl;
	c3.suma(&c2);
	c3.mostrarComplejo();
	cout<<"\n";
	cout<<"Suma de complejos forma 3"<<endl;
	resultado = resultado.suma(&c1, &c2);
	resultado.mostrarComplejo();
	cout<<"\n";
	cout<<"Suma de complejos forma 3 optimizada"<<endl;
	resultado = resultado.sumaform3(&c1, &c2);
	resultado.mostrarComplejo();

	
	
	/*cout<<"Menu de opciones: "<<endl;
	cout<<"1 --> Ingresar y mostrar complejos."<<endl;
	cout<<"2 --> Conjugado complejos."<<endl;
	cout<<"3 --> Modulo complejos."<<endl;
	cin>>op;
	
	if(op==1){
		cout<<"Agregar cantidad de numeros complejos a ingresar: "<<endl;
		cin>>cantidadC;
		ptrComplejo = new Complejo[cantidadC];
		ingresarComplejo(ptrComplejo, cantidadC);	
	}
	else if(op==2){
		cout<<"Conjugado de un complejo."<<endl;
	}
	else{
		cout<<"Modulo de un complejo."<<endl;
	}*/
	
	return 0;
}

/*void ingresarComplejo(Complejo * C, int n){
	double r, ima;
	for(int i=0; i<n; i++){
		cout<<"Ingrese los numeros complejos "<<i+1<<";";
		cin>> r, ima;
		C[i].setReal(r);
		C[i].setImaginario(ima);
		cout<<"Complejos correctamente ingresados."<<endl;
	}
	
	for(int i=0; i<n; i++){
		cout<<"Complejos ingresados"<<endl;
		C[i].mostrarComplejo();
	}
}*/

>>>>>>> Stashed changes
