/*
 "Mayor"
 "Juan Manuel Bottarelli Frei"
 "20170413"
*/

#include <iostream>

using namespace std;

int main() {
	
	int a, b;
	
	cout << "El siguiente programa mostrara la suma de dos valores ingresados por el usuario" << endl << endl;
	cout << "Ingrese dos valores enteros y distintos" << endl;
	cin >> a >> b;
	
	if( a != b){
		if( a < b){
			cout << "El mayor es:" << b << endl;
		} else (a > b);{
			cout << "El mayor es:" << a << endl;
			return 0;
		}
	}else;{
		cout << "Los valores son iguales" << endl;
	}
	
}
