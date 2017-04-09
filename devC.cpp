
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,caseno=0;
    cin>>t;
    while(t--)
    {
        char s[33];
        scanf("%s",&s);
        int pos,f1=0,fz=0,i,len=strlen(s);
        for(i=0;i<len;i++)
        {
            if(s[i]=='1')
            {
                f1=1;
                break;
            }
        }
        for(i=0;i<len;i++)
        {
            if(s[i]=='0')
            {
                fz=1;
                break;
            }
        }
        int count=0;
        if(f1==1 && fz==1)
        {
            while(1)
            {
                int pos1=-1,posz=-1;
                for(i=0;i<len;i++)
                {
                    if(s[i]=='1')
                    {
                        pos1=i;
                        break;
                    }
                }
                for(i=len-1;i>=0;i--)
                {
                    if(s[i]=='0')
                    {
                        posz=i;
                        break;
                    }
                }
                if(pos1<posz)
                {
                    char st[posz-pos1+1];
                    int p=0;
                    for(i=posz;i>=pos1;i--)
                    {
                        st[p]=s[i];
                        p++;
                    }
                    p=0;
                    for(i=pos1;i<=posz;i++)
                    {
                        s[i]=st[p];
                        p++;
                    }
                    count++;
                }
                else
                    break;
            }
        }
        if(count%2==0)
            printf("Bob\n");
        else
            printf("Alice\n");
    }
    return 0;
}
