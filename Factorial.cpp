#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int a, facto=1;
	
	cout<<"PROGRAMA PARA DETERMINAR FACTORIAL DE UN NUMERO (N)."<<endl;
	cout<<"Ingrese un numero: "; cin>>a;
	
	for (int i=1; i<= a; i++){
		
		facto= facto*i;
	}
	
	cout<<"\nEl factorial de "<<a; cout<<" es: "<<facto<<endl;
	
	system ("pause");	
	
	return 0;
}
