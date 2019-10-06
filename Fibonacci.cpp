#include <iostream>
#include <stdlib.h>

using namespace std;

int main (){
	
	int n, a=0, b=1, c=1;
	
	cout<<"Ingrese un numero: "; cin>>n;
	
	if (n!=0){
	cout<<"1 ";
	
	for (int i=1; i<n; i++){
		
		c= a+b;
		cout<<c<<" ";
		a=b;
		b=c; 
	} 
	}
	else {
		cout<<n;
	}
	cout<<endl;
	system ("pause");
	
	return 0;
}
