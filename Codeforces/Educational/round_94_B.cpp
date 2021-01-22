#include <bits/stdc++.h>
using namespace std;
#define int long long int


signed main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin >> t;
	while(t--){
		int p,f;
		cin >> p >> f;
		int cnts,cntw;
		cin >> cnts >> cntw;
		int s,w;
		cin >> s >> w;
		int ans=0;
		if(w<s){
			int temp=w;
			w=s;
			s=temp;
			temp=cntw;
			cntw=cnts;
			cnts=temp;
		}
		if(s==w){
			ans+=min(cnts+cntw,p/s+f/s);
		}
		else{
			
			int temp;
			temp=min(cnts,p/s);
			cnts-=temp;
			p-=temp*s;
			ans+=temp;
			int dif=w-s;
			int req=p%s;
			int lcm;
			if(req==0){
				lcm=0;
			}
			else{
				lcm=req/__gcd(dif,req);	
			}
			
			lcm-=p/s;
			if(lcm<=0){
				ans+=min(cntw,p/w);
				cntw-=min(cntw,p/w);
			}			
			else{
				lcm=min(lcm,temp);
				p+=lcm*s;
				if(lcm<=min(cntw,p/w)){
					cnts+=lcm;
					ans-=lcm;
					ans+=min(cntw,p/w);
					cntw-=min(cntw,p/w);
				}
			}


			temp=min(cnts,f/s);
			cnts-=temp;
			f-=temp*s;
			ans+=temp;
			dif=w-s;
			req=f%s;
			if(req==0){
				lcm=0;
			}
			else{
				lcm=req/__gcd(dif,req);	
			}
			lcm-=f/s;
			if(lcm<=0){
				ans+=min(cntw,f/w);
				cntw-=min(cntw,f/w);
			}			
			else{
				lcm=min(lcm,temp);
				f+=lcm*s;
				if(lcm<=min(cntw,f/w)){
					cnts+=lcm;
					ans-=lcm;
					ans+=min(cntw,f/w);
					cntw-=min(cntw,f/w);	
				}
			}
		}
		cout << ans << endl;
	}

	return 0;
}