#include<iostream>
#include<conio.h>

using namespace std;

int opcion; //Operacion que elegira el usuario
int a; //Numero que ingresara usuario
int b=1; //Factorial del numero ingresado
int sum; // Valores de sumatoria
int resultado=0; // Sumatoria

int main(){
	
	cout<<"\n\t\t\tHerramienta multiple"<<endl;
	cout<<"\n\tFactorial(1): \tSumatoria(2): \tSalir(0): "<<endl; 
	cout<<"\n\tTu eleccion: "; cin>>opcion;
	
	if(opcion == 0){
		cout<<"\n\tGracias por su contribucion.\n"<<endl;
	}
	
	else if(opcion == 1){
	
		do{
	
		cout<<"\nIngresar numero para calcular su Factorial\n(Para terminar, escriba -1) "<<endl;
		cout<<"\n\tTu numero: "; cin>>a;
	
			for(a;a>0;a--){
			b=b*a;
			}
		cout<<"\n\t\tEl factorial de su numero es: "<<b<<fixed<<endl;
		b=0;
		b=1;
		
		}while(a!=-1);
	
	}	
	
	else if(opcion == 2){
		cout<<"\n\tA continuacion ingrese numero que desee sumar, \n\tpara finalizar ingrese (-1):\n"<<endl;
		do{
			cout<<"Ingrese un numero:";
			cin>>sum;
			resultado = sum + resultado;
		}while(sum!=-1);
		
		cout<<"\n\tEsta es la sumatoria: "<<resultado+1<<endl;
		
		
		
	}
	
	system("pause");
	return 0;
}
