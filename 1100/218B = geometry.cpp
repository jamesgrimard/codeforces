// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int a,b,c;
	cin>>a>>b>>c;
	int g=a*c/b;
	g=sqrt(g);
	cout<<4*g+4*(a/g)+4*(c/g);


	return 0;
}
