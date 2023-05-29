// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	long long n, h; cin>>n>>h;
	for(int i=1;i<=n-1;i++)
	{
		cout<<fixed<<setprecision(12)<<sqrt((long double)(i)/(long double)(n))*(long double)(h);
		if(i<n-1) cout<<' ';
	}	
	cout<<'\n';

	return 0;	
}

		