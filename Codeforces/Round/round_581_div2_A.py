from math import *
n=input()
no=0;
l=len(n)
for i in range(l):
	if (n[i]=='1'):
		no+=int(pow(2,l-i-1))

d=ceil(log(no,4))
print (d)

	
