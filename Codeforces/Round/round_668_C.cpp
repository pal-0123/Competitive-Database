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
    	int n,k;
    	cin >> n >> k;
    	string s;
    	cin >> s;
    	for(int i=k;i<n;i++){
    		if(s[i]=='?'){
    			s[i]=s[i-k];
    		}
    	}
    	for(int i=n-k-1;i>=0;i--){
    		if(s[i]=='?'){
    			s[i]=s[i+k];
    		}	
    	}
    	int flg=1;
    	for(int i=k;i<n;i++){
    		if(s[i]!=s[i-k]){
    			flg=0;
    			break;
    		}
    	}
    	

    	if(flg==1){
    		int cnt0=0,cnt1=0,cnt=0;
    		for(int i=0;i<k;i++){
    			if(s[i]=='0'){
    				cnt0++;
    			}
    			else if(s[i]=='1'){
    				cnt1++;
    			}
    			else{
    				cnt++;
    			}
    		}
    		if(cnt0==cnt1 && cnt%2==0){
    			cout << "YES\n";	
    		}
    		else if(cnt>=(abs(cnt0-cnt1)) && (cnt-abs(cnt0-cnt1))%2==0){
    			cout << "YES\n";
    		}
    		else{
    			cout << "NO\n";
    		}
    		
    	}
    	else{
    		cout << "NO\n";
    	}
    }

	return 0;
}