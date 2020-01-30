# t=int(input())
t=1
vow=["a","e","i","o","u"]

while t:
	t=t-1
	# n=int(input())
	n=3
	d=["aaooaoaooa","uiieieiieieuuu","aeioooeeiiaiei"]
	# d=[]
	# for i in range(n):
	# 	temp=input()
	# 	d.append(temp)
	countin={}
	countnotin={}

	countin["a"]=0
	countin["e"]=0
	countin["i"]=0
	countin["o"]=0
	countin["u"]=0
	countin["ae"]=0
	countin["ai"]=0
	countin["ao"]=0
	countin["au"]=0
	countin["ei"]=0
	countin["eo"]=0
	countin["eu"]=0
	countin["io"]=0
	countin["iu"]=0
	countin["ou"]=0
	countin["aei"]=0
	countin["aeo"]=0
	countin["aeu"]=0
	countin["aio"]=0
	countin["aiu"]=0
	countin["aou"]=0
	countin["eio"]=0
	countin["eiu"]=0
	countin["eou"]=0
	countin["iou"]=0
	countin["aeio"]=0
	countin["aeiu"]=0
	countin["aeou"]=0
	countin["aiou"]=0
	countin["eiou"]=0
	countin["aeiou"]=0

	countnotin[""]=0
	countnotin["a"]=0
	countnotin["e"]=0
	countnotin["i"]=0
	countnotin["o"]=0
	countnotin["u"]=0
	countnotin["ae"]=0
	countnotin["ai"]=0
	countnotin["ao"]=0
	countnotin["au"]=0
	countnotin["ei"]=0
	countnotin["eo"]=0
	countnotin["eu"]=0
	countnotin["io"]=0
	countnotin["iu"]=0
	countnotin["ou"]=0
	countnotin["aei"]=0
	countnotin["aeo"]=0
	countnotin["aeu"]=0
	countnotin["aio"]=0
	countnotin["aiu"]=0
	countnotin["aou"]=0
	countnotin["eio"]=0
	countnotin["eiu"]=0
	countnotin["eou"]=0
	countnotin["iou"]=0
	countnotin["aeio"]=0
	countnotin["aeiu"]=0
	countnotin["aeou"]=0
	countnotin["aiou"]=0
	countnotin["eiou"]=0
	countnotin["aeiou"]=0

	for i in d:
		pres=[0,0,0,0,0]
		if "a" in i:
			# print(i)
			pres[0]=1
		if "e" in i:
			pres[1]=1
		if "i" in i:
			pres[2]=1
		if "o" in i:
			pres[3]=1
		if "u" in i:
			pres[4]=1
		x=""
		# print(pres)
		for j in range(5):
			if pres[j]==1:		
				for l in range(j,5):
					if pres[l]==1:
						z=""
						for k in range(j,l+1):
							if pres[k]==1:
								z+=vow[k]
						countin[z]+=1
						print(i,l,k,z,countin[z])
			else:
				x+=vow[j]
		
		countnotin[x]+=1

	tsum=0
	key=countin.keys()

	for i in key:
		# print(i,countin[i],countnotin[i])
		tsum+=(countin[i]*countnotin[i])
	print(tsum)
	tsum+=(countin["aeiou"]*(n-countin["aeiou"]))
	tsum/=2
	tsum=int(tsum)
	print (tsum)
