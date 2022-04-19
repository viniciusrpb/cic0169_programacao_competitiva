#include<bits/stdc++.h>

using namespace std;

// n = 10^5, O(n^2)
bool two_sum_naive(vector<int> v, int s)
{
    int n = v.size();
    
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(v[i]+v[j] == s)
            {
                return true;
            }
        }
    }
    return false;
}

// O(n)
bool two_sum_2p(vector<int> v, int s)
{
    int n = v.size();
    
    int l = 0; // l apenas aumenta de valor. Direcao: movimento para a direita
    int r = n-1;  // r apenas diminui de valor. Direcao: movimento para a esquerda
    
    while(l < r)
    {
        if(v[l]+v[r] < s)
            l++;
        else
            if(v[l]+v[r] > s)
                r--;
            else
                return true;
    }
    return false;    
}

int main()
{
    vector<int> v = {1,3,5,6,7,9};
    int s;
    int n = v.size();
    
    scanf("%d",&s);
    
    if(two_sum_naive(v,s))
        printf("Sim\n");
    else
        printf("Nao\n");
    
    if(two_sum_2p(v,s))
        printf("Sim\n");
    else
        printf("Nao\n");
    
    return 0;
}
