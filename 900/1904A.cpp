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
		int A,B; cin >> A >> B;
		int x1,y1,x2,y2; cin >> x1 >> y1 >> x2 >> y2;
		int b[2] = {1,-1};
		vector<pair<int,int>> v;
		for (int i=0;i<2;i++) {
			for (int j=0;j<2;j++) {
				pair<int,int> tmp;
				tmp.first = b[i]*A;
				tmp.second = b[j]*B;
				v.push_back(tmp);
				swap(tmp.first,tmp.second);
				v.push_back(tmp);
			}
		}
		int cnt = 0;
		for (int i=0;i<8;i++) {
			for (int j=0;j<8;j++) {
				int X = x1 + v[i].first + v[j].first;
				int Y = y1 + v[i].second + v[j].second;
				if (X == x2 && Y == y2) cnt++;
			}
		}
		if (cnt == 2 || cnt == 8) {
			cout << 2 << '\n';
		} else if (cnt == 1 || cnt == 4) {
			cout << 1 << '\n';
		} else {
			cout << 0 << '\n';
		}
		
	}				  			                                                                  	


                    
  return 0;
}