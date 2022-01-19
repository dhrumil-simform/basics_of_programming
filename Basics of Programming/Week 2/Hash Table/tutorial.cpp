#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	map<int, string> reg;
	for(int i=0;i<n;i++){
		int rollno;
		string name;
		cin>>rollno>>name;
		reg[rollno]=name;
	}
	int q;
	cin>>q;
	while(q--){
		int rollno;
		cin>>rollno;
		cout<<reg[rollno]<<endl;
	}
	return 0;
}