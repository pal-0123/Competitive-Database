#include <bits/stdc++.h>
using namespace std;
#define int long long int
int m=1000000007;
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
    	int x;
    	cin >> x;
    	string s;
    	cin >> s;
    	int ans=s.length();
    	int right;
    	for(int i=0;i<x;i++){
    		if(s.length()<x){
    			// string sl=s.substr(0,i+1);
    			string sr=s.substr(i+1,s.length()-i-1);
    			// s=sl;
                int val=s[i]-'0';
                // int temp=s.length()-i;
    			for(int j=1;j<val;j++){
    				// s+=sr;
                    for(int l=0;l<sr.length();l++){
                    // for(int l=i+1;l<temp;l++){
                        s+=sr[l];
                        if(s.length()>x){
                            break;
                        }    
                    }
                    if(s.length()>x){
                        break;
                    }
    				
    			}
    		}
    		right=(ans-i-1+m);
    		right=right%m;
    		ans=i+1+((int)s[i]-'0')*right;
    		ans=ans%m;
    	}
    	cout << ans << endl;
    }

	return 0;
}