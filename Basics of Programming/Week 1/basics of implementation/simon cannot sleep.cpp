//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/simon-cant-sleep-3beb3241/

#include <iostream>
using namespace std;

int main(){
	int h, m;
	char c;
	int totalmin;
	cin >> h >> c >> m;
	totalmin=(h*60)+m;
	int overlap = (totalmin*11/720) + 1;
	cout<<overlap;
	return 0;
}
