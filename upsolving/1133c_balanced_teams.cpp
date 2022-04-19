#include<bits/stdc++.h>

using namespace std;

int solve(vector<int> s)
{
    int n = s.size();
    int temp,ans;
    int l = 0;
    int r;
    
    ans = 0;
    
    for(l = 0; l < n; l++) 
    {
        while(r < n && (s[r]-s[l] <= 5))
            r++;
        ans = max(ans,r-l);
    }
    
    return ans;
}

int main()
{
    int n;
    
    vector<int> a;
    
    scanf("%d",&n);
    
    for(int i = 0; i < n;i++)
    {
        int aux;
        scanf("%d",&aux);
        a.push_back(aux);
    }
    
    sort(a.begin(),a.end());
    
    printf("%d\n",solve(a));

    return 0;
}
