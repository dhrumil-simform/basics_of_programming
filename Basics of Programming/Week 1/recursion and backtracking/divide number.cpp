//https://www.hackerearth.com/practice/basic-programming/recursion/recursion-and-backtracking/practice-problems/algorithm/divide-number-a410603f/

#include<iostream>
#include<vector>
using namespace std;

long long int solve(long long int N)
{
	long long int ans = -1;
	vector<long long int> factors;
	factors.clear();
	long long int denominators[15] = {2,3,4,5,6,7,8,9,10,12,15,18,20,24,42};
	if(N % 2)
		return ans;
	for(int i = 0 ; i < 15 ; i ++)
	{
		if(N % denominators[i] == 0)
		factors.push_back(N/denominators[i]);
	}
	for(int a = 0 ; a < factors.size(); a++)
	{
		for(int b = 0 ; b < factors.size(); b++)
		{
			for(int c = 0 ; c < factors.size(); c++)
			{
				for(int d = 0 ; d < factors.size(); d++)
				{
					if(factors[a] + factors[b] + factors[c] + factors[d] == N)
					{
					if(factors[a] * factors[b] * factors[c] * factors[d] > ans)
					ans = factors[a] * factors[b] * factors[c] * factors[d];
					}
				}
			}
		}
	}
	return ans;
}
int main(){
	int t;
	cin>>t;
	long long int n;
	while(t--){
		cin>>n;
		cout<<solve(n)<<endl;
	}
	return 0;
}
