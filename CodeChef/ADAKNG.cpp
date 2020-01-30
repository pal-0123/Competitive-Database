#include <bits/stdc++.h>
#include <cstdlib>
#include <cmath>
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
	int r,c,k;
	int ans;
	int i,j;
	while (t--){
		cin >> r >> c >> k;
		if (k==8){
			k--;
		}
		/*if (r==1 && c==1 ){
			ans=((2*3+(k-1)*2)*k)/2;

		}
		else if (r==1){
			if (c>k && (c-8)>=k){
				ans=((2*5+(k-1)*4)*k)/2;
			}
			else if (c>k){
				ans=(k+1)*(k-1)+k;
				ans+=(c-8)*(k+1);
			}
			else if ((c-8)>=8){
				ans=(k+1)*(k-1)+k;
				ans+=(c-1)*(k+1);
			}
			else {
				ans=(c-8)*(k+1);
				ans+=(c-1)*(k+1);
				ans+=k;
			}
		}
		else if (c==1){
			if (r>k && (r-8)>=k){
				ans=((2*5+(k-1)*4)*k)/2;
			}
			else if (r>k){
				ans=(k+1)*(k-1)+k;
				ans+=(r-8)*(k+1);
			}
			else if ((r-8)>=8){
				ans=(k+1)*(k-1)+k;
				ans+=(r-1)*(k+1);
			}
			else {
				ans=(r-8)*(k+1);
				ans+=(r-1)*(k+1);
				ans+=k;
			}
		}
		else {
			if (r>k){
				if (c>k){
					ans=((2*3+(k-1)*2)*k)/2;
				}
				else{
					ans=((2*3+(c-1-1)*2)*(c-1-1))/2;
					ans+=((3+(c-1-1)*2)/2+1)*(k-c+1);
				}
				if ((c-8)>k){
					ans+=(k+1)*(k);
				}
				else {
					ans+=(k+1)*(c-8);
				}
			}
			else{
				if (c>k){
					ans+=((2*3+(r-1-1)*2)*(r-1-1))/2;
					ans+=(k-r+1)*((3+(r-1-1)*2)/2+1);
				}
				else{
					ans+=(r-1)*(c-1);
					ans+=(r-1)+(c-1);
				}
				if ((c-8)>k){
					ans+=r*(k);
				}
				else {
					ans+=(c-8)*r;
				}	
			}
			if ()

		}	*/
		ans=0;
		for (i=1;i<9;i++){
			for (j=1;j<9;j++){
				if (abs(r-i)<abs(j-c)){
					if ((abs(r-i)+abs(abs(j-c)-abs(r-i)))<=k){
						ans++;
						//cout << i << " " << j << "\n";
					}
				}
				else{
					if ((abs(j-c)+abs(abs(r-i)-abs(c-j)))<=k){
						ans++;
						//cout << i << "    " << j << "\n";
					}
				}
			}
		}
		cout << ans << "\n";
	}

	return 0;
}