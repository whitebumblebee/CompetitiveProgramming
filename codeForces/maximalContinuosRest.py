N=int(input())
l=input().split()
s=''.join(l) 
s1=s*2
max=0
count=0
for i in range(1,len(s1)):
    
    if s1[i]=='1' and s1[i-1]=='1':
        count+=1
        if(count>max):
            max=count
    else:
        count=0
if(max>0):
    print(max+1)
elif '1' in s:
    max=1
    print(max)
else:
    print(max)