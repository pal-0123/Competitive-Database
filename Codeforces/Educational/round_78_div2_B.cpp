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
    	int a,b;
    	cin >> a >> b;
    	int ans=0;
    	int diff=abs(a-b);
    	int sumn=ceil((-1.0+sqrt(1+8.0*diff))/2.0);
    	if(a<b){
    		a+=((sumn+1)*sumn)/2;
    		if((a-b)%2==0){
    			cout << sumn << endl;
    		}
    		else{
    			if(sumn%2==0){
    				cout << sumn+1 << endl;
    			}
    			else{
    				cout << sumn+2 << endl;
    			}
    		}
    	}
    	else{
    		b+=((sumn+1)*sumn)/2;
    		if((b-a)%2==0){
    			cout << sumn << endl;
    		}
    		else{
    			if(sumn%2==0){
    				cout << sumn+1 << endl;
    			}
    			else{
    				cout << sumn+2 << endl;
    			}
    		}
    	}


    	// cout << sumn<< endl;
    }

	return 0;
}