#include <bits/stdc++.h>
using namespace std;
#define int long long int

const int M = 1000000007; // modulo
map<int , int> F;

int get_fib(int n) {
	if (F.count(n)) return F[n];
	int k=n/2;

	if (n%2==0){ // n=2*k
		return F[n] = ((get_fib(k)*get_fib(k) + get_fib(k-1)*get_fib(k-1)) % M)%10;
	} 
	else{ // n=2*k+1
		return F[n] = ((get_fib(k)*get_fib(k+1) + get_fib(k-1)*get_fib(k)) % M)%10;
	}
}


int last_power(int n){
	int r=0;
	while(n!=1){
		n=n>>1;
		r++;
	}
	return (int)pow(2,r);
}

signed main(){

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif

    // cout << last_power(9);
    F[0]=1;
    F[1]=1;
    int t;
    cin >> t;
    // cout << get_fib(6);
    while(t--){
    	int n;
    	cin >> n;
    	int ans=last_power(n);
    	if(ans==0){
    		cout << 0 <<endl;
    	}
    	else if(ans==1){
    		cout << 0 <<endl;
    	}
    	else if(ans==2){
    		cout << 1 <<endl;
    	}
    	else{
    		ans=get_fib(ans-2);
    		cout << ans <<endl;	
    	}
    	
    }
	
	return 0;
}