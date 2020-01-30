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
        string a[n];
        int i,j;
        for(i=0;i<n;i++){
            // for(j=0;j<n;j++){
            //     cin >> a[i][j];
            // }
            cin >> a[i];
        }
        int p[n][2];
        int p1=0,p2=0;
        for(i=0;i<n;i++){
            p[i][0]=0;
            for(j=0;j<n/2;j++){
                p[i][0]+=a[i][j]-'0';
            }
            
            p[i][1]=0;
            for(j=n/2;j<n;j++){
                p[i][1]+=a[i][j]-'0';
            }
            // cout << p[i][0] << " " << p[i][1] <<endl;
            p1+=p[i][0];
            p2+=p[i][1];
        }
        // cout << p1 << " " << p2 <<endl;
        int pr1[n+1],pr2[n+1];
        for(i=0;i<n;i++){
            pr1[i]=p1-p[i][0]+p[i][1];
            pr2[i]=p2-p[i][1]+p[i][0];
        }
        pr1[n]=p1;
        pr2[n]=p2;
        int dif[n+1];
        for(i=0;i<=n;i++){
            dif[i]=abs(pr1[i]-pr2[i]);
            // cout << dif[i] << " ";
        }
        sort(dif,dif+n+1);
        cout << dif[0] <<endl;
        
    }


    return 0;
}