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
  		int xr=0,sum=0;
  		cin >> n;
  		int a[n];
  		for(int i=0;i<n;i++){
  			cin >> a[i];
  			xr=xr^a[i];
  			sum+=a[i];
  		}
  		if(sum==2*xr){
  			cout << "0\n";
  			cout << endl;
  		}
  		else if(sum<2*xr){
  			if((2*xr-sum)%2==0){
  				cout << 2 << endl;
  				cout << (2*xr-sum)/2 << " " << (2*xr-sum)/2 << endl;
  			}
  			else{
  				// if(xr%2==0){
  				// 	cout << 3 << endl;
  				// 	cout << (2*xr-sum+1)/2 << " " << (2*xr-sum+1)/2 << " " << 1 << endl;
   			// 	}
   				// else{
   					if((2*xr-sum)==1){
   						cout << 3 << endl;
   						cout << 1 << " " << sum+xr << " " << xr-1 << endl;
   					}
   					else{
   						cout << 3 << endl;
   						cout << (2*xr-sum-2)/2 << " " << (2*xr-sum-2)/2 << " " << 1 << endl;
   					}
   				// }
  			}
  		}
  		else{
  			if(sum%2==0){
  				cout << 2 << endl;
  				cout << sum+xr << " " << xr << endl;
  			}
  			else{
  				cout << 3 << endl;
  				// if((sum+xr)%2==0){
  					cout << 1 << " " << sum+xr << " " << xr-1 << endl;
  				// }
  				// else{
  				// 	cout << 1 << " " << sum+xr-1 << " " << xr << endl;
  				// }
  				
  			}
  		}

  	}

	return 0;
}