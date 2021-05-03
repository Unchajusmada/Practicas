#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;
int a;
int b=0;
bool contador = true;

int main(){
	
	cout<<"\n\t\tDesea sumar todos los numeros del 1 al 100?\n"<<endl;
	cout<<"\n\tYes(1):\tNo(0): "<<endl; 
	cout<<"\nTu eleccion: "; cin>>a;
	
	if(a==1){
		cout<<"\n\tIniciar a contar";
		do{
		b++;
		cout<<"\n\tLa cuenta va por: "<<b-1<<endl;	
		}while(b <= 100);
		
		cout<<"\n\tResultado final: "<<b-1<<endl;
	}
	
	else{
		cout<<"\nThank's you, next.\n\n";
	}
		
	
	
	
	
	
	
	system("pause");
	return 0;
}
