#include<bits/stdc++.h>

using namespace std;

int max_substr_naive(string s)
{
    int n = s.size();
    int temp,ans;
    
    ans = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            //substring [i..j]
            temp = 0;
            for(int k = i; k <= j; k++)
            {
                if(s[k] > s[k-1])
                    temp++;
                else
                    temp = 1;
            }
            ans = max(ans,temp);            
        }
    }
    return ans;
}

int max_substr_2p(string s)
{
    int n = s.size();
    int temp,ans;
    int l = 0;
    int r;
    
    ans = 0;
    
    while(l < n)
    {
        r = l+1;
        while(r < n && s[r] > s[r-1])
            r++;
        ans = max(ans,r-l);
        l = r;
    }
    
    return ans;
}

int main()
{
    string s = "leracinojo";
    string s2 = "abcdef";
    string s3 = "fedcba";

    printf("%d\n",max_substr_naive(s2));
    
    printf("%d\n",max_substr_2p(s2));

    return 0;
}
