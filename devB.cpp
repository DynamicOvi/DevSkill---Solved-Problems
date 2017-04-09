#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,caseno=0,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1)
            printf("%lld 000\n",n);
        else if(n==2)
            printf("%lld 010\n",n);
        else
            printf("%lld 110\n",n);
    }
    return 0;
}

