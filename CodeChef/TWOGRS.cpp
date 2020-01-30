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
    	int a,b,c;
    	cin >> a >> b >> c;
    	int sum=a+2*b+3*c;
    	if(sum%2==1){
    		cout << "NO\n";
    	}
    	// else{
    	// 	int sumreq=sum/2;
    	// 	if(a>=sumreq){
    	// 		cout << "YES\n";
    	// 	}
    	// 	else if (2*b==sumreq || (2*b>sumreq && sumreq%2==0)){
    	// 		cout << "YES\n";
    	// 	}
    	// 	else if (3*c==sumreq || (3*c>sumreq && sumreq%3==0)){
    	// 		cout << "YES\n";
    	// 	}
    	// 	else{
    	// 		if(2*b>sumreq && a!=0){
    	// 			cout << "YES\n";
    	// 		}
    	// 		else if(3*c>sumreq && a>=sumreq%3){
    	// 			cout << "YES\n";
    	// 		}
    	// 	}
    	// }
    	else{

    		int a1=a-2*(a/2);
    		int b1=b-2*(b/2);
    		int c1=c-2*(c/2);
    		if(a1==0 && b1==0 && c1==0){
    			cout << "YES\n";
    		}
    		else{
    			//int sumleft=a+2*b+3*c;
    			//cout << a1 << b1 << c1;
    			if(a1==1 && b1==1 && c1==1){
    				cout << "YES\n";
    			}	
    			else if(a1==0){
    				if(a!=0){
    					cout << "YES\n";
    				}
    				else if(b>=3 && c>0){
    					cout << "YES\n";
    				}
    				else{
    					cout << "NO\n";
    				}
    			}
    			else if(a1==1){
    				if(b>0){
    					cout << "YES\n";	
    				}
    				else if(a>=3*c){
    					cout << "YES\n";
    				}
    				else if(a>=3){
    					if((a-3)%2==0){
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
    			else{
    				cout << "NO\n";
    			}

    		}
    		

    	}
    }

	return 0;
}