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

  	int n,m;
  	cin >> n >> m;
  	int fact[n+5];
  	fact[0]=1;
  	fact[1]=1;
  	for(int i=2;i<=n+1;i++){
  		fact[i]=(fact[i-1]*i)%m;
  	}
  	int ans=0;
  	for(int i=1;i<=n;i++){
  		ans+=(((fact[n-i+1]*fact[i])%m)*(n-i+1))%m;
  		ans=ans%m;
  	}
  	cout << ans << endl;

	return 0;
}