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
    int noa[500]={0},nob[500]={0};
    for(i=0;i<n;i++){
        cin >> a[i];
        noa[a[i]]++;
    }
	int m;
    cin >> m;
    int b[m];

    for(i=0;i<m;i++){
        cin >> b[i];
        nob[b[i]]++;
    }

	for (i=0;i<n;i++){
        for(j=0;j<m;j++){
            int t=a[i]+b[j];
            if(noa[t]==0 && nob[t]==0){
                cout << a[i] << " " << b[j];
                break;
            }
        }
        if (j!=m){
            break;
        }
    }



    return 0;
}