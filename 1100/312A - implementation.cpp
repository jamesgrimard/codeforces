// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int n; cin >> n;
	cin.ignore();
	while (n--) {
		string s;
		getline(cin,s);
		if (s.size() < 5) {
			cout << "OMG>.< I don't know!";
		} else if (s.substr(0,5) == "miao." && s.substr(s.size()-5,5) != "lala.") {
			cout << "Rainbow's";
		} else if (s.substr(0,5) == "miao." && s.substr(s.size()-5,5) == "lala.") {
			cout << "OMG>.< I don't know!";
		} else if (s.substr(0,5) != "miao." && s.substr(s.size()-5,5) != "lala.") {
			cout << "OMG>.< I don't know!";
		} else {
			cout << "Freda's";
		}
		cout << '\n';
	}

	return 0;
}
