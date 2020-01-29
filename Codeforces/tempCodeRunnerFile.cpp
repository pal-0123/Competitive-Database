#include <bits/stdc++.h>
using namespace std;
#define int long long int
int m=1000000007;

int cal_pow(int var){
    if(var==0){
        return 0;
    }
    if(var==1){
        return 2;
    }
    int ret=(2*cal_pow(var-1))%m;
    return ret;
}

signed main(){

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
	
    int h,w;
    cin >> h >> w;
    int r[h];
    int i;
    for(i=0;i<h;i++){
        cin >> r[i];
    }
    int c[w];
    for(i=0;i<w;i++){
        cin >> c[i];
    }
    int var=0;
    int j;
    int ans=1;
    for (i=0;i<h;i++){
        for(j=0;j<w;j++){
            if(i>c[j] && j>r[i]){
                var++;
                ans*=2;
                ans=ans%m;
                // cout << 1;
            }
            else if(i==c[j] && j<r[i]){
                var=0;
                break;
            }
            else if(j==r[i] && i<c[j]){
                var=0;
                break;
            }
            else{
                ;
                // cout << 0;
            }
        }
        // cout << endl;
    }
    if (var==0){
        cout << 0;
    }
    else{
        cout << ans;
    }
    // cout << var << endl;
    // int ans=cal_pow(var);
    // cout << ans;
	return 0;
}