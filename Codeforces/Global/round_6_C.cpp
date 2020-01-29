#include <bits/stdc++.h>
using namespace std;
#define int long long int

int gcd(int a, int b) { 
    if (b == 0){
		return a; 
    }
    return gcd(b, a % b);  
      
} 

signed main(){

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif

    int r,c;
    cin >> r >> c;
    int grid[r+1][c+1];
    if(r==1 && c==1){
    	cout << "0\n";
    	return 0;
    	// continue;
    }
    if(r==1 && c==2){
    	cout << "2 3\n";
    	return 0;
    	// continue;
    }
    if(r==2 && c==1){
    	cout << "2\n";
    	cout << "3\n";
    	return 0;
    	// continue;
    }
    if(r==1){
    	for(int i=1;i<=c;i++){
    		cout << i+1 << " ";
    	}
    	cout << endl;
    	return 0;
    }
    if(c==1){
    	for(int i=1;i<=r;i++){
    		cout << i+1 << endl;
    	}
    	return 0;
    }

    // if(r==2 && c==2){
    // 	cout << "2 9\n";
    // 	cout << "4 12\n";
    // 	return 0;
    // 	// continue;
    // }
    grid[1][1]=2;
    int prev=2;
    grid[1][2]=3;
    grid[2][1]=4;
    if(c<r){
    	grid[1][2]=4;
    	grid[2][1]=3;
    	set<int> sel;
    	sel.insert(2);
    	sel.insert(3);
    	sel.insert(4);
    	prev=grid[1][2];
    	for(int j=3;j<=c;j++){
    		grid[1][j]=prev+2;

    		prev=grid[1][j];
    		sel.insert(prev);
    	}
    	prev=grid[2][1];
    	for(int i=3;i<=r;i++){
    		if(sel.find(prev+1)==sel.end()){
    			grid[i][1]=prev+1;
    		}
    		else{
    			grid[i][1]=prev+2;
    		}
    		
    		prev=grid[i][1];
    	}
    }
    else{
    	set<int> sel;
    	sel.insert(2);
    	sel.insert(3);
    	sel.insert(4);
    	prev=grid[2][1];
    	for(int i=3;i<=r;i++){
    		grid[i][1]=prev+2;
    		prev=grid[i][1];
    		sel.insert(prev);
    	}	

    	prev=grid[1][2];
    	for(int j=3;j<=c;j++){
    		if(sel.find(prev+1)==sel.end()){
    			grid[1][j]=prev+1;	
    		}
    		else{
    			grid[1][j]=prev+2;
    		}
    		
    		prev=grid[1][j];

    	}
    	
    }
    
    for(int i=2;i<=r;i++){
    	for(int j=2;j<=c;j++){
    		grid[i][j]=grid[i][1]*grid[1][j];
    	}
    }
    for(int i=1;i<=r;i++){
    	for(int j=1;j<=c;j++){
    		cout << grid[i][j] << " ";
    	}
    	cout << endl;
    }


	return 0;
}