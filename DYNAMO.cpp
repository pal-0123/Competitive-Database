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
  		int n,a;
  		cin >> n >> a;
  		int s,n10;
  		s=1;
  		for(int i=0;i<n;i++){
  			s*=10;
  		}
  		n10=s;
  		s*=2;
  		s+=a;
  		cout << s <<endl;
  		cout.flush();
  		int temp;
  		cin >> temp;
  		cout << n10-temp << endl;

  		cin >> temp;
  		cout << n10-temp << endl;
  		
  		int res;
  		cin >> res;
  		if(res!=1){
  			break;
  		}
  	}

	return 0;
}