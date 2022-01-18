//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/golf/modulo-strength-4/

#include <iostream>
using namespace std;
int main(){
	long int n,k,i=0;
	cin>>n>>k;
	long int a[n];
	while(i<n){
		cin>>a[i++];
	}
	long int s=0,t,b[k]={};
	i=0;
	while(i<n){
		t=a[i++]%k;
		b[t]++;
	}
	i=0;
	while(i<k){
		s=s+(b[i]*(b[i]-1));
		i++;
	}
	cout<<s;
	return 0;
}
