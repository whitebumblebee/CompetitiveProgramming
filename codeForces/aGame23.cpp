/*
Polycarp plays "Game 23". Initially he has a number n and his goal is to transform it to m. In one move, he can multiply n by 2 or multiply n by 3. He can perform any number of moves.

Print the number of moves needed to transform n to m. Print -1 if it is impossible to do so.

It is easy to prove that any way to transform n to m contains the same number of moves (i.e. number of moves doesn't depend on the way of transformation).

Input
The only line of the input contains two integers n and m (1≤n≤m≤5⋅108).

Output
Print the number of moves to transform n to m, or -1 if there is no solution.



*/
#include <iostream>
using namespace std;
int main()
{
	int n,m,flag,count;
	cin>>n>>m;
	if(n==m){
		cout<<"0";
		return 0;
	}
	else
	{
	 count=0;
		flag=0;
		while(m!=n){
		if(m%(n*2)==0){
		m=m/2;
		count++;
		}
		else if(m%(n*3)==0){
			m=m/3;
			count++;
		}
		else{
			flag=1;
			break;
		}
		}
	}
	if(flag==1)
		cout<<"-1";
	else
		cout<<count;
	return 0;
}