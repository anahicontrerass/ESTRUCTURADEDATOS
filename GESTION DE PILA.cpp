#include <iostream>
using namespace std;

void LLENA() {
	cout << "Error: La pila esta LLENA." << endl;
}

void VACIA() {
	cout << "Error: La pila esta VACIA." << endl;
}
// tope inicia en 0
void AGREGAR(int x, int S[], int n, int &tope) {
	if (tope == n) {   // condicion exacta del pseudocodigo
		LLENA();
		return;
	}
	tope = tope + 1;
	S[tope] = x;
	cout << "-> Elemento " << x << " agregado." << endl;
}
void ELIMINAR(int &x, int S[], int &tope) {
	if (tope <= 0) {   // condicion exacta del pseudocodigo
		VACIA();
		return;
	}
	x = S[tope];
	tope = tope - 1;
	cout << "-> Se elimino el elemento: " << x << endl;
}

int main() {
	int n = 5;
	int S[6];    // indices del 1 al 5 
	int tope = 0;  // pila vacia: tope en 0
	int x;
	int opcion;
	
	do {
		cout << "\n--- GESTION DE PILA ---" << endl;
		cout << "1. AGREGAR" << endl;
		cout << "2. ELIMINAR" << endl;
		cout << "3. Salir" << endl;
		cout << "Elige una opcion: ";
		cin >> opcion;
		
		if (opcion == 1) {
			cout << "Numero a agregar: ";
			cin >> x;
			AGREGAR(x, S, n, tope);
		} else if (opcion == 2) {
			ELIMINAR(x, S, tope);
		}
	} while (opcion != 3);
	
	return 0;
}

