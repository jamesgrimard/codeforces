// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string a, b, c; cin >> a >> b >> c;

	bool ans = 0; char S;

	if (a == b && a != c) {
		if (c == "rock" && a == "scissors" || c == "scissors" && a == "paper" || c == "paper" && a == "rock") {
			ans=1;	S = 'S';
		}
	}

	if (a == c && a != b) {
		if (b == "rock" && a == "scissors" || b == "scissors" && a == "paper" || b == "paper" && a == "rock") {
			ans=1; S = 'M';
		}
	}

	if (b == c && a != b) {
		if (a == "rock" && b == "scissors" || a == "scissors" && b == "paper" || a == "paper" && b == "rock") {
			ans=1; S = 'F';
		}
	}

	(ans == 1) ? cout << S : cout << "?";

	return 0;
}

