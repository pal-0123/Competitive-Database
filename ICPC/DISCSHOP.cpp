#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
#define ffor(i,a,b) for(int i=a;i<b;i++)
#define bfor(i,a,b) for(int i=b;i>=a;i--)
#define mp make_pair
#define pb push_back
#define ff first
#define ss second

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
    string s;
    cin>>s;
    int max = 0, count = 0;
    ffor(i,0,s.length())
     {
      if(s[i]<=s[i+1] && i+1<s.length())
        { continue;}
         else
        { max = i; break;}
     }
     int count1 = 0,ans = 0;
     ffor(i,0,s.length())
     {
      if(s[i] != '0' && i!=max) count1++;
      if(i != max && count1)
      { cout<<s[i]; ans++;}
     }
     if(!ans) cout<<0;
     cout<<endl;
   }
 
}
