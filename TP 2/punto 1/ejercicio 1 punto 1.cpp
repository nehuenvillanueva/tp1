//PSEUDOCODIGO:se le piden al usuario 2 numeros para luego con la sentencia "if"
//ver cual es mas grande de los dos, si el num1 es mayor a num2, se muestra en pantalla 
//que num1 es mayor a num2 y viceversa.

#include <iostream>

using namespace std;

int main(){	
	int num1, num2;
	cout<<"ingrese el primer numero:";
	cin>>num1;
	cout<<"ingrese el segundo numero:";
	cin>>num2;
	if(num1>num2){
	  {
	  	cout<<"el numero mayor es el: "<<num1;
	  }
    }else{
        {  
       	cout<<"el numero mayor es el: "<<num2;
	    }
	  }
    return 0;
}
	
