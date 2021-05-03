#include<iostream>
#include<stdlib.h>


using namespace std;

int a, b;
bool edades = true;

int main(){

	cout<<"\t\tIngresar edades para el analisis"<<endl;
	
	cout<<"\n\tPrimera edad (debe ser mayor o igual a 18):"; cin>>a;
	cout<<"\n\tUltima edad (debe ser mayor a la primera edad y menor a 35):"; cin>>b;
	
	
	if(edades = (a>=18 && b<=35 && a<b)){
		cout<<"\nLas edades cumplen los requisitos"<<endl;
		
		while(a<=b){
			if(a % 2==0){
				cout<<"Es par ";
				a++;
			}
			else{
				cout<<"Es impar ";
				a++;
			}
		cout<<a-1<<endl;
			
		}
		
				
	} 

	else{
		cout<<"\n\tLas edades no cumplieron las condiciones"<<endl;
	}
		

	system("pause");	
	return 0;
}
