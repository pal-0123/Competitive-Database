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
	string s;
	int a,b,c,d;
	char op1,op2;
	int i,j;
	int ans=0;
	while (t--){
		cin >> s;
		i=0;
		a=(int)s[i++]-48;
		while (s[i]>='0' &&s[i]<='9'){
			a=a*10+(int)s[i++]-48;
		}
		op1=s[i++];
		b=(int)s[i++]-48;
		while (s[i]>='0' &&s[i]<='9'){
			b=b*10+(int)s[i++]-48;
		}
		op2=s[i++];
		c=(int)s[i++]-48;
		while (s[i]>='0' &&s[i]<='9'){
			c=c*10+(int)s[i++]-48;
		}
		i++;
		d=(int)s[i++]-48;
		while (s[i]>='0' &&s[i]<='9'){
			d=d*10+(int)s[i++]-48;
		}
		
		if (op1=='+'){
			ans=a+b;
		}
		else{
			ans=a-b;
		}
		if (op2=='+'){
			ans+=c;
		}
		else{
			ans-=c;
		}
		//cout << a << op1 << b << op2 << c << "=" << d << " " << ans << "\n";
		if (ans==d){
			cout << "Valid Equation\n";
		}
		else{
			cout << "Invalid Equation\n";
		}


	}

	return 0;
}