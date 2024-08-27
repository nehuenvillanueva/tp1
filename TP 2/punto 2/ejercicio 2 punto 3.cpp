//PSEUDOCODIGO:pedirle al usuario que ingrese 3 numeros y almacenarlos, ver cual es el numero mas grande

#include <iostream>

using namespace std;

int main(){	
	float A, B, C;
	cout<<"ingrese el numero A:";
	cin>>A;
	cout<<"ingrese el numero B:";
	cin>>B;
	cout<<"ingrese el numero C:";
	cin>>C;
	if((A==B) || (B==C) || (A==C)){
	  {
	  	cout<<"\n";
	  	cout<<"ALERTA, SE INGRESARON 2 O MAS NUMEROS IGUALES";
	  }
    }
    else{
	if(A>B, A>C){
	  {
	  	cout<<"\n";
	  	cout<<"el numero mayor es el:"<<A;
	  }
    }
	else{
		if(B>A, B>C){
	  {
	  	cout<<"\n";
	  	cout<<"el numero mayor es el:"<<B;
	  }
	
    }else{
    	{
    		cout<<"\n";
    		cout<<"el numero mayor es el:"<<C;
		}
	}
}
	if(A<B, A<C){
	  {
	  	cout<<"\n";
		cout<<"el numero menor es el:"<<A;
	  }
    }
	else{
		if(B<A, B<C){
	  {
	  	cout<<"\n";
		cout<<"el numero menor es el:"<<B;
	  }
	
    }else{
    	{
    		cout<<"\n";
			cout<<"el numero menor es el:"<<C;
		}
	}
}
}
return 0;
}
