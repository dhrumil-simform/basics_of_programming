//https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/bob-and-string-easy/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        string s1, s2;
        cin>>s1>>s2;
        int a[26] = {0};
        int b[26] = {0};
        for (int i=0; i<s1.length(); i++){
            a[s1[i]-'a']++;
        }
        for(int i = 0; i<s2.length(); i++){
            b[s2[i]-'a']++;
        }
        int count = 0;
        for (int i=0; i<26; i++)
        {
            while(a[i]!=b[i])
            {
                if(a[i]<b[i])
                {
                    a[i]++;
                    count++;
                }
                else
                {
                    b[i]++;
                    count++;
                }
            }
        }
        cout<<count<<endl;
	}
}