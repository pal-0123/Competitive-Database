#include <bits/stdc++.h>
using namespace std;
#define int long long int


signed main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif



    int t;
    cin >> t;
    while(t--){
    	string s;
    	cin >> s;
    	int l=s.length();
        int ans,i;
        ans=0;
        for(i=0;i<l;i++){
            if (ans==1 && s[i]=='1'){
                ans=0;
            }
            else if(ans==0 && s[i]=='1'){
                ans=1;
            }
        }

        if (ans==1){
            cout << "WIN\n";
        }
        else{
            cout << "LOSE\n";
        }

    }
	
	return 0;
}