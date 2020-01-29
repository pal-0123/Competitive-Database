#include <bits/stdc++.h>
using namespace std;
#define int long long int

int check(int a,int b,int x,int y){
    a-='0';
    b-='0';
    if (b<a){
        b+=10;
    }
    if (x==0){
        if (y==0){
            return -1;
        }
        x=y;
    }
    if (y==0){
        y=x;
    }

    
}


signed main(){

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif

    string s;
    cin >> s;
    int l=s.length();
    int i,j,k;
    int ans[10][10]={-2};
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if (ans[i][j]!=-2){
                int t=0,temp;
                for(k=1;k<l;k++){
                    temp=check((int)s[k-1],(int)s[k],i,j);
                    if (temp==-1){
                        t=-1;
                        break;
                    }
                    t+=temp;
                }
                if (k!=l){
                    ans[i][j]=-1;
                    ans[j][i]=-1;        
                }
                else{
                    ans[i][j]=t;
                    ans[j][i]=t;    
                }
            }
            
        }
    }

    for(i=0;i<2;i++){
        for (j=0;j<10;j++){
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
	
	return 0;
}