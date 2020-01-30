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
        int n,q;
        cin >> n >> q;
        int b[n];
        b[0]=0;
        int i;
        for(i=1;i<n;i++){
            cin >> b[i];
        }
        int arr[n];
        arr[0]=0;
        arr[1]=b[1];
        for(i=2;i<n;i++){
            if(i%2==0){
                arr[i]=arr[i-1]-b[i];
            }
            else{
                arr[i]=arr[i-1]+b[i];
            }
            
        }
        while(q--){
            int x,y;
            cin >> x >> y;
            if(x>y){
                int temp=x;
                x=y;
                y=temp;
            }
            int dif=x-y;
            if(dif%2==0){
                cout << "UNKNOWN\n";
            }
            else{
                int ans=0;
                if(x%2==1){
                    ans=arr[y-1]-arr[x-1];
                }
                else{
                    ans=arr[y-1]-arr[x-1];
                    ans*=-1;
                }
                cout << ans <<endl;
            }
        }    
        
    }

	return 0;
}