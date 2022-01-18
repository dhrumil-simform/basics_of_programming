//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/strange-xor-2-fc8ad535/

#include <bits/stdc++.h>
using namespace std;

int solve(int n){
	int arr[n];
	int xor1=0;
	int add1=0;
	unordered_map<int,int> mp;
	for(int i=0; i<n; i++){
		cin>>arr[i];
		xor1=xor1^arr[i];
		mp[arr[i]]=1;
	}
	int newarr[n];
	int temp=0;

	for(int i=0; i<n; i++){
		newarr[i] = arr[i]^xor1;
		if(mp[newarr[i]]!=1){
			temp=1;
		}
	}

	if(temp){
		return -1;
	}
	else{
		return xor1;
	}

}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int k=solve(n);
		cout<<k<<endl;
	}
	return 0;
}
