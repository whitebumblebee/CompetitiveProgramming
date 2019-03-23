import math
T=int(input())
m=1000000007
 
 
for i in range(T):
  N=int(input())
  if N <= 100000:
      prod=math.factorial(N)
  else:
      prod=int(N%m)
  s=(N*(N+1))//2
  if prod%s==0:
      print("YES")
  else:
      print("NO")