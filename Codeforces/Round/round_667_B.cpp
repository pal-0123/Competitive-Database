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
		int a,b,x,y,n;
		cin >> a >> b >> x >> y >> n;
		int temp=n,ta,tb;
		ta=a;tb=b;
		if(a-x<=n){
			n-=(a-x);
			a-=(a-x);
		}
		else{
			a-=n;
			n=0;			
		}
		if(b-y<=n){
			n-=(b-y);
			b-=(b-y);
		}
		else{
			b-=n;
			n=0;
		}
		n=temp;
		int ans=a*b;
		a=ta;
		b=tb;
		if(b-y<=n){
			n-=(b-y);
			b-=(b-y);
		}
		else{
			b-=n;
			n=0;
		}
		if(a-x<=n){
			n-=(a-x);
			a-=(a-x);
		}
		else{
			a-=n;
			n=0;			
		}
		cout << min(ans,a*b) << endl;

	}

	return 0;
}