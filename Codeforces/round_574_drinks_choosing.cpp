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

    int n,k;
    cin >> n >> k;
    int a[n];
    int i;
    int b[k];
    for(i=0;i<k;i++){
    	b[i]=0;
    }
    for(i=0;i<n;i++){
    	cin >> a[i];
    	b[a[i]-1]++;

    }
    int ans=0;
    int no=0;
    for (i=0;i<k;i++){
        if (b[i]%2==0){
            ans+=b[i];
        }
        else{
            ans+=b[i]-1;
            no++;
        }
    }
    ans+=((no+1)/2);
    cout << ans;

	

	return 0;
}