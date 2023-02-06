// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();


	int c, v0,v1,a,l; cin >> c >>v0>>v1>>a>>l;


	int d = 0;

	while (c>0){
		c -= min(a*d+v0,v1);
		if (d!=0) c+=l;
		d++;
	}

	cout << d;


	return 0;
}

