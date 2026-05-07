#include <iostream>
#include <string>
using namespace std;

//Structs
struct Empleado {
	string apellido;
	string nmbre;
	double sueldo;
};
struct Alumno {
	string apellido;
	string nombre;
	double promedio;
};
//Recibe los dos arreglos y sus tamaños.
//n = cantidad empleados, m = cantidad alumnos.
void aumentarSueldo(Empleado A[], int n, Alumno B[], int m){
	for (int i=0; i<m; i++){
		if(B[i].promedio > 7) {
			for (int j=0; j < n; j++){ //Busco alumno con promedio mayor a 7 en la lista de empleados.
				if (A[j].apellido == B[i].apellido && A[j].nombre == B[i].nombre){
					A[j].sueldo = A[j].sueldo * 1.10 //Aumenta el sueldo un 10%
				}
			}
		}
	}
}
int main(){
	Empleado A[3] = {
		{"Contreras", "Ana", 350000},
		{"Morales", "Natalia", 200000},
		{"Vera", "Celeste", 400000}
	};
	Alumno B[3] = {
		{"Contreras", "Ana", 8.5},
		{"Morales", "Natalia", 5.0},
		{"Silva", "Ester", 9.0}
	};
	
	aumentar sueldo (A, 3, B,3);
	for (int i=0; i<3; i++){
		cout << A[i].apellido << " " << A[i].nombre << "-> $" << A[i].sueldo << end1;
	}
	
	return 0;
}
