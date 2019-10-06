#include <iostream>
#include <stdlib.h>

using namespace std;

int main (){
	
	int opcion; float x=0, y=0, a=0, facto=1, b=1, c=1;
	
	cout<<"CALCULADORA BASICA."<<endl;
	
	while (opcion!=7){
		cout<<"\nSeleccione una opcion: "<<endl;
		cout<<"\n1.Suma\n2.Resta\n3.Division\n4.Multiplicacion\n5.Factorial\n6.Fibonacci\n7.Salir\n"; 
		cin>>opcion;
		
	switch (opcion){
		case 1: cout<<"\nIngre el primer numero: "; cin>>x;
				cout<<"Ingre el segundo numero: "; cin>>y;
				
				a= x+y;
				
				cout<<"\nLa sumatoria es: "<<a<<endl;
				break;
		
		case 2: cout<<"\nIngrese el primer numero: "; cin>>x;
				cout<<"Ingrese el segundo numero: "; cin>>y;
				
				a= x-y;
				
				cout<<"\nLa diferencia es: "<<a<<endl;
				break;
				
		case 3: cout<<"\nIngrese el primer numero: "; cin>>x;
				cout<<"Ingrese el segundo numero: "; cin>>y;
				
				a= x*y;
				
				cout<<"\nEl producto es: "<<a<<endl;
				break;
				
		case 4: cout<<"\nIngrese el primer numero: "; cin>>x;
				cout<<"Ingrese el segundo numero: "; cin>>y;
				
				a= x/y;
				
				cout<<"\nEl residuo es: "<<a<<endl;
				break;
				
		case 5: cout<<"\nIngrese un numero: "; cin>>a;
	
					for (int i=1; i<= a; i++){
		
					facto= facto*i;
					}
	
				cout<<"\nEl factorial de "<<a; cout<<" es: "<<facto<<endl;
				break;
				
		case 6: cout<<"\nIngrese un numero: "; cin>>x;
	
				if (x!=0){
				cout<<"\n1 ";
	
					for (int i=1; i<x; i++){
		
					c= a+b;
					cout<<c<<" ";
					a=b;
					b=c; 
					} 
					
				}
					else {
					cout<<x;
					}
				cout<<endl;
				break;
		  
				}
			}

		return 0;
				}
