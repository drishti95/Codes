t=input()
for i in range(0,t):
    n=input()
    x=pow(3,n,1000000007)+3*pow(-1,n)
    print x%(1000000007)
