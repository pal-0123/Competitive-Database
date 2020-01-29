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
        int gc=gcd(a,b);
        if(gc!=1){
            cout << "infinite" <<endl;
        }
        else{
            cout << "Finite" << endl;
        }
    }

	return 0;
}