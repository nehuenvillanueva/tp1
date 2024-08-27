//PSEUDOCODIGO:Se ingresa por teclado un valor entero, para luego, mostrar en pantalla si el numero
//es positivo, negativo o nulo ( es decir que si es 0 ).

#include <iostream>

using namespace std;

int main(){	
	int numero;
	cout<<"ingrese el numero:";
	cin>>numero;
	if(numero>0){
	  {
	  	cout<<"el numero es positivo";
	  }
    }
	else{
        {  
       	if(numero<0){
       		{
       		cout<<"el numero es negativo";
			}
        }
		else{
		    {
		    cout<<"el numero es nulo";
			}
	   }
        }
    }
return 0;
}
