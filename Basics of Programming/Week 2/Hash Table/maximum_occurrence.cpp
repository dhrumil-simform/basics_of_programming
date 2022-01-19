//https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/maximum-occurrence-9/

#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
    getline(cin, s);
    map<char, int> m;
    for(int i = 0; i<s.length(); i++){
        m[s[i]]++;
    }

    int freq=0;
    char max;
    for(auto i : m){
        if(freq < i.second){
            freq = i.second;
            max = i.first;
        }
    }
    cout<<max<<" "<<freq<<endl;

    return 0;

}