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
	
    int n;
    cin >> n;
    int a[n];
    int i;
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    int ans=0;
    int x=0,y=0;
    for(i=0;i<n;i++){
        if(i<n/2){
            x+=a[i];
        }
        else{
            y+=a[i];
        }
    }
    x=x*x;
    y=y*y;
    ans=x+y;
    cout << ans <<endl;


	return 0;
}