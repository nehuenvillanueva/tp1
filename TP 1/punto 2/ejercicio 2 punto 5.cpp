//PSEUDOCODIGO:se le pide al usuario el ingreso del precio de un articulo
//y la cantidad de productos que lleva, para luego calcular la cantidad
//de dinero que se debe abonar para pagar todos los productos y mostrarlo en pantalla
#include <iostream>

using namespace std;

int main()
{	
	int producto, cantidad, precio ;
	cout<<"ingrese el valor del producto:";
	cin>>producto;
	cout<<"su producto cuesta:"<<producto;
	cout<<"\n";
	cout<<"ingrese la cantidad de articulos:";
	cin>>cantidad;
	precio=cantidad*producto;
	cout<<"la cantidad de plata que debe abonar es de: "<<precio;
	cout<<" pesos";
	return 0;
}	
	
