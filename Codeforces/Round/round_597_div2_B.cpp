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
        int a,b,c;
        cin >> a >> b >> c;
        char arr[n];
        int a1=0,b1=0,c1=0;
        for(int i=0;i<n;i++){
            cin >> arr[i];
            if(arr[i]=='R'){
                a1++;
            }
            else if(arr[i]=='P'){
                b1++;
            }
            else{
                c1++;
            }
        }
        int minsum=0;
        minsum=min(a,c1)+min(b,a1)+min(c,b1);
        if(minsum>=(n+1)/2){
            cout << "YES\n";
            for(int i=0;i<n;i++){
                if(arr[i]=='R'){
                    if(b>0){
                        cout << 'P';
                        b--;
                    }
                    else{
                        if(min(c,b1)==b1 && c>0){
                            cout << 'S';
                            c--;
                        }
                        else{
                            cout << 'R';
                            a--;
                        }
                    }
                    a1--;
                }
                else if(arr[i]=='P'){
                    if(c>0){
                        cout << 'S';
                        c--;
                    }
                    else{
                        if(min(a,c1)==c1 && a>0){
                            cout << 'R';
                            a--;
                        }
                        else {
                            cout << 'P';
                            b--;
                        }
                        
                    }
                    b1--;
                }
                else{
                    if(a>0){
                        cout << 'R';
                        a--;
                    }
                    else{
                        if(min(b,a1)==a1 && b>0){
                            cout << 'P';
                            b--;
                        }
                        else{
                            cout << 'S';
                            c--;
                        }
                        
                    }
                    c1--;
                }   
            }
            cout << endl;
        }
        else{
            cout << "NO\n";
        }
    } 

	return 0;
}