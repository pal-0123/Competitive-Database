#include <bits/stdc++.h>
using namespace std;
#define int long long int

int gcd(int a, int b) { 
    if (b == 0){
		return a; 
    }
    return gcd(b, a % b);  
      
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

  	int x;
  	cin >> x;
  	int sqr=ceil(sqrt(x));
  	int i;
  	for(i=sqr;i>=1;i--){
  		if(x%i==0){
  			int gc=gcd(i,x/i);
  			if(gc==1){
  				break;
  			}
  		}
  	}
  	cout << i << " " << x/i << endl;

	return 0;
}