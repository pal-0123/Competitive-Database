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
    int i,j;
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);

    int sum=0;
    for(i=0;i<n;i++){
        sum+=a[i];
    }
    if(sum%2==0 && a[n-1]<=sum/2){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    

	return 0;
}