//PSEUDOCODIGO:se le pide 4 numeros al usuario 
//para luego calcular el promedio entre los 4 numeros y su suma
//para despues mostrar en pantalla los resultados del promedio y la suma
#include <iostream>

using namespace std;

int main()
{	
	int num1, num2, num3, num4, suma, producto;
	cout<<"ingrese el primer numero:";
	cin>>num1;
	cout<<"ingrese el segundo numero:";
	cin>>num2;
	cout<<"ingrese el tercer numero:";
	cin>>num3;
	cout<<"ingrese el cuarto numero:";
	cin>>num4;
	suma=num1+num2+num3+num4;
	cout<<"la suma entre los 4 numeros es:"<<suma;
	cout<<"\n";
    producto=num1*num2*num3*num4;
    cout<<"el producto entre los 4 numeros es igual a:"<<producto;
	return 0;
}	
	
