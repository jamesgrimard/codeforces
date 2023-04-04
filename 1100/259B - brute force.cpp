// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 	
 	vector<vector<int>> a(3,vector<int>(3));

 	for (int i=0;i<3;i++) for (int j=0;j<3;j++) cin >> a[i][j];
 	
 	int d1 = a[0][1]+a[0][2] , d2 = a[1][0]+a[1][2] , d3 = a[2][0]+a[2][1];
 	int A1 = 0 , A2 = d1-d2 , A3 = d1-d3;
 	for (int i=0;i<=100000;i++){
 		if (d1 + A1 == d2 + A2 && d2 + A2 == d3 + A3 && A1 > 0 && A2 > 0 && A3 > 0 && A1 + A2 + A3 == d1 + A1) break;
 		A1++; 
 		A2++;
 		A3++;
 	}

 	for (int i=0;i<3;i++) {
 		for (int j=0;j<3;j++) {
 			if (i == j) {
 				if (i == 0) cout << A1;
 				if (i == 1) cout << A2;
 				if (i == 2) cout << A3;
 			} else {
 				cout << a[i][j];
 			}
 			cout << " ";
 		}
 		cout << '\n';
 	}

	return 0;
}
