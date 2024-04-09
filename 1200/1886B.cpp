//github.com/jamesgrimard/codeforces
  
#include <bits/stdc++.h>
       
using namespace std;

int mod(int a , int b) {
	return ((a % b) + b) % b;
}

const int MOD = 1e9 + 7;

double c2(double x , double y) {
  x = abs(x) , y = abs(y);
  return sqrt(x * x + y * y);
}

void solve() {
     
  int tt; cin >> tt;
  while (tt--) {
    double x , y ; cin >> x >> y;
    double l1x , l1y; cin >> l1x >> l1y;
    double l2x , l2y; cin >> l2x >> l2y;

    double L10 = c2(l1x,l1y);
    double L20 = c2(l2x,l2y);

    double L1P = c2(l1x-x,l1y-y);
    double L2P = c2(l2x-x,l2y-y);

    double P = c2(x,y);

    double mn_L1_L2 = c2(l1x-l2x,l1y-l2y);
                                                                
    double mn_human = min(L10,L20);
    double mn_dest = min(L1P,L2P);


    double OP1 = min(max(L10,L1P) , max(L20,L2P));
    
   // double OP2 = mn_L1_L2 / 2.0 + max(0.0,mn_human-mn_L1_L2/2.0) + max(0.0,mn_dest-max(0.0,mn_human-mn_L1_L2/2.0));

    double OandP_reached = mn_dest + max(0.0,mn_human-mn_dest);

    double remainder = max(0.0, mn_L1_L2 - 2 * OandP_reached) / 2.0;

    double OP2 = OandP_reached + remainder;
   
    cout << setprecision(12) << min(OP1 , OP2) << '\n';
    
  }


}		

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();


	solve();
                                                     

  return 0;
}

                                                             
 
