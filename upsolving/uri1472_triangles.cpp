/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva 
 * Prof. Dr. Vinicius R. P. Borges
 * 
 * Tópico: Divisão e conquista, busca binária
 * Aula: resolução do problema "Triangles" (https://www.urionlinejudge.com.br/judge/en/problems/view/1472)
 * 
 * POR FAVOR: nao submeta esse código-fonte no URI! 
 * 
 * Compilar no terminal: g++ uri1472_triangles.cpp -std=c++11 -o triangulos
 * Executar: ./triangulos
 */

#include<bits/stdc++.h>

using namespace std;

int binsearch(vector<int> v,int inicio, int fim, int x)
{
    int l,r,mid;
    l = inicio;
    r = fim;
    
    while(l<=r)
    {
        mid =(l+r)/2;
        if(v[mid]== x)
            return mid;
        else
            if(v[mid] > x)
                r = mid-1;
            else
                l = mid+1;
    }
    return -1;
}

int main()
{
    int n,arco,ans;
    vector<int> psum(100002,0);
    
    scanf("%d",&n);
    
    scanf("%d",&arco);
    
    psum[0] = arco;
    for(int i = 1; i < n; i++)
    {
        scanf("%d",&arco);
        psum[i] = psum[i-1]+arco;
    }
    
    if(psum[n-1]%3 == 0)
    {
        arco = psum[n-1]/3;
        ans = 0;
        
        for(int i = 0; i < n; i++)
        {
            if(binsearch(psum,0,n-1,psum[i]+arco) >-1)
                if(binsearch(psum,0,n-1,psum[i]+2*arco) >-1)
                    ans++;   
        }
    }
    
    printf("%d\n",ans);
    
    return 0;
}
