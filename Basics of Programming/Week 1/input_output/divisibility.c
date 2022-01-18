//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/divisible-or-not-81b86ad7/

#include <stdio.h>

int main(){
	int N = 0;
	scanf("%d", &N);

	long data[N];
	for(auto i=0; i<N; i++)
	    scanf("%ld", &data[i]);

	if(data[N-1]%10 == 0){
		printf("Yes");
	}
	else{
		printf("No");
	}

    return 0;
}
