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
	while (t--){
		string s;
		cin >> s;
		int letter[26]={0};
		for (auto i:s){
			letter[(int)i-'A']++;
		}
		int type[26],j=0;
		for (int i=0;i<26;i++){
			if (letter[i]!=0){
				type[j++]=letter[i];
			}
		}
		int i;
		int sum=0;
		for (i=0;i<j;i++){
			sum+=type[i];
		}
		int ans=0,min=100000000;
		for (i=1;i<=26;i++){
			if (sum%i==0){
				int ansnow=0;
				int mean=sum/i;
				int less[26]={10000000},lessnos=0,greatnos=0,difgreat=0,req,same=0;
				for (int k=0;k<j;k++){
					if (type[k]<mean){
						less[lessnos++]=type[k];
					}
					else if (type[k]>mean){
						greatnos++;
						difgreat+=abs(type[k]-mean);
					}
					else{
						same++;
					}
				}
				req=i-same-greatnos;
				sort(less,less+lessnos);
				for (int k=0;k<lessnos-req;k++){
					ansnow+=less[k];
				}
				ansnow+=difgreat;
				if (ansnow<min){
					min=ansnow;
				}
			}
		}
		ans=min;
		cout << ans << "\n";

		
	}	


	return 0;
}