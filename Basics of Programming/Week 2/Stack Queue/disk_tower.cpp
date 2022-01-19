//https://www.hackerearth.com/practice/data-structures/queues/basics-of-queues/practice-problems/algorithm/disk-tower-b7cc7a50/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int d[n];
    for(int i=0; i<n; i++){
        cin>>d[i];
    }
    priority_queue<int> tower;
    int max=n;
    for(int i=0; i<n; i++){
        tower.push(d[i]);
        while(tower.top()==max){
            cout<<tower.top()<<" ";
            max--;
            tower.pop();
        }
        cout<<endl;
    }
    return 0;
}