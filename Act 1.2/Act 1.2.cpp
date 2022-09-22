#include<iostream>

#include<sstream>
using namespace std;

class Fecha {
private:
	string digitofecha;
public:
	Fecha(string);
	void validarfecha();
};
Fecha::Fecha(string _digitofecha){
	digitofecha = _digitofecha;

};
void Fecha::validarfecha() {
	int D_fecha,A,M,D;
	cout << "Ingrese la fecha: "<<endl;
	cin >> digitofecha;
	istringstream(digitofecha) >> D_fecha;
	A = D_fecha / 10000;
	M = (D_fecha/100)%100;
	D = D_fecha / 100;
	if ((D >= 1 && D <= 31) && (M>=1 && M<=12) && (A<0)){
		cout << "La fecha es valida." << endl;

	}

}

int main() {
	 
	Fecha* FE[1];
	FE[0] = new Fecha(0);
	FE[0]->validarfecha();


}