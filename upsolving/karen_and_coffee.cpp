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
 * Compilar no terminal: g++ karen_and_coffee.cpp -std=c++11 -o cafe
 * Executar: ./cafe
 */

#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
int main()
{
    int n,k,q,a,b,atual;
    
    vector<ll> receitas(200002,0); // histograma de temperaturas
    vector<ll> delta(200002,0);
    vector<ll> aceitavel(200002,0);
    
    scanf("%d %d %d",&n,&k,&q);
    
    // O(n) - 2x10^5
    for(int i = 0; i < n; i++)
    {
        scanf("%d %d",&a,&b);
        delta[a]++;
        delta[b+1]--;
    }
    
    // psum: qtde de receitas em cada temperatura
    atual = 0;
    for(int i = 1; i < 200002; i++)
    {
        atual = atual + delta[i];
        receitas[i] = atual;
    }
    
    // pegar a qtde de temperaturas aceitaveis dentro de intervalos [a,b]
    aceitavel[0] = receitas[0];
    for(int i = 1; i < 200002; i++)
    {
        if(receitas[i] >= k) // existem no min k receitas indicando a temp i?
            aceitavel[i] = aceitavel[i-1]+1;
        else
            aceitavel[i] = aceitavel[i-1];
    }
    
    
    for(int qq = 1; qq <= q; qq++)
    {
        scanf("%d %d",&a,&b);
        printf("%lld\n",aceitavel[b]-aceitavel[a-1]);
    }
    
    return 0;
}
