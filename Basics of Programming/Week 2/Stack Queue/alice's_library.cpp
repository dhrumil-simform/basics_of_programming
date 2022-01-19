//https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/katrina-and-library-c2ed51f3/

#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	stack<int> index;
	for(int i=0; i<s.size(); i++){
		if(s[i]=='/'){
			index.push(i);
		}
		else if(s[i]=='\\'){
			int t = index.top();
			reverse(s.begin()+t+1, s.begin()+i);
			index.pop();
		}
	}
	for(int i=0; i<s.size();i++){
		if(s[i]=='/' || s[i]=='\\'){
			s.erase(s.begin()+i);
		}
	}
	cout<<s;
	return 0;
}