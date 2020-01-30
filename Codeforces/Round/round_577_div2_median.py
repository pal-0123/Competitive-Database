temp=input()
temp=temp.split(' ')
n=int(temp[0])
k=int(temp[1])
temp=input()
temp=temp.split(' ')
a=[]
for i in range(n):
    a.append(int(temp[i]))

a.sort()
mid=int(n/2)
move=0
j=mid
i=mid+1
while(i<n):

    if (move+(a[i]-a[i-1])*(i-mid)<=k):
        move=move+(a[i]-a[i-1])*(i-mid)
        j=i
    else:
        break
    i+=1
left=k-move
ans=a[j]
ans+=int(left/(j-mid+1))
print(ans)
