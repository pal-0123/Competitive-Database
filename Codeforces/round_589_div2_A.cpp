#include <bits/stdc++.h>
using namespace std;
#define int long long int

int dif_digit(int x){
    int dig[10]={0};
    while(x>0){
        int temp=x%10;
        if(dig[temp]==1){
            return -1;
        }
        dig[temp]++;
        x/=10;
    }
    return 1;
}

signed main(){

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
	
    int l,r;
    cin >> l >> r;
    int i;
    for (i=l;i<=r;i++){
        int ans=dif_digit(i);
        if(ans==1){
            cout << i <<endl;
            break;
        }
    }
    if(i==r+1){
        cout << "-1";
    }

	return 0;
}