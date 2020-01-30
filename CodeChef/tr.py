n=int(input())
for i in range (n):
    for j in range (n):
        print (5-min(i,j,n-1-i,n-1-j),end=" ")
    print ()
