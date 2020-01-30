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
    while(t--){
    	int x1,x2,y1,y2,r1,r2;
    	cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    	double d=(double)sqrt((x1-x2)(x1-x2)+(y1-y2)(y1-y2))
    	if(d+r1<r2){
    		cout << "NO\n";
    	}
    	else{
    		cout << "YES\n";
    		double dist=r2+(d+r1-r2)/2
    		double x,y;
    		if (x1==x2){
    			x=x1;
    			y=y2+dist;
    		}
    		else{
    			double slope=(y1-y2)/(x1-x2);	
    			x=x2+dist*(double)sqrt(1.0/(1+m*m));
    			y=y2+dist*m*(double)sqrt(1.0/(1+m*m));
    			
    		}
    		
    	}
    }	
    
	
	return 0;
}