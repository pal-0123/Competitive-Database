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
	int z=t;
	while (t--){
		int n;
		cin >> n;
		int i,j;
		int a[n][n],b[n][n];
		int a1[n][n],b1[n][n];
		for (i=0;i<n;i++){
			for (j=0;j<n;j++){
				cin >> a[i][j];
				a1[i][j]=a[i][j];
			}
		}
		int flag=0;
		int discrepancy=0;
		for (i=0;i<n;i++){
			for (j=0;j<n;j++){
				cin >> b[i][j];
				b1[i][j];
				if (b[i][j]!=a[i][j] && b[i][j]!=a[j][i]){
					flag=1;
				}
				if (b[i][j]!=a[i][j]){
					discrepancy++;
				}
			}
		}

		int d1=0;
		int match=0;
		if (flag==1){
			z--;
			cout << "no\n";
		}
		else{
			for (i=0;i<n;i++){
				for (j=0;j<n;j++){
					if (a1[i][j]==b[i][j]){
						a1[i][j]=-1;
						match++;
					}
					else if (a1[j][i]==b[i][j]){
						d1++;
						a1[j][i]=-1;
						match++;
					}
				}
			}

			if (match!=(n*n)){
				z--;
				cout << "no\n";
			}
			else if (discrepancy!=d1){
				z--;
				cout << "no\n";
			}
			else if(discrepancy%2==0){
				z--;
				cout << "Yes\n";
			}

		}
	}
	if (z!=0){
		while (true){
			;
		}
	}

	return 0;
}