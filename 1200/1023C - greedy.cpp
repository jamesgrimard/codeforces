// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k; cin >> n >> k;
	string s; cin >> s;
	int cnt = 0 , cnt1 = 0;
	for (int i=0;i<n;i++) {
		if (s[i] == '(' && cnt >= k/2) continue;
		if (s[i] == ')' && cnt1 == cnt) continue;
		cout << s[i];
		(s[i] == '(') ? cnt++ : cnt1++;
		if (cnt+cnt1 == k) break;
	}

	return 0;	
}