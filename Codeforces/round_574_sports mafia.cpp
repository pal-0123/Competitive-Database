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

    int n,k;
    cin >> n >> k;
    int sumn=(n*(n+1))/2;
    int dif=sumn-k;
    int a,b,c;
    a=-1;
    b=2*n;
    c=3-2*dif;
    int d=b*b-4*a*c;
    d=(int)sqrt(d);
    int x1=-1,x2=-1;
    if (d<b){
        if(b-d%2==0){
            x1=(b-d)/2;
        }
    }
    x2=(b+d)/2;
    if (x1==-1){
        cout << x2;
    }
    else{
        int eat=x1;
        int put=n-x1;
        put=(put*(put+1))/2;
        if (put-eat==k){
            cout << x1;
        }
        else{
            cout << x2;
        }
    }
	
	return 0;
}