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

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int c[n],h[n];
        int i;
        for(i=0;i<n;i++){
            cin >> c[i];
        }

        for(i=0;i<n;i++){
            cin >> h[i];
        }

        int strt[n]={0},end[n]={0};
        for (i=0;i<n;i++){
            if (i-c[i]<0){
                strt[0]++;
            }
            else{
                strt[i-c[i]]++;
            }
            if (i+c[i]>n-1){
                end[n-1]++;
            }
            else{
                end[i+c[i]]++;
            }
        }
        // for(i=0;i<n;i++){
        //     cout << i << " " << strt[i] << " " << end[i] << endl;
        // }

        int rad[n]={0};
        int cur=0;
        for (i=0;i<n;i++){
            cur+=strt[i];
            rad[i]+=cur;
            cur-=end[i];
        }
        // for(i=0;i<n;i++){
        //     cout << rad[i] << " ";
        // }
        // cout << "\n";
        sort(rad,rad+n);
        sort(h,h+n);
        int ans=1;
        for (i=0;i<n;i++){
            if (rad[i]!=h[i]){
                ans=0;
                break;
            }
        }
        if (ans==0){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
    }
	
	return 0;
}