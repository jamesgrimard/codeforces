// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt ; cin >> tt;
	while (tt--) {
		long long Hc , Dc; cin >> Hc >> Dc;
		long long Hm , Dm; cin >> Hm >> Dm;
		long long k,d,h; cin >> k >> d >> h;
		long long K = k;
		long long Am = Hc / Dm , Ac = Hm / Dc;
		if (Hc % Dm != 0) Am++;
		if (Hm % Dc != 0) Ac++;
		bool ans = 0;
		while (k>=0) {
			Am = (Hc + (h*k)) / Dm;
			if ((Hc + (h*k)) % Dm != 0) Am++;
			Ac = Hm / (Dc + (d*(K-k)));
			if (Hm % (Dc + (d*(K-k))) != 0) Ac++;
			if (Am >= Ac) {
				ans = 1;
				break;
			}
			k--;
		}
		(ans == 0) ? cout << "NO\n" : cout << "YES\n";
	}

	return 0;
}

