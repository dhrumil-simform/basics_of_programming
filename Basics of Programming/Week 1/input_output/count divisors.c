//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/count-divisors/

#include <stdio.h>

int main(){
	int l,r,k;
	scanf("%d %d %d", &l, &r, &k);
	int count=0, i;
	for(i=l; i<=r; i++){
		if(i%k==0){
			count++;
		}
	}
	printf("%d", count);
	return 0;
}
