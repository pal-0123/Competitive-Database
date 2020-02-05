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
 		int n;
 		cin >> n;
 		string s;
 		cin >> s;
 		int i;
 		for(i=n-1;i>=0;i--){
 			int cur=(int)s[i]-'0';
 			if(cur%2==1){
 				break;
 			}
 		}
 		if(i==-1){
 			cout << "-1\n";
 			continue;
 		}
 		int j;
 		for(j=i-1;j>=0;j--){
 			int cur=(int)s[j]-'0';
 			if(cur%2==1){
 				break;
 			}	
 		}
 		if(j==-1){
 			cout << "-1\n";
 			continue;	
 		}
 		for(int k=0;k<n;k++){
 			int cur=(int)s[j]-'0';
 			if(cur%2==1){
 				if(k==i || k==j){
 					cout << s[k];
 				}
 			}		
 			else{
 				cout << s[k];
 			}
 		}			
 		cout << endl;
 	}


	return 0;

}