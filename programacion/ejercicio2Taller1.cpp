#include <iostream>;
using namespace std;
struct sueldos{
	//atributos
	float sueldo, comision;
	//m�todos o funciones
	
	
};


int main()
{
	/*Un vendedor recibe un sueldo base m�s un 10% extra por comisi�n de sus ventas, el vendedor
desea saber cu�nto dinero obtendr� por concepto de comisiones por las tres ventas que realiza en
el mes y el total que recibir� en el mes tomando en cuenta su sueldo base y comisiones.*/
float sueldo,comision;


cout<<"Digite el sueldo base\n";
cin>>sueldo;
comision=sueldo*0.3;
sueldo=sueldo+comision;

cout<<"El dinero que obtendra por sus ventas es: "<<comision<<endl;
cout<<"El total que recibira es de: "<<sueldo;

}
