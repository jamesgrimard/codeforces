// github.com/jamesgrimard/codeforces

// ----------------------------------------------------------------------------
// PROBLEM
// ----------------------------------------------------------------------------

/*
B. Fancy Coins
time limit per test
2 seconds
memory limit per test
256 megabytes
input
standard input
output
standard output

Monocarp is going to make a purchase with cost of exactly m burles.

He has two types of coins, in the following quantities:

    coins worth 1 burle: a_1 regular coins and infinitely many fancy coins;
    coins worth k burles: a_k regular coins and infinitely many fancy coins. 

Monocarp wants to make his purchase in such a way that there's no change — the total worth of provided coins is exactly m. He can use both regular and fancy coins. However, he wants to spend as little fancy coins as possible.

What's the smallest total number of fancy coins he can use to make a purchase?
Input

The first line contains a single integer t (1 \le t \le 3 \cdot 10^4) — the number of testcases.

The only line of each testcase contains four integers m, k, a_1 and a_k (1 \le m \le 10^8; 2 \le k \le 10^8; 0 \le a_1, a_k \le 10^8) — the cost of the purchase, the worth of the second type of coin and the amounts of regular coins of both types, respectively.
Output

For each testcase, print a single integer — the smallest total number of fancy coins Monocarp can use to make a purchase.
Example
Input
Copy

4
11 3 0 0
11 3 20 20
11 3 6 1
100000000 2 0 0

Output
Copy

5
0
1
50000000

Note

In the first testcase, there are no regular coins of either type. Monocarp can use 2 fancy coins worth 1 burle and 3 fancy coins worth 3 (since k=3) burles to get 11 total burles with 5 total fancy coins.

In the second testcase, Monocarp has a lot of regular coins of both types. He can use 11 regular coins worth 1 burle, for example. Notice that Monocarp doesn't have to minimize the total number of used coins. That way he uses 0 fancy coins.

In the third testcase, Monocarp can use 5 regular coins worth 1 burle and 1 regular coin worth 3 burles. That will get him to 8 total burles when he needs 11. So, 1 fancy coin worth 3 burles is enough.
*/

// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------

#include <bits/stdc++.h>

using namespace std;

void solve() {

int tt; cin >> tt;
  while (tt--) {
    long long m , VCoin2 , Coin1cnt , Coin2cnt; cin >> m >> VCoin2 >> Coin1cnt >> Coin2cnt;
    
    long long cost = 0; 
    if (m % VCoin2 > Coin1cnt) cost += (m % VCoin2 - Coin1cnt);
    Coin1cnt += cost;
    long long tmp = m % VCoin2;
    m -= tmp;
    Coin1cnt -= tmp;
    long long k = min(m / VCoin2 , Coin2cnt);
    m -= VCoin2 * k;
    long long p = Coin1cnt / VCoin2 * VCoin2;
    m = max(m - p , 0LL);
    Coin1cnt -= p;
    cout << m / VCoin2 + cost << '\n';

  }
}

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();

  solve();
 	
  return 0;
}

// ----------------------------------------------------------------------------
// TUTORIAL
// ----------------------------------------------------------------------------

/*
1860B - Fancy Coins

There are two ways to approach this problem: a mathematical way and an algorithmic way.

Approach 1

Let's start by looking at the possible ways to represent m burles with our coins. For example, we could try to use as many coins of value k as possible: then, the number of coins of value k will be \lfloor\frac{m}{k}\rfloor, and the number of coins of value 1 will be m \bmod k.

Now suppose it's not optimal to use that many coins of value k; what if it's better to use more coins of value 1 and fewer coins of value k? Well, we can still start with using \lfloor\frac{m}{k}\rfloor coins of value k and m \bmod k coins of value 1, and then try to replace one coin of value k with k coins of value 1 several times (maybe zero).

How many times should we do this, and when should we stop to get an optimal solution? Well, firstly, let's make sure that we have already taken as many regular coins as possible. Then, if we have at least k leftover coins of value 1 which are regular (not fancy), and we have taken at least one fancy coin of value k, it's better to replace that coin. It's easy to see that there's no need for any replacements if that's not the case: if we don't have k regular coins which are currently unused, then at least one of the replacement coins will be fancy; and if the coin of value k we want to replace is not fancy, why replacing it at all?

So, we could write a while-loop that keeps track how many coins of which types we have taken, and replaces one fancy coin of value k with k regular coins of value 1 until it's impossible. Unfortunately, this is too slow. But instead of running this loop, we can calculate the number of times we make that replacement in O(1): it is the minimum of the number of regular coins of value 1 we aren't using, divided by k, and the number of fancy coins of value k we are using.

So, the outline of the solution is the following:

    start by taking as many coins of value k as possible, and calculate how many coins of which value we have taken;
    calculate how many regular and fancy coins of both types we have taken;
    calculate how many "replacements" (discard one fancy coin of value k, add k regular coins of value 1) we can make. 

Approach 2

The second approach also starts with analyzing how many coins of value 1 and how many coins of value k we can take. The minimum number of coins of value k we can take is 0, and the maximum number of such coins is \lfloor\frac{m}{k}\rfloor.

Let f(x) denote the number of fancy coins we use, if we take exactly x coins of value k. This function can easily be calculated because we know how many coins of both types we take, if x is fixed. We need to find the minimum of this function on [0, \lfloor\frac{m}{k}\rfloor].

How does f(x + 1) - f(x) behave? The meaning of going from f(x) to f(x + 1) is just replacing k coins of value 1 with one coin of value k. When we increase x, obviously, we should try to discard fancy coins of value 1 first, then regular coins of value 1 (and the number of fancy coins we will discard will never increase when we increase x). Similarly, we should try to take regular coins of value k first, then fancy ones (and the number of fancy coins we take will never decrease when we increase x). So, the value of f(x+1) - f(x) does not decrease when x increases.

All of this means that the minimum value of f(x) can be found using ternary search.
*/
