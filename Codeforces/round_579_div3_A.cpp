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


    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        int p[n];
        // int st[n];
        int i;
        int at1=-1,atn=-1;
        for(i=0;i<n;i++){
            cin >> p[i];
            // st[p[i]-1]=i;
            // if(p[i]==1){
            //     at1=i;
            // }
            // if (p[i]==n){
            //     atn=i;
            // }
        }
        // for(i=0;i<n;i++){
        //     cout << p[i] << " ";
        // }
        // cout << endl;

        for(i=1;i<n;i++){
            if ((p[i-1]-p[i]+n)%n!=1){
                break;
            }
        }

        
        // cout << -6%5;
        if (i==n){
            cout << "YES\n";
        }
        else{
            for(i=1;i<n;i++){
                if ((p[i-1]-p[i]-n)%n!=-1){
                    break;
                }
            }
            if(i==n){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";    
            }
            
        }

    }
	
	return 0;
}