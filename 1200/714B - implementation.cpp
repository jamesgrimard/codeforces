// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;
 
    sort(a.begin(), a.end());
    auto e = unique(a.begin(), a.end());
    a.erase(e, a.end());
 
    bool ok = true;
    if (a.size() > 3) ok = false;
    else if (a.size() == 3){
        if (a[1] - a[0] != a[2] - a[1]) ok = false;
    }
 
    cout << (ok ? "YES" : "NO");

	return 0;	
}

		