//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

int mod(int a , int b) {
	return ((a % b) + b) % b;
}

const int MOD = 1e9 + 7;
    
void _find(vector<vector<int>>& grid, int y, int x, int& sum) {
	if (grid[y][x] == 0) return;
	sum += grid[y][x];
	grid[y][x] = 0;
  _find(grid,y,x+1,sum);
  _find(grid,y,x-1,sum);
  _find(grid,y+1,x,sum);
  _find(grid,y-1,x,sum);
}
       


void solve() {                 
	int tt; cin >> tt;
	while (tt--) {
		int n , m ; cin >> n >> m;
		vector<vector<int>> a(n+2,vector<int> (m+2,0));
		for (int i=1;i<=n;i++) {  
			for (int j=1;j<=m;j++) {
				cin >> a[i][j];
			}
		}
		int mx = 0;
		for (int i=1;i<=n;i++) {
			for (int j=1;j<=m;j++) {
				int sum = 0;
				_find(a,i,j,sum);									
				mx = max(sum,mx);
			}
		}
		cout << mx << '\n';
	} 


}		

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();


	solve();
                                                     

  return 0;
}
