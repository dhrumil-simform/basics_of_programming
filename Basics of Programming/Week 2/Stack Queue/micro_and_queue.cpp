//queue problem

#include <iostream>
using namespace std;

int main(){
	int queue[100];
	int front=0, rear=-1;
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		char op;
		int x;
		cin>>op;
		if(op=='E'){
			cin>>x;
			rear+=1;
			queue[rear]=x;
			cout<<rear-front+1<<endl;
		}
		else if(op=='D'){
			if(front>rear){
				cout<<"-1 0"<<endl;
			}
			else{
				cout<<queue[front]<<" "<<rear-front<<endl;
				front++;
			}
		}
	}
	return 0;
}