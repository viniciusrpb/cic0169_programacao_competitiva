/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva 
 * Prof. Dr. Vinicius R. P. Borges
 * 
 * Tópico: Soma de Prefixos e Delta Encoding
 * Resolucao do problema: 
 *           Codeforces round 419 (Div 2) - B. Karen and Coffee (https://codeforces.com/problemset/problem/816/B)
 * 
 * POR FAVOR: nao submeter esse código-fonte diretamente no Codeforces
 * 
 * Compilar no terminal: g++ 816b_karen_and_coffee.cpp -std=c++11 -o cafe
 * Executar: ./cafe
 */


#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    int n, k,q,l,r,a,b,s,ans;
    vector<ll> temp_receitas(200002,0);
    vector<ll> delta(200002,0);
    vector<ll> aceitaveis_psum(200002,0);
    
    scanf("%d %d %d",&n,&k,&q);
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d %d",&l,&r);
        delta[l]++;
        delta[r+1]--;
    }
    
    // psum: qtde de receitas em cada temperatura
    s = 0;
    for(int i = 1; i < 200002; i++)
    {
        s += delta[i];
        temp_receitas[i] = s; 
    }
    
    // pegar a qtde de temperaturas aceitaveis dentro de intervalos [a,b]
    for(int i = 1; i <= 200002; i++)
    {
        if(temp_receitas[i] >= k) // existem no min k receitas indicando a temp i?
            aceitaveis_psum[i] = aceitaveis_psum[i-1]+1;
        else
            aceitaveis_psum[i] = aceitaveis_psum[i-1];
    }
    
    for(int i = 0; i < q; i++)
    {
        scanf("%d %d",&a,&b);
        printf("%lld\n",aceitaveis_psum[b]-aceitaveis_psum[a-1]);
    }
   
    
    return 0;
}
