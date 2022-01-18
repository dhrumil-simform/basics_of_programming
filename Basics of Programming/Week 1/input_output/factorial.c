//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-factorial/

#include <stdio.h>

int main(){
	int fact=1, n, i;
	scanf("%d", &n);
	for(i=n; i>0; i--){
		fact=fact*i;
	}
	printf("%d", fact);
	return 0;
}
