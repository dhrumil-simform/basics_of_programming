#include <iostream>
using namespace std;

int main()
{
	long int Oc, Of, Od;
	long int Cs, Cb, Cm, Cd;
	long int D;
	cin>>D;
	cin>>Oc>>Of>>Od;
	cin>>Cs>>Cb>>Cm>>Cd;
	long int O = Oc + (D-Of)*Od;
	long int C = Cb + (Cd*D) + ((D/Cs)*Cm);
	if(O>C){
		cout<<"Classic Taxi";
	}
	else{
		cout<<"Online Taxi";
	}
	return 0;
}
