t=input()
for i in range (0,t):
    n=input()
    A=[]
    for j in range (0,n):
        A.append(raw_input())
    s=raw_input()
    for j in range (0,n):
        if(A[j]==s):
          print "yes"
          break
    if(j>n):
      print "no"


