t=int(input())
for zz in range(t):
    temp=input()
    temp=temp.split(" ")
    n=int(temp[0])
    m=int(temp[1])
    ntemp=int(n/2)
    if n==1:
        print(0)
    elif n==2:
        print(m)
    # elif m>ntemp:
    #     print((n-1)*int((m/ntemp))+2*(m%ntemp))
    else:
        # print(2*m)
        print(int(m*2*m/n))