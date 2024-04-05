//github.com/jamesgrimard/codeforces
  
#include <bits/stdc++.h>
       
using namespace std;

int mod(int a , int b) {
	return ((a % b) + b) % b;
}

const int MOD = 1e9 + 7;

void dfs(int n ,int start, int end, int person, int ans[], pair<int,char> p[] ,vector<vector<int>> *r) {
   if ((*r)[start][person]) return;
   (*r)[start][person] = 1;
	
  if (start > end) {
  	ans[person] = 1;
  	return;
  }

	int P = (person + p[start].first) % n;
	int PP = (person - p[start].first + n) % n;
	if (P == 0) P = n;
	if (PP == 0) PP = n;
	
	if (p[start].second != '1') dfs(n,start+1 , end , P, ans,p,r);
	if (p[start].second != '0') dfs(n,start+1, end ,  PP ,ans,p,r);
  
	
	
}

            
void solve() {                 
	
	int tt; cin >> tt;
	while (tt--) {
		int n , m , x; cin >> n >> m >> x;
		int ans[n+1] = {};
		vector<vector<int>> r(m+1,vector<int> (n+1,0));
		pair<int,char> p[m];
		for (int i=0;i<m;i++) cin >> p[i].first >> p[i].second;

	 	dfs(n,0,m-1,x,ans,p,&r);

	 	int cnt = 0;
	 	for (int i=1;i<=n;i++) cnt += ans[i];
	 	cout << cnt << '\n';
	 	for (int i=1;i<=n;i++) if (ans[i]) cout << i << " ";
	 	cout << '\n';
	}
		



}		

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();


	solve();
                                                     

  return 0;
}

                                                             
 
