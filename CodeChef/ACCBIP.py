t=int(input())
for zz in range(t):
	temp=input()
	temp=temp.split(" ")
	n=int(temp[0])
	cc=int(temp[1])
	k=int(temp[2])
	a,b,c,v=[],[],[],[]
	for i in range(n):
		temp=input()
		temp=temp.split(" ")
		a.append(int(temp[0]))
		b.append(int(temp[1]))
		c.append(int(temp[2])-1)

	temp=input()
	temp=temp.split(" ")
	v=[int(temp[i]) for i in range(len(temp))]
	grp=[]
	grp2=[]
	for i in range(cc):
		grp.append([])
		grp2.append({})
	for i in range(n):
		grp[c[i]].append(a[i])
		grp[c[i]].append(i)
		try:
			grp2[c[i]][a[i]]+=1
		except:
			grp2[c[i]][a[i]]=1

	prt=[]
	for i in range(n):
		ky=len(grp2[c[i]].keys())
		if ky>=3:
			prt.append([v[c[i]],(ky-1)*(ky-2)//2,((ky-1)*(ky-2)//2)/v[c[i]],i])
		else:
			prt.append([v[c[i]],0,0])
	prt=sorted(prt,key=lambda el:(el[2],el[1],el[0]),reverse=True)
	nw=[{} for i in range(cc)]
	for i in prt:
		if k-i[0]>=0:
			k-=i[0]
		else:
			try:
				nw[c[i[-1]]][a[i[-1]]]+=1
			except:
				nw[c[i[-1]]][a[i[-1]]]=1
	
	ans=0
	for i in nw:
		ky=len(i.keys())
		if ky>=3:
			ans+=(ky*(ky-1)*(ky-2))//2//3
	print(ans)