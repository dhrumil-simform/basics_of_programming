//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/excursion-2d080f3a/

#include <iostream>
using namespace std;

int main(){
	int T;
	cin >> T;
	int N[T], M[T], K[T];
	for(int i=0; i<T; i++){
		cin >> N[i] >> M[i] >> K[i];
	}
	int count;
	for(int i=0; i<T; i++){
		count=0;
		for(int n=0; N[i]>0; n++){
			if(N[i]>0){
				N[i] = N[i] - K[i];
				count++;
			}
		}
		for(int m=0; M[i]>0; m++){
			if(M[i]>0){
				M[i] = M[i] - K[i];
				count++;
			}
		}
		cout << count <<endl;
	}

	return 0;
}
