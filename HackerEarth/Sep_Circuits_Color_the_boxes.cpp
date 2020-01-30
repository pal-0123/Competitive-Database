#include <bits/stdc++.h>
using namespace std;
#define int long long int
int m=1000000007

signed main(){

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
	
    int fact[1000004];
    fact[0]=1;
    fact[1]=1;
    int i;
    for(i=2;i<1000004;i++){
        fact[i]=(fact[i-1]*i)%m;
    }
    int n,m;
    cin >> n >> m;
    cout << fact[m];



	return 0;
}