//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/make-even-8ced0d4b/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long arr[n];
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}
		int count=0;
		for(int i=0; i<n; i++){
			if(arr[i]%2!=0 && arr[i+1]%2!=0){
				count++;
				i+=1;
			}
			else if(arr[i]%2!=0 && arr[i+1]%2==0){
				count+=2;

			}

		}
		cout<<count<<endl;

	}
	return 0;
}
