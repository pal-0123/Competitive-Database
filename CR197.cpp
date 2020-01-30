#include <bits/stdc++.h>
using namespace std;
#define int unsigned long long int

int fill(double ratio[],int a[],int p,int n,int ans){
	if (p<=0){
		return ans;
	}
	int minpos=0;
	int i;
	for (i=0;i<n;i++){
		if (ratio[i]!=-1 && ratio[i]<ratio[minpos]){
			minpos=i;
		}
		if (ratio[minpos]==-1 && ratio[i]!=-1){
			minpos=i;
		}
	}
	double rationew[n];
	for (i=0;i<n;i++){
		rationew[i]=ratio[i];
	}

	for (i=0;i<n;i++){
		if (ratio[minpos]==ratio[i] && i!=minpos){
			ratio[i]=-1;
		}
	}
	ratio[minpos]=-1;
	int powthis=(int)pow(2,minpos);
	if ((int)(p/powthis)==0){
		int ansnew=a[minpos];
		for (i=0;i<n;i++){
			int pownow=pow(2,i);
			// cout << "@@@" << a[i]*((p+pownow-1)/pownow) << "@@@" << ansnew << "\n";
			if (a[i]*((p+pownow-1)/pownow)<ansnew){
				ansnew=a[i]*((p+pownow-1)/pownow);
			}
		}
		ans+=a[minpos];
		// cout << "@@@ " << ans <<" @@@ " << p/powthis << "   " << minpos << "\n";
		return ans;
	}
	else{
		int pnew=p%powthis;
		int req=p/powthis;
		int ansnew=fill(ratio,a,pnew,n,ans)-ans;
		// cout << "@@@" << minpos << "\n";
		p=pnew;
		for (i=0;i<n;i++){
			int pownow=pow(2,i);
			// cout << "@@@" << a[i]*((p+pownow-1)/pownow) << "@@@" << ansnew << "\n";
			if (a[i]*((p+pownow-1)/pownow)<ansnew){
				ansnew=a[i]*((p+pownow-1)/pownow);
			}
		}
		if (pnew!=0){
			int z=log2(p);
			if (z>n){
				z=n;
			}
			int anstemp=fill(rationew,a,pnew,z,ans)-ans;
			if (anstemp<ansnew){
				ansnew=anstemp;
			}	
		}
		
		ans+=ansnew;
		ans+=(req*a[minpos]);

		// cout << "@@@" << ans << "@@@" << ansnew << "@@@\n"; 
		return ans;
	}
}

signed main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
	cout.tie(nullptr);

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif

    int t;
    cin >> t;
    while (t--){
    	int n,p;
    	cin >> n;
    	cin >> p;
    	int a[n];
    	int i;
    	for (i=0;i<n;i++){
    		cin >> a[i];
    	}
    	double ratio[n];
    	for (i=0;i<n;i++){
    		ratio[i]=(a[i]/pow(2,i));
    		//cout << ratio[i] << "\n";
    	}
    	int aa=log2(p);
    	double rationew[n];
    	for (i=0;i<n;i++){
    		rationew[i]=ratio[i];
    	}
    	//cout << "\n";
    	int ans=0;
    	ans=fill(ratio,a,p,n,ans);
    	for (i=0;i<n;i++){
    		int pownow=pow(2,i);
    		if (a[i]*((p+pownow-1)/pownow)<ans){
    			// cout << "@@@" << ans << "@@@" << a[i]*((p+pownow-1)/pownow) << "@@@\n";
    			ans=a[i]*((p+pownow-1)/pownow);
    		}
    	}
    	if (aa+1>n){
    		aa=n-1;
    	}
    	int anstemp=fill(rationew,a,p,aa+1,0);
    	if (anstemp<ans){
    		ans=anstemp;
    	}
    	if (n==1){
    		ans=a[0]*p;
    	}
    	cout << ans << "\n";
    }
	
	
	return 0;
}