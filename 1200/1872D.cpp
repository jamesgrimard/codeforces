//github.com/jamesgrimard/codeforces
  
#include <bits/stdc++.h>
       
using namespace std;

int mod(int a , int b) {
	return ((a % b) + b) % b;
}

const int MOD = 1e9 + 7;

long long _gcd(long long a, long long b) {
  if ( a % b == 0) return b;
  return _gcd(b,a%b);
}


void solve() {

  int tt; cin >> tt;
  while (tt--) {
    long long n,x,y; cin >> n >> x >> y;

    long long mx = n / x , my = n / y;
    long long lcm = x * y / _gcd(x,y);
    long long crossover = n / lcm;

    mx -= crossover , my -= crossover;

    cout << (n - mx + 1LL + n) * mx / 2LL - (1LL + my) * my / 2LL << '\n';
  






    


  }
}		

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();


	solve();
                                                     

  return 0;
}

                                                             
 
