//https://www.hackerearth.com/practice/basic-programming/recursion/recursion-and-backtracking/practice-problems/algorithm/k-excess-1-be669e5a/

#define ll unsigned long long
#include <iostream>
using namespace std;

ll sum(ll n, ll k){
	if(n<k){
		return n*(n+1)/2;
	}
	else if(n/k==1){
		return ((n*(n+1)/2)-k+1);
	}
	else{
		ll total = n*(n+1)/2;
		ll divisible = n/k;
		ll rem_sum=0;
		rem_sum+=sum(n/k,k);
		ll div_sum=((divisible)*(2*k+(divisible-1)*k))/2;
		ll ans = total-div_sum+rem_sum;
		return ans;
	}
}

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n, k;
		cin>>n>>k;
		ll ans=sum(n,k);
		cout<<ans<<endl;
	}
	return 0;
}
