#include <iostream>;
using namespace std;
struct areas{
	double p;
};
int main()
{
	/*En un hospital existen tres �reas: Ginecolog�a, Pediatr�a, Traumatologia. El presupuesto
anual del hospital se reparte conforme a la sig. tabla:
�rea Porcentaje del presupuesto
Ginecolog�a 40%
Traumatologia 30%
Pediatr�a 30%*/

double p;

cout<<"Digite el presupuesto anual del hospital\n";
cin>>p;
cout<<"A Ginecologia le corresponde: "<<p*0.4<<endl;
cout<<"A Traumatologia le corresponde: "<<p*0.3<<endl;
cout<<"A Pediatria le corresponde: "<<p*0.3<<endl;


}
