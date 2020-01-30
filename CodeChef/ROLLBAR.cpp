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
    	int n,m;
    	cin >> n >> m;
    	int x,y;
    	cin >> x >> y;
    	char a[n][m+5];
    	int i,j;
    	for (i=0;i<n;i++){
    		for (j=0;j<m;j++){
    			cin >> a[i][j];	
    		}
    		
    	}
    	//cout << n << " " << m << "\n";
    	int stp[n][m]={0};
    	int step=1;
    	for (i=0;i<n;i++){
    		if (i%3==0){
    			if(i==0){
    				step=0;
    			}
    			else{
    				step=stp[i-3][0]+2;	
    			}
    		}
    		else{
    			step=stp[i-(i%3)][0]+i%3;
    		}
    		for (j=0;j<m;j++){
    			if (i==0 && j==0){
    				cout << "0 ";
    				stp[i][j]=0;
    			}
    			else if (i%3==0){
    				if (j%3==0){
    					if (j!=0){
    						step++;
    					}
    					cout << step << " ";
    					stp[i][j]=step;
    				}
    				else{
    					if (i>=3){
    						if (stp[i-3][0]==-1){
    							cout << "-1 ";
    							stp[i][j]=-1;
    						}
    						else{
    							cout << stp[i-3][0]+j+2<< " ";
    							stp[i][j]=stp[i-3][0]+j+2;	
    						}
    						
    					}
    					else{
    						if (n>=3){
    							if (stp[i][j-j%3]==-1){
    								cout << "-1 ";
    								stp[i][j]=-1;
    							}
    							else{
    								cout << stp[i][j-j%3]+2+j%3 << " ";
    								stp[i][j]=stp[i][j-j%3]+2+j%3;	
    							}
    							
    						}
    						else{
    							cout << "-1 ";	
    							stp[i][j]=-1;
    						}
    					}
    					
    					
 						if ((j+1)%3==0){
 							step++;
 						}
    				}
    			}
    			else{
    				if (j==0){
    					int z=i-i%3;
    					if (i<3){
    						z=0;
    					}
    					if (m>j+2){
    						if (stp[z][0]==-1){
    							cout << "-1 ";
    							stp[i][j]=-1;		
    						}
    						else{
    							cout << stp[z][0]+2+i%3 << " ";	
    							stp[i][j]=stp[z][0]+2+i%3;		
    						}
    						
    					}
    					else{
    						cout << "-1 ";
    						stp[i][j]=-1;
    					}
    					
    				}
    				else if (j%3==0){
    					cout << ++step << " ";
    					stp[i][j]=step;
    				}
    				else{
    					if (i>3){
    						if (stp[i-3][j/3*3]==-1){
    							cout << "-1 ";
    							stp[i][j]=-1;
    						}
    						else{
    							cout << stp[i-3][j/3*3]+2+j%3 << " ";
    							stp[i][j]=stp[i-3][j/3*3]+2+j%3;	
    						}
    						
    					}
    					else{
    						if (n>=i+3){
    							if (stp[i][j/3*3]==-1){
    								cout << "-1 ";
    								stp[i][j]=-1;
    							}
    							else{
    								cout << stp[i][j/3*3]+2+j%3 << " ";
    								stp[i][j]=stp[i][j/3*3]+2+j%3;	
    							}
    							
    						}
    						else{
    							cout << "-1 ";	
    							stp[i][j]=-1;
    						}
    					}
 						if ((j+1)%3==0){
 							step++;
 						}
 						
    				} 


    			}
    		}
    		cout << "\n";
    	}
    }
	
	
	return 0;

/*
1
2 5
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
*/
}