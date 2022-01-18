//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/xor-challenge-2420f189/

#include <iostream>
using namespace std;

#define ll long long

int main(){
	ll int c;
	cin>>c;
	ll int max=0;
	for(ll int i=0; i<c; i++){

		ll int temp = i^c;
		if(temp*i>max){
			max=temp*i;
		}
	}
	cout<<max;
}
