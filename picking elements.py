temp=input()
temp=temp.split(" ")
n=int(temp[0])
m=int(temp[1])
arr=[]
temp=input()
temp=temp.split(" ")
for i in range(n):
	arr.append(int(temp[i]))

divisor=[]
for i in range(100005):
	divisor.append(0)

for i in range(1,100002):
	j=1
	while (i*j<100002):
		divisor[i*j]+=1

arr.sort()
arr2=[]
arr2.append(arr[0])
div=[]
div2=[]
div.append(divisor[arr[0]])
div2.append(divisor[arr[0]])
for i in range(1,n):
	div.append(divisor[arr[i]])
	div2.append(div2[i-1]+divisor[arr[i]])
	arr2.append([arr2[i-1]+arr[i]])
cost=0
count=0
cost=arr[0]+divisor[0]*1
while (cost<=m):
	count+=1
	cost=arr[count]+div2[count]*(count+1)
print count

