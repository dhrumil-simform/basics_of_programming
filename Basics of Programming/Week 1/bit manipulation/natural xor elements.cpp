//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/natural-xor-25d22168/

#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n%4==1){
			cout<<"1 1"<<endl;
		}
		else if(n%4==2){
			cout<<"2 "<<n<<" 1"<<endl;
		}
		else if(n%4==3){
			cout<<"0"<<endl;
		}
		else{
			cout<<"1 "<<n<<endl;
		}
	}
	return 0;
}
