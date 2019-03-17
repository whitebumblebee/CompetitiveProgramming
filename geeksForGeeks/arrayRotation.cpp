/* 
Problem Startement:
Given an array arr[] of N integers. Do the following operation n-1 times. For every Kth operation:

   Right rotate the array clockwise by 1.
   Delete the (n-k+1)th last element.
   Now, find the element which is left at last.
   
Input:
The first line of input contains an integer T denoting the number of test cases. 
Then T test cases follows. Each test case contains two lines. 
The first line of each test case contains an integer N. 
Then in the next line are N space separated values of the array arr[].

Ouput:
For each test case in a new line print the required result.

Constraints:


*/

#include <iostream>
#include <vector>
#include <algorithm>
using std::cout;
using std::cin;
using std::vector;
using namespace std;

int main()
{
	int t,n,num;
	vector <int> v;
	cin>>t;
	for(int i = 0 ; i < t ; i++)
	{
		cin>>n;
		for(int i = 0; i<n ; i++)
		{
			cin>>num;
			v.push_back(num);
		}
		for(int i=1;i<=n-1;i++)
		{
			vector<int>::iterator it = end(v)-i+2;
			iter_swap(begin(v),end(v)-1);
			v.erase(it);
			
		}
		for (auto it = v.begin(); it != v.end(); ++it) 
            cout <<*it; 
		
	}
	return 0;
}