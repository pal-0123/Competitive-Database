#include <bits/stdc++.h>
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif

    int t;
	cin >> t;
    int n;
    while (t--){
    	cin >> n;
    	char s[n];
    	scanf("%s",s);
    	int i;
    	int ans=0;
    	int cons0=0,first1=0;
    	for (i=0;i<n;i++){
    		if (s[i]=='1'){
    			if (ans==0){
    				ans+=cons0/2;
    			}
    			else{
    				ans+=(cons0-1)/2;
    			}
    			cons0=0;

    		}
    		else{
    			cons0++;
    		}
    	}
    	if (ans==0){
    		ans+=(cons0+1)/2;
    	}
    	else{
    		ans+=cons0/2;	
    	}
    	

    	cout << ans << "\n";

    }

	
	return 0;
}