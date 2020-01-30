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
		int n;
		cin >> n;
		string s;
		cin >> s;
		int letter[26]={0};
		for (auto i:s){
			letter[(int)i-'A']++;
		}
		int free=0;
		int type[26],j=0;
		for (int i=0;i<26;i++){
			if (letter[i]!=0){
				type[j++]=letter[i];
			}
			else{
				free++;
			}
		}
		int min=100000000;
		set <int> check;
		int i,j;
		for (i=0;i<26;i++){
			int greater=0,less=0;
			int valgreat=0,valless=0;
			int difgreat=0;difless=0;
			int ans=0;
			if (check.find(type[i])==check.end()){
				check.insert(type[i]);
				for (j=0;j<26;j++){
					if (type[j]<type[i]){
						less++;
						valless+=type[j];
						difless+=type[i]-type[j];
					}
					else if (type[j]>type[i]){
						greater++;
						valgreat+=type[j];
						difgreat=type[j]-type[i];
					}
				}
				if (greater==0 && less==0){
					min=0;
				}
				else{
					if (difgreat>difless){
						if((difgreat-difless)%type[i]==0){
							if ((difgreat-difless)/type[i]>=free){
								ans=difgreat;
							}
							if (ans<min){
								min=ans;
							}
						}
						//else condition required
					}
					else if (difgreat<difless){
						//content required
					}
					else{
						ans=difgreat;
						if (ans<min){
							min=ans;
						}
					}
				}
			}
		}
	}	


	return 0;
}