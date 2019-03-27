'''
link to the problem statement:
https://www.codechef.com/problems/FRGTNLNG

'''
# cook your code here
# cook your dish here
T=int(raw_input())
for i in range(T):
    N,K = list(map(int,raw_input().split()))
    l=raw_input().split()
    l1=[]
    for i in range(K):
        l1 += raw_input().split()[1:]
    ans= ''
    for i in l:
        if i in l1:
            ans+="YES "
        else:
            ans+="NO "
    print(ans)
