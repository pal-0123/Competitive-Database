#include <bits/stdc++.h>
using namespace std;
#define int long long int

int getdig(int n){
	int ret=0;
	int y=0;
	while(n!=0){
		if(n%10==9){
			y++;
		}
		n/=10;

		ret++;
	}
	if(y!=ret){
		ret--;
	}
	return ret;
}

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
  		int a,b;
  		cin >> a >> b;
  		// if(a>b){
  		// 	int temp=a;
  		// 	a=b;
  		// 	b=temp;
  		// }
  		int d1,d2;
  		d1=getdig(a);
  		d2=getdig(b);
  		// cout << d1 << d2;
  		cout << a*d2 << endl;
  	}

	return 0;
}