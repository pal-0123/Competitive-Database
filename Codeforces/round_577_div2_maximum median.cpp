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
    int i,j;
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    int mid=(n)/2;
    int move=0;
    j=mid;
    for(i=mid+1;i<n;i++){
        if(move+(a[i]-a[i-1])*(i-mid)<=k){
            move=move+(a[i]-a[i-1])*(i-mid);
            j=i;
        }
        else{
            break;
        }
    }
    int left=k-move;
    int ans=a[j];
    ans+=left/(j-mid+1);

    cout << ans;


	
	return 0;
}