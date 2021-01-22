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
		int x;
		cin >> x;
		string w="";
		int n=s.length();
		for(int i=0;i<n;i++){
			w+=".";
		}
		for(int i=0;i<n;i++){
			if(s[i]=='0'){
				if(i-x>=0){
					w[i-x]='0';
				}
				if(i+x<n){
					w[i+x]='0';
				}
			}
		}
		int flg=0;
		for(int i=0;i<n;i++){
			if(s[i]=='1'){
				int c1=-1,c2=-1;
				if(i-x>=0){
					c1=i-x;
				}
				if(i+x<n){
					c2=i+x;
				}
				if(c1!=-1){
					if(w[c1]=='0'){
						c1=-2;
					}
				}
				if(c2!=-1){
					if(w[c2]=='0'){
						c2=-2;
					}
				}
				if(c1<0 && c2<0){
					flg=1;
					break;
				}
			}
		}
		if(flg==1){
			cout << "-1" << endl;
		}
		else{
			for(int i=0;i<n;i++){
				if(w[i]=='.'){
					w[i]='1';	
				}
			}
			cout << w << endl;
		}
	}

	return 0;
}