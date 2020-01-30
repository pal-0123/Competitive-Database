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
    int pos=0,neg=0,zer=0;
    for(i=0;i<n;i++){
        cin >> a[i];
        if(a[i]<0){
            neg++;
        }
        else if(a[i]==0){
            zer++;
        }
        else{
            pos++;
        }
    }

    int ans=0;
    for(i=0;i<n;i++){
        if(a[i]<0){
            ans+=(-1)-a[i];
        }
        else if(a[i]>0){
            ans+=a[i]-1;
        }
    }

    if (zer==0 && neg%2==1){
        ans+=2;
        cout << ans;
    }
    else{
        ans+=zer;
        cout << ans;
    }


	return 0;
}