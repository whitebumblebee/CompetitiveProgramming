// Iroha loves Strings
// Link to the problem
// https://atcoder.jp/contests/abc042/tasks/abc042_b

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  vector <string> s;
  string s1;
  int N,L;
  cin>>N>>L;
  
  for(int i=0;i<N;i++)
  {
    cin>>s1;
    s.push_back(s1);
  }
  sort(begin(s),end(s));
  for(string s1:s)
    cout<<s1;

  return 0;
}