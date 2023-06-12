// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	    int T;cin>>T;
    while(T--){
    	int n;cin>>n;
    	int o=1,e=2,onm=0,evn=0,a1=0,a2=0;
    	for(int i=1;i<=n;i++){
    		int a;cin>>a;
    		if(a&1){
    			a1+=abs(o-i);
    			a2+=abs(e-i);
    			onm++;o+=2;e+=2;
    		}else evn++;
    	}
    	if(onm==evn+1)cout<<a1<<endl;
    	else if(onm+1==evn)cout<<a2<<endl;
    	else if(onm==evn)cout<<min(a1,a2)<<endl;
    	else cout<<-1<<endl;
    }
    return 0;

	return 0;	
}