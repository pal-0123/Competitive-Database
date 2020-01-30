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
		int a,b,c,r;
		cin >> a >> b >> c >> r;
		if(a>b){
			int temp=a;
			a=b;
			b=temp;
		}
		int x1,x2;
		x1=c-r;
		x2=c+r;
		if(x1>=a && x2<=b){
			cout << b-a-2*r << endl;
		}
		else if(x1>=a){
			if(x1<=b){
				cout << b-a-(b-x1) << endl;	
			}
			else{
				cout << b-a << endl;
			}
			
		}
		else if(x2<=b){
			if(x2>=a){
				cout << b-a-(x2-a) << endl;	
			}
			else{
				cout << b-a << endl;
			}
			
		}
		else{
			cout << 0 << endl;
		}
	}
	return 0;
}