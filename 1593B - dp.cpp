// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {

		string s; cin >> s;

		int count = s.size(), count1 = s.size() , add = 0;

		for (int i=s.size()-1;i>=0;i--) {

			int tally = 0;

			if (s[i] == '0') {
				for (int j=i-1;j>=0;j--){
					if (s[j] == '5' || s[j] == '0') {
						if (count1 > (add+tally)) count1 = (add + tally);
						break;
					}
					tally++;
				}

			} else if (s[i] == '5') {
				for (int j=i-1;j>=0;j--){
					if (s[j] == '7' || s[j] == '2') {
						if (count > (add+tally)) count = (add + tally);
						break;
					}
					tally++;
				}
			}
			add++;
		}

		cout << min(count,count1) << '\n';
	}
	return 0;
}
