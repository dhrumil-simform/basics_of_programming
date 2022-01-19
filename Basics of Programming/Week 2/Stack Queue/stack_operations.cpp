//https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/stakth-1-e6a76632/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll int n, k;
	cin>>n>>k;
	ll int arr[n];
	for(ll int i=0; i<n; i++){
		cin>>arr[i];
	}

	if(n==1 && k%2!=0){
		cout<<"-1";
	}
	else if(n==k){
		cout<<*max_element(arr, arr+n-1);
	}
	else if(n>k){
		ll int max = *max_element(arr, arr+k-1);
		if(max>arr[k]){
			cout<<max;
		}
		else{
			cout<<arr[k];
		}
		//cout<<*max_element(arr,arr+k);
	}
	else{
		cout<<*max_element(arr, arr+n);
	}
	return 0;
}