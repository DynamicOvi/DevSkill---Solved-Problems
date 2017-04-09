#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,r,c,caseno=0;
    cin>>t;
    while(t--)
    {
        cin>>r>>c;
        long long int dim=0,dam;
        while(r>=1 && c>=1)
        {
            dim=dim+r*c;
            r--;
            c--;
        }
        dam=dim*15;
        printf("Case %lld: %lld\n",++caseno,dam);
    }
    return 0;
}
