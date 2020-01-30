t=input()
while (t):
	t-=1
	n=input()
	s=raw_input()
	ans=0;
	while (n):
		s=int(s)
		s=char(s)
		if (ans==0):
			ans+=(n-len(s))/2
		else:
			ans+=()