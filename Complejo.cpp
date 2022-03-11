#include "Complejo.hpp"

Complejo::Complejo(double pReal, double pImaginario){
		setReal(pReal);
		setImaginario(pImaginario);
}

Complejo::Complejo(){
	real = 0;
	imaginario = 0;
	cout<<"El complejo es : "<<real<<"+"<<imaginario;
	cout<<"i"<<"= ("<<real<<")"<<"("<<imaginario<<")"<<endl;
}

void Complejo::setReal(double preal){
	real = preal;
}

void Complejo::setImaginario(double pimaginario){
	imaginario = pimaginario;
}

double Complejo::getReal(){
	return real;
}

double Complejo::getImaginario(){
	return imaginario;
}

void Complejo::mostrarComplejo(){
	if(getImaginario()<0){
		cout<<"El numero complejo es: "<<getReal()<<getImaginario()<<"i"<<endl;
	}
	else{
		cout<<"El numero complejo es: "<<getReal()<<"+"<<getImaginario()<<"i"<<endl;
	}
}

void Complejo::conjugado(){
	double c;
	c = -1*getImaginario();
	if(c<0){
		cout<<"El numero complejo es: "<<getReal()<<c<<"i"<<endl;
	}
	else{
		cout<<"El numero complejo es: "<<getReal()<<"+"<<c<<"i"<<endl;
	}
	
}
