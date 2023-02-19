// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int a, b; cin >> a >> b; 
	string s = to_string(a) , S = to_string(b) , SSS = to_string(a+b);

	for (int i=0;i<size(s);i++) if (s[i] == '0') {s.replace(i,1,"");i--;}
	for (int i=0;i<size(S);i++) if (S[i] == '0') {S.replace(i,1,"");i--;}

	int A = stoi(s) , B = stoi(S);
	string SS = to_string(A + B);
	
	for (int i=0;i<size(SSS);i++) if (SSS[i] == '0') {SSS.replace(i,1,"");i--;}

	(SS == SSS) ? cout << "YES" : cout << "NO";

	
	return 0;
}

