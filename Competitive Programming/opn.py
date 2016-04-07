from sys import stdin
t= int(stdin.readLine())
for i in xrange(t):
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
