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
 		int a[n];
 		for(int i=0;i<n;i++){
 			cin >> a[i];
 		}
 		int flg=0;
 		for(int i=0;i<n;i++){
 			if(a[i]<i){
 				flg=1;
 				break;
 			}
 		}
 		if(flg==1){
 			for(int i=0;i<n;i++){
 				if(a[i]<n-i-1){
 					flg=2;
 					break;
 				}
 			}
 			if(flg==2){
 				int ans=0,br=-1;
 				for(int i=1;i<n;i++){
 					if(br==-1){
 						if(a[i]<a[i-1]){
 							if(a[i]<n-1-i){
 								if(a[i]<i){
 									ans=-1;
 									break;	
 								}
 							}
 							else{
 								if(a[i]<i){
 									br=1;	
 								}
 								
 							}
 						}
 						else if(a[i]==a[i-1]){
 							if(a[i]-1<n-1-i){
 								if(a[i]<i){
 									ans=-1;
 									break;	
 								}
 							}
 							else{
 								if(a[i]<i){
 									br=1;
 								}
 							}	
 						}
 					}
 					else{
 						if(a[i]<n-1-i){
 							ans=-1;
 							break;
 						}
 					}
 				}
 				if(ans==-1){
 					cout << "NO\n";
 				}
 				else{
 					cout << "YES\n";
 				}
 			}	
 			else{
 				cout << "YES\n";
 			}
 		}
 		else{
 			cout << "YES\n";
 		}
 	}

	return 0;
}