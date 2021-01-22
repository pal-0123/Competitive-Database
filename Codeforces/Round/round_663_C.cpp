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

    int n;
    int m=1000000007;
    cin >> n;
    int prevf=6,prev=2;
    for(int i=4;i<=n;i++){
    	int nxt,nxtf;
    	nxtf=prevf*i;
    	nxtf%=m;
    	nxt=nxtf-((2*prevf)%m)+((2*prev)%m)+m;
    	nxt%=m;
    	prevf=nxtf;
    	prev=nxt;
    }
    cout << prev;

	return 0;
}