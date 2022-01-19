//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/bracket-sequence-1-40eab940/

#include <iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.length();
    int shifts = 0;
    for(int i=0; i<n; i++){
        int count=0;
        if(s[i]=='('){
            for(int j=i; j<i+n; j++){
                if(s[j%n]=='('){
                    count++;
                }
                else{
                    count--;
                }
                if(count<0){
                    break;
                }
            }
            if(count==0){
                shifts++;
            }
        }
    }
    cout<<shifts;
    return 0;
}