// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

const char pi[] = "3141592653589793238462643383279";

int mod(int a, int b) { 
  return (a % b + b) % b; 
}

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
                                      
                     
  int tt; cin >> tt;
  while (tt--) {
  	int n; cin >> n;
  	pair<int,int> a[n]; for (int i=0;i<n;i++) cin >> a[i].first;
  	for (int i=0;i<n;i++) cin >> a[i].second;
  	sort(a,a+n, [](const pair<int,int> &a , const pair<int,int> &b) {return a.first < b.first;}); 
  	for (int i=0;i<n;i++) cout << a[i].first << " ";
  	cout << '\n';
  	for (int i=0;i<n;i++) cout << a[i].second << " ";
  	cout << '\n';
  }

 	return 0;
}