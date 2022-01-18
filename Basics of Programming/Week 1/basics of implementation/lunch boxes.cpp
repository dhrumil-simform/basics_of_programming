//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/lunch-boxes-019bf2a5/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	int N, M;
	int count[t]={ 0 };
	for(int i=0; i<t; i++){
		cin >> N >> M;
		int A[M];
		for(int j=0; j<M; j++){
			cin >> A[j];
		}
		sort(A, A+M);
		int j=0, sum=0;
		while(j<M){
			if(sum+A[j]>N){
				break;
			}
			else{
				sum = sum+A[j];
				count[i]++;
			}
			j++;
		}
	}
	for(int i=0; i<t; i++){
		cout << count[i] <<endl;
	}
	return 0;
}
