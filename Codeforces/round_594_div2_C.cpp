#include <bits/stdc++.h>
using namespace std;
#define int long long int
int modu=1000000007;

signed main(){

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif

    int n,m;
    cin >> n >> m;
    if(m<n){
        int temp=n;
        n=m;
        m=temp;
    }
    int ans=n*m;
    if(n%2==0 && m%2==0){
        ans+=m;
    }
    else if(n%2==0 && m%2==1){
        ans+=n;
    }
    else if(n%2==1 && m%2==0){
        ans+=m;
    }
    else{
        ans+=m;
    }
    cout << ans%modu <<endl;
    
	
	return 0;
}