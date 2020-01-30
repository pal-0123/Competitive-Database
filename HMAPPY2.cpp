#include <bits/stdc++.h>
using namespace std;

long long int gcd(long long int a, long long int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 

int main(){

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif

    int t;
    cin >> t;
    long long int n,a,b,k,lcm,hcf;
    long long int ans=0;
    while (t--){
    	cin >> n >> a >> b >> k;
    	ans=0;
    	ans+=(n/a);
    	ans+=(n/b);
    	hcf=gcd(a,b);
    	lcm=(a*b)/hcf;
    	ans-=2*(n/lcm);
    	if (ans>=k){
    		cout << "Win\n";
    	}
    	else{
    		cout << "Lose\n";
    	}
    	
    }

	
	return 0;
}