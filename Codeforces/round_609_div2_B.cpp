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
    int a[n],b[n];
    for(int i=0;i<n;i++){
    	cin >> a[i];
    }
    for(int i=0;i<n;i++){
    	cin >> b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    int i,j;
    int dif=INT_MIN;
    for(i=0;i<n;i++){
    	if(dif!=INT_MIN && b[i]-a[i]!=dif){
    		break;
    	}
    	if(dif==INT_MIN){
    		dif=b[i]-a[i];
    	}
    }
    if(i==n && a[n-1]+dif<m){
    	if(dif==INT_MIN){
    		cout << 0;
    	}
    	else if(dif>=0){
    		cout << dif;
    	}
    	else{
    		cout << m-abs(dif);
    	}
    	return 0;
    }
    for(j=0;j<n;j++){
    	dif=INT_MIN;
    	for(i=j+1;i<n;i++){
    		if(dif!=INT_MIN && b[i-j-1]-a[i]!=dif){
    			break;
    		}
    		if(dif==INT_MIN){
    			dif=b[i-j-1]-a[i];
    		}
    	}
    	if(i==n  && a[n-1]+dif<m){
    		if(dif<0 && dif!=INT_MIN){
    			dif=m-abs(dif);
    		}
    		for(i=0;i<=j;i++){
    			if(dif!=INT_MIN && (b[n-j+i-1]-(a[i]+dif)%m)!=0){
    				break;
    			}
    			if(dif==INT_MIN){
    				dif=b[n-j+i-1]-a[i];
    			}		
    		}
    		if(i==j+1){
    			if(dif==INT_MIN){
    				cout << 0;
    			}
    			else if(dif>=0){
    				cout << dif;
    			}
    			else{
    				cout << m-abs(dif);
    			}
    			return 0;
    		}
    	}
    }


	return 0;
}