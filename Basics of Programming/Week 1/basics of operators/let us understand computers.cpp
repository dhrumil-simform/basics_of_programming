//https://www.hackerearth.com/practice/basic-programming/operators/basics-of-operators/practice-problems/algorithm/let-us-understand-computer-78476e7a/

#include <bits/stdc++.h>
using namespace std;

int bitcount(int n){
	int count=0;
	while(n>0){
		count++;
		n>>=1;

	}
	return count;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		long int x;
		cin>>x;
		long int r=ceil(sqrt(x));
		long int l=1,res=-1;
		while(l<=r){
			long int m= l+(r-l)/2;
			if(bitcount(m)>=bitcount(x/m)){
				res=m;
				r=m-1;
			}
			else{
				l=m+1;
			}
		}
		cout<<x-res+1<<endl;
	}
	return 0;
}
