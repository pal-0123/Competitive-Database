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
	
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    // char s[n];
    // for(int i=0;i<n;i++){
    // 	cin >> s[i];
    // }
    // cout << s << endl;
    int pos=0;
    string s2;
    int temp=k;
    while(k){
    	// cout << s[pos];
    	if(pos==0){
    		if(s[pos]!='1'){
    			// s[pos]='1';
                s2+='1';
                // cout <<"a ";
                k--;
            }
            else{
                s2+=s[pos];
            }

    	}
    	else{
    		if(s[pos]!='0'){
    			// s[pos]='0';
                // cout << s;
                s2+='0';
                k--;
    		}

            else{
                s2+=s[pos];
            }
    	}
    	pos++;
    	if(pos==n){
            // cout << pos;
    		break;
    	}
    }
    if(pos!=n){
        while(pos!=n){
            s2+=s[pos];
            pos++;
        }
    }
    if(n==1 && temp>0){
        cout << "0";
    }
    else{
        cout << s2;    
    }
    



	return 0;
}