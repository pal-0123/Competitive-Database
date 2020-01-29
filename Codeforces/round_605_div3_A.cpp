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
	
    int q;
    cin >> q;
    while(q--){
    	int pos[3];
    	cin >> pos[0] >> pos[1] >> pos[2];
    	sort(pos,pos+3);
    	if(pos[0]==pos[1]){
    		if(pos[1]==pos[2]){
    			cout << "0\n";
    		}
    		else{
    			pos[0]+=1;
    			pos[1]+=1;
    			int ans=pos[2]-pos[1];
    			ans+=pos[2]-pos[0];
    			cout << ans << endl;
    		}
    	}
    	else{
    		pos[0]+=1;
    		if(pos[1]!=pos[2]){
    			pos[2]-=1;	
    		}
    		else{
    			if(pos[0]!=pos[1]){
    				// pos[1]-=1;
    				pos[2]-=1;
    			}
    		}
    		int ans=pos[2]-pos[1];
    		ans+=pos[2]-pos[0];
    		ans+=pos[1]-pos[0];
    		cout << ans << endl;
    	}
    }

	return 0;
}