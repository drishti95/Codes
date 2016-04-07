import sys
t= raw_input();
t=(int)t
for i in range(0,t):
    list=[]
    w=""
    s=raw_input()
    for j in s:
        if j in 'abcdefghijklmnopqrstuvwxyz':
            w=w+j
        elif j in '+-*/^%':
            list.append(j)
        elif j==')':
            w=w+list.pop()
    print w
