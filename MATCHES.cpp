#include <bits/stdc++.h>
using namespace std;
#define int long long int





signed main(){

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
	
    int t;
    cin >> t;
    while(t--){
    	int a,b;
    	cin >> a >> b;
    	int n=a+b;
    	int ans=0;
    	while(n>0){
    		int cur=n%10;
    		if(cur==0){
    			ans+=6;
    		}
    		else if(cur==1){
    			ans+=2;
    		}
    		else if(cur==2){
    			ans+=5;
    		}
    		else if(cur==3){
    			ans+=5;
    		}
    		else if(cur==4){
    			ans+=4;
    		}
    		else if(cur==5){
    			ans+=5;
    		}
    		else if(cur==6){
    			ans+=6;
    		}
    		else if(cur==7){
    			ans+=3;
    		}
    		else if(cur==8){
    			ans+=7;
    		}
    		else if(cur==9){
    			ans+=6;
    		}
    		n/=10;
    	}
    	cout << ans <<endl;
    }

	return 0;
}