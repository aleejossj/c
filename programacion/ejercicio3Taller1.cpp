#include <iostream>;
using namespace std;
struct compras{
	//atributos
	float compra, descuento, totalCompra;
	//m�todos o funciones
	
	
};

int main()
{
	/*Una tienda ofrece un descuento del 15% sobre el total de la compra y un cliente desea saber
cu�nto deber� pagar finalmente por su compra.*/
double compra,totalCompra,descuento;


cout<<"Digite el precio de la compra que va a realizar\n";
cin>>compra;

descuento=compra*0.15;
totalCompra=compra-descuento;
cout<<"El descuento es de : "<<descuento<<endl;
cout<<"El total a pagar es de : "<<totalCompra;

}
