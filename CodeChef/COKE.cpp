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
        int n,m,k,l,r;
        cin >> n >> m >> k >> l >> r;
        vector <pair<int,int> >cp;
        int i;
        for(i=0;i<n;i++){
            int t1,t2;
            cin >> t1 >> t2;
            cp.push_back(make_pair(t2,t1));
        }
        sort(cp.begin(),cp.end());

        for(i=0;i<n;i++){
            if ((cp[i]).second >k+1 ){
                if ((cp[i]).second -k <m){
                    (cp[i]).second=k;
                }
                else{
                    (cp[i]).second-=m;   
                }
            }
            else if((cp[i]).second <k-1 ){
                if (k- (cp[i]).second < m){
                    (cp[i]).second=k;
                }
                else{
                    (cp[i]).second+=m;   
                }
            }
            else{
                (cp[i]).second=k;
            }
            //cout << cp[i].second << " ";
            if ((cp[i]).second <=r && (cp[i]).second >=l){
                cout << (cp[i]).first <<endl;
                break;
            }

        }    
        if (i==n){
            cout << "-1\n";
        }   

    }
	
	return 0;
}