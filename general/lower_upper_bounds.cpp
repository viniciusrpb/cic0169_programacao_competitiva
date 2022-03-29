/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva 
 * Prof. Dr. Vinicius R. P. Borges
 * 
 * Tópico: Divisão e conquista: Busca Binária
 * Esse código-fonte está associado à implementação de lower_bound e upper_bound
 * 
 * Compilar no terminal: g++ lower_upper_bounds.cpp -std=c++11 -o bounds
 * Executar: ./bounds
 */

#include<bits/stdc++.h>

using namespace std;

int lower_bound_fake(vector<int> v, int key)
{
    int l,r,mid,ans;
    
    l = 0;
    r = v.size()-1;
    ans = r+1;
    
    while(l <= r)
    {
        mid = (l+r)/2;
        if(key <= v[mid])
        {
            ans = mid;
            r = mid-1;
        }
        else
            l = mid+1;
    }
    
    if(ans == v.size())
        return -1;
    
    return ans;
}

int upper_bound_fake(vector<int> v, int key)
{
    int l,r,mid,ans;
    
    l = 0;
    r = v.size()-1;
    ans = r+1;
    
    while(l <= r)
    {
        mid = (l+r)/2;
        if(key < v[mid])
        {
            ans = mid;
            r = mid-1;
        }
        else
            l = mid+1;
    }
    if(ans == v.size())
        return -1;
    
    return ans;
}

int main()
{
    int n,aux,key,q,posl,posu,posf;
    
    vector<int> v = {1,3,3,3,4,5,5,7};
    
    n = v.size();
    
    /*
    scanf("%d %d",&n,&q);
    
    for(int i = 0; i < n;i++)
    {
        scanf("%d",&aux);
        v.push_back(aux);
    }
    
    sort(v.begin(),v.end());
    */
    
    scanf("%d",&q);
    
    while(q--)
    {
        scanf("%d",&key);
        posl = lower_bound(v.begin(),v.end(),key) - v.begin();
        posf = lower_bound_fake(v,key);
        
        printf("Lower bound: %d\nFake lower bound: %d\n\n",posl,posf);
        
        posu = upper_bound(v.begin(),v.end(),key) - v.begin();
        posf = upper_bound_fake(v,key);
        
        printf("Upper bound: %d\nFake lower bound: %d\n\n",posu,posf);
    }
    
    return 0;
}
