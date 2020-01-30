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
  		int totalsum=0;
  		for(int i=0;i<n;i++){
  			cin >> a[i];
  			totalsum+=a[i];
  		}

  		int suml[n]={0};
  		suml[0]=a[0];
  		int flg=0;
  		// map<int,vector<int> > posl,posr;
  		// if(suml[0]<0){
  		// 	flg=1;
  		// }
  		// posl[suml[0]].push_back(0);
  		for(int i=1;i<n;i++){
  			suml[i]=suml[i-1]+a[i];
  			// posl[suml[i]].push_back(i);
  			// if(suml[i]<0){
  			// 	flg=1;
  			// }
  		}
  		int sumr[n]={0};
  		sumr[n-1]=a[n-1];
  		// if(sumr[n-1]<0){
  		// 	flg=1;
  		// }
  		// posr[sumr[n-1]].push_back(n-1);
  		for(int i=n-2;i>=0;i--){
  			sumr[i]=sumr[i+1]+a[i];
  			// cout << sumr[i] << << endl;
  			// if(sumr[i]<0){
  			// 	flg=1;
  			// }
  			// posl[sumr[i]].push_back(i);
  		}
  		for(int i=0;i<n;i++){
  			if(sumr[i]>=totalsum && i!=0){
  				flg=1;
  			}
  			if(suml[i]>=totalsum && i!=n-1){
  				flg=1;
  			}
  		}


  		if(flg==1){
  			cout << "NO\n";
  			continue;
  		}

  		cout << "YES\n";


  	}

	return 0;
}