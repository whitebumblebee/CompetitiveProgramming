// problem C of contest 042
//  the link for problem : https://atcoder.jp/contests/abc042/tasks/arc058_a

#include <iostream>
using namespace std;
int d[10];
bool c(int n)
{
    while(n>0){
    int t = n%10;
    if(d[t]==1)
    {
        return false;
    }
    n/=10;
    }
    return true;

}
int main()
{
    int N,K;
    cin>>N>>K;
    for(int i=0;i<K;i++)
    {
        int t;
        cin>>t;
        d[t]=1;
    }
    while(true)
    {
        if(c(N))
        {
            cout<<N;
            return 0;
        }
        N++;
    }


    return 0;
}