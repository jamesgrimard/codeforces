// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , q; cin >> n >> q;
	string s; cin >> s;
	int cnt = 0;
	s = "xx" + s + "xx";
	for (int j=2;j<n;j++) {
		if (s.substr(j,3) == "abc") cnt++;
	}
	for (int i=0;i<q;i++) {
		int x; cin >> x;
		char c; cin >> c;;
		char p = s[x+2-1];
		bool f = 0;
		string S1 = s.substr(x+2-3,3) , S2 = s.substr(x+2-2,3) , S3 = s.substr(x+2-1,3);
		if (S1 == "abc" || S2 == "abc" || S3 == "abc") f = 1;
		s[x+2-1] = c;	
		string s1 = s.substr(x+2-3,3) , s2 = s.substr(x+2-2,3) , s3 = s.substr(x+2-1,3);
		if ((s1 == "abc" || s2 == "abc" || s3 == "abc") && f == 0) cnt++;
		if ((s1 != "abc" && s2 != "abc" && s3 != "abc") && f == 1) cnt--;
		cout << cnt << '\n';
	}


	return 0;
}

