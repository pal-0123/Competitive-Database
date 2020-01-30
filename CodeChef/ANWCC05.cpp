#include <bits/stdc++.h>
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif


	int t;
	cin >> t;
	long long int x1,x2,x3,y1,y2,y3;
	float ps,pr,ans;
	long long int psi,pri;
	while (t--){
		cin >> x1 >> y1 >> x2 >> y2  >> x3 >> y3;
		psi=((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
		pri=((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
		if (psi==pri){
			cout << "-1\n";
		}
		else{
			pr=sqrt(pri);
			ps=sqrt(psi);
			ans=ps*ps/pr;
			ans-=pr;
			ans=abs(ans);
			printf("%f\n",ans);
		}
	}

	return 0;
}