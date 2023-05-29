// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 	int a[200010];
 	int t;
	cin>>t;
	while(t--){
		int n,j=1;
		long long sum=0;
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			while(a[i]<j) j--;
			if(a[i]>=j) sum+=j,j++;
		}
		cout<<sum<<endl;
	}
	return 0;

	return 0;	
}