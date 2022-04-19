#include<bits/stdc++.h>

using namespace std;

bool three_sum_2p(vector<int> v, int s, int *al, int *ar, int *ak)
{
    int n = v.size();
    int l,r;
    
    for(int k = 0; k < n; k++)
    {
        l = k+1;
        r = n-1;
        while(l<r)
        {
            if(v[k]+v[l]+v[r] < s)
                l++;
            else
                if(v[k]+v[l]+v[r] > s)
                    r--;
                else
                {
                    *al = l;
                    *ar = r;
                    *ak = k;
                    return true;
                }
        }
    }
    return false;
}

int main()
{
    vector<int> v = {1,3,5,6,7,9};
    int s;
    int n = v.size();
    int l,r,k;
    
    scanf("%d",&s);
    
    if(three_sum_2p(v,s,&l,&r,&k))
        printf("Sim: %d %d %d\n",v[l],v[r],v[k]);
    else
        printf("Nao\n");
    
    return 0;
}
