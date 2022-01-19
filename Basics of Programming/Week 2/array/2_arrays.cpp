//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/2-arrays-90c9019c/

#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr1[n],arr2[n];
	int n1=0,n2=0,s1=0,s2=0;
	for(int i=0; i<n; i++){
		cin>>arr1[i];
		if(arr1[i]==-1)
			n1++;
		else
			s1+=arr1[i];
	}
	for(int i=0; i<n; i++){
		cin>>arr2[i];
		if(arr2[i]==-1)
			n2++;
		else
			s2+=arr2[i];
	}

	if(n1 && n2)
		cout<<"Infinite";
	else if((n1==1 && n2==0 && s1<s2) || (n1==0 && n2==1 && s1>s2)){
		cout<<1;
	}
	else if((n1==1 && n2==0 && s1>s2) || (n1==0 && n2==1 && s1<s2)){
		cout<<0;
	}
	else if((n1==2 && n2==0 && s1<s2) || (n1==0 && n2==2 && s1>s2)){
		cout<<abs(s1-s2)+1;
	}
	else if((n1==2 && n2==0 && s1>s2) || (n1==0 && n2==2 && s1<s2)){
		cout<<0;
	}
	return 0;
}