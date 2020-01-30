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

    int n,m;
    cin >> n >> m;
    string s[n];
    int i,j;
    for(i=0;i<n;i++){
        cin >> s[i];
    }
    int a[m];
    for(i=0;i<m;i++){
        cin >> a[i];
    }
    int ans=0;
    for (i=0;i<m;i++){
        int ans_max[5]={0};
        for(j=0;j<n;j++){
            ans_max[s[j][i]-'A']++;
        }
        int max=ans_max[0];
        for(j=1;j<5;j++){
            if (ans_max[j]>max){
                max=ans_max[j];
            }
        }
        ans+=max*a[i];
    }
    cout << ans;


	return 0;
}