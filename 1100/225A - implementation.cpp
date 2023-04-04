// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	int top;
    cin >> top;
    bool valid = true;
    while (n--)
    {
        int left, right;
        cin >> left >> right;
        if (valid && (left == top || right == top || left == 7 - top || right == 7 - top))
            valid = false;
    }
 
    valid ? cout << "YES" : cout << "NO";


	return 0;
}
