#include<bits/stdc++.h>

using namespace std;

int main()
{
    
    int t,n,aux,val,r,l,ans;
    
    while(t--)
    {
        scanf("%d",&n);
        vector<int> v;
        
        for(int i = 0; i < n; i++)
        {
            scanf("%d",&aux);
            v.push_back(aux);
        }
        
        ans= 0;
        l = 0;
        while(l<n-1)
        {
            val = v[l];
            r=l;
            while(r < n && ((val < 0 && v[r] < 0) || (val>0 && v[r]>0)))
            {
                val=max(val,v[r]);
                r++;
            }
            ans+=val;
            l=r-1;
        }
        printf("%d\n",ans);
        
    }

    return 0;
}
