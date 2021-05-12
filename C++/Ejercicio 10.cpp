#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;

int cantidad; //cantidad de estudiantes
int cedula[5], nota[5] = {01,01,01,01,01};
string nombre[5], apellido[5];

int main(){
	
	cout<<"\n\t\tEstudiantes de programacion: "<<endl;
	
	for(cantidad = 0; cantidad < 5; cantidad++){
		
	//mientras "cantidad" sea menor a 5, se repetira el ciclo for 
	//y el valor de "cantidad" aumentara
		cout<<"\n\tNombre del estudiante: "; cin>>nombre[cantidad];
		cout<<"\n\tApellido del estudiante: "; cin>>apellido[cantidad];
		cout<<"\n\tCedula del estudiante: "; cin>>cedula[cantidad];
		cout<<"\n\tNota del estudiante: "; cin>>nota[cantidad];
				
	}
	
	if(cantidad==5){
		
		cout<<"\n\t\tResumen de Estudiantes de programacion: "<<endl;
		
		for(int estudiantes = 0; estudiantes < 5; estudiantes++){
	
	//mientras "estudiantes" sea menor a 5, se repetira el ciclo for y 
	//el valor de "estudiantes" aumentara	
		cout<<"\nEstudiante:"<<endl;
		cout<<"\n\tNombre del estudiante: "<< nombre[estudiantes]<<endl;
		cout<<"\n\tApellido del estudiante: "<< apellido[estudiantes]<<endl;
		cout<<"\n\tCedula del estudiante: "<< cedula[estudiantes]<<endl;
		cout<<"\n\tNota del estudiante: "<< nota[estudiantes]<<endl;
		
		}
		
	}
	
	else{
	}
		
	system("pause");
	return 0;
}
