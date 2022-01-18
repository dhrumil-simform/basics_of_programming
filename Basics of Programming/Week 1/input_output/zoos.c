//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/is-zoo-f6f309e7/

#include <stdio.h>

int main(){
	int z=0, o=0;
	char zoo[20];
	int i;
	scanf("%s", zoo);
	for(i=0; zoo[i]!='\0'; i++){
		if(zoo[i]=='z')
			z++;
		else
			o++;
	}
	if(2*z == o)
		printf("Yes");
	else
		printf("No");
	return 0;
}
