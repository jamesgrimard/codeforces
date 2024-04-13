// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// ----------------------------------------------------------------------------
// PROBLEM
// ----------------------------------------------------------------------------
/*
A. Ice Skating
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Bajtek is learning to skate on ice. He's a beginner, so his only mode of transportation is pushing off from a snow drift to the north, east, south or west and sliding until he lands in another snow drift. He has noticed that in this way it's impossible to get from some snow drifts to some other by any sequence of moves. He now wants to heap up some additional snow drifts, so that he can get from any snow drift to any other one. He asked you to find the minimal number of snow drifts that need to be created.

We assume that Bajtek can only heap up snow drifts at integer coordinates.

Input
The first line of input contains a single integer n (1 ≤ n ≤ 100) — the number of snow drifts. Each of the following n lines contains two integers xi and yi (1 ≤ xi, yi ≤ 1000) — the coordinates of the i-th snow drift.

Note that the north direction coinсides with the direction of Oy axis, so the east direction coinсides with the direction of the Ox axis. All snow drift's locations are distinct.

Output
Output the minimal number of snow drifts that need to be created in order for Bajtek to be able to reach any snow drift from any other one.

Examples
inputCopy
2
2 1
1 2
outputCopy
1
inputCopy
2
2 1
4 1
outputCopy
0

*/
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>

using namespace std;

void dfs_y(int y);
void dfs_x(int x);

unordered_map<int,vector<int>> m_y,m_x;
bool visited_x[1001] = {} , visited_y[1001] = {};
set<int> s;

void dfs_y(int y) {
  if (visited_y[y]) return;
  visited_y[y] = 1;
  for (auto &x : m_y[y]) dfs_x(x);
}

void dfs_x(int x) {
  if (visited_x[x]) return;
  visited_x[x] = 1;
  for (auto &y : m_x[x]) dfs_y(y);
}



void solve() {

  int n , first_y; cin >> n;
  for (int i=0;i<n;i++) {
    int y,x; cin >> y >> x;
    if (!i) first_y = y;
    s.emplace(y);
    m_y[y].push_back(x);
    m_x[x].push_back(y);
  }

  dfs_y(first_y);

  int cnt = 0;

  for (auto &y : s) {
    if (!visited_y[y]) {
      cnt++; 
      dfs_y(y);
    }
  }

  cout << cnt << '\n';
 
  
}

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();

  solve();
  
  return 0;
}
// ----------------------------------------------------------------------------
// NOTES
// ----------------------------------------------------------------------------
/*
A. Ice Skating
Notice that the existence of a snow drift at the point (x, y) implies that "if I'm on the horizontal line at y then I am certainly able to get to the vertical line at x, and vice versa". Thus, the snow drifts are the edges of a bipartite graph between x- and y- coordinates. The number of snow drifts that need to be added to make this (as well as the original) graph connected is the number of its connected components reduced by one.
*/