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
    	int n,m;
    	cin >> n >> m;
    	int max,min;
    	max=((n+1)*n)/2;
    	min=n-1;
    	if(m>max || m<min){
    		cout << "-1\n";
    	}
    	else{
    		if (n==1){
    			if(m==0){
    				cout << "0\n";
    			}
    			else{
    				cout << "1\n";
    			}
    		}
    		else if (n==2){
    			if(m==1){
    				cout << "1\n";
    			}
    			else{
    				cout << "2\n";
    			}
    		}
    		else if(m<=n+1){
    			cout << "2\n";
    		}
    		else if (m<=2*n){
    			cout << "3\n";
    		}
    		else{
    			int ans=3;
    			m-=2*n;
    			ans+= 2*(m/n);
    			ans+= ((m%n+(n/2-1))/(n/2));
    			cout << ans << endl;
    		}
    	}
    }
	
	return 0;
}