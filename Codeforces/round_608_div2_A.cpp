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

    int a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f;
    int c1=0,c2=0;
    int m1=min(a,d);
    c1+=m1*e;
    // d-=m1;
    int m2=min(b,c);
    m2=min(m2,d-m1);
    c1+=m2*f;
    m2=min(b,c);
    m2=min(m2,d);
	// d-=m2;
	c2+=m2*f;
	m1=min(a,d-m2);
	c2+=m1*e;
	if(c1>c2){
		cout << c1;
	}
	else{
		cout << c2;
	}

	return 0;
}