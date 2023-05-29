// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int a,b,c,d,e,f;
	cin>>a>>b>>c>>d>>e>>f;
	cout<<3<<"\n"<<c+e-a<<" "<<d+f-b<<"\n"<<a+c-e<<" "<<b+d-f<<"\n"<<a+e-c<<" "<<b+f-d<<"\n";
	
	return 0;	
}

		