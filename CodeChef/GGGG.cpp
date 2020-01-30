#include<bits/stdc++.h>
using namespace std;

long long int answer(long long int x,long long int y){
	// n/ m ki power moves ka modulus with 10 ^9+7
	long long int c=1000000000+7;
    if (y == 0)
    return 1;
    else if (y%2 == 0)
    return (((answer(x, y/2))%c)*((answer(x, y/2))%c))%c;
    else
    return ((((x%c)*((answer(x, y/2))%c))%(c))*((answer(x, y/2))%c))%c;
	//return x*power(x, y/2)*power(x, y/2);
}


int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
	
	long long int t;
	cin>>t;
	while(t--){
		long long int n,k,m,moves,c=1000000000+7,p,q,ans1,ans2,ans3,ans4,ans5;
		cin>>n>>k>>m;
		if(m%2==1){
			moves=(m+1)/2;
			ans1=answer(n-1,moves);
			ans2=answer(n,moves);
			ans3=answer(ans2,c-2);
			ans4=((ans1%c)*(ans3%c))%c;
			ans5=(c+1-ans4)%c;
			cout<<ans5<<endl;
		}
		else{
			moves=(m)/2;
			ans1=answer(n-1,moves);
			ans2=answer(n,moves);
			ans1=(ans1*((n+k-1)%c))%c;
			ans2=(ans2*(n+k))%c;
			ans3=answer(ans2,c-2);
			ans4=((ans1%c)*(ans3%c))%c;
			ans5=(c+1-ans4)%c;
			cout<<ans5<<endl;
		}	
	}
	return 0;
}