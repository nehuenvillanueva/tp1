//PSEUDOCODIGO: se le pide al usuario 4 numeros al usuarios
//luego de recibir los numeros,2 de ellos se suman y se muestran la suma de los mismos en pantalla
//y despues se calcula el producto entre los dos numeros restantes y se muestra el resultado en pantalla.

#include <iostream>

using namespace std;

int main()
{	
	int num1, num2, num3, num4, suma, producto;
	cout<<"ingrese el primer numero para la suma:";
	cin>>num1;
	cout<<"ingrese el segundo numero para la suma:";
	cin>>num2;
	suma=num1+num2;
	cout<<"la suma entre los dos numeros es:"<<suma;
	cout<<"\n";
	cout<<"ahora, ingrese el primer numero para la multiplicacion:";
	cin>>num3;
	cout<<"ahora, ingrese el segundo numero para la multiplicacion:";
    cin>>num4;
    producto=num3*num4;
    cout<<"el producto entre los dos numeros es igual a:"<<producto;
	return 0;
}
	
