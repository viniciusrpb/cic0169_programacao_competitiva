/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva 
 * Prof. Dr. Vinicius R. P. Borges
 * 
 * Tópico: Soma de Prefixos e Delta Encoding
 * Aula: Resolucao do problema 
 *                     Codeforces round 179 (Div 1) - A. Greg and Array (https://codeforces.com/problemset/problem/295/A)
 * 
 * POR FAVOR: nao submeter esse código-fonte diretamente no Codeforces
 * 
 * Compilar no terminal: g++ greg_array.cpp -std=c++11 -o greg
 * Executar: ./greg
 */

#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef tuple<int,int,int> tii;
 
int main()
{
    int n,m,k,l,r,x,y,d;
    vector<int> arr;
    
    scanf("%d %d %d",&n,&m,&k);
    
    arr.push_back(0);
    for(int i = 0; i < n; i++)
    {
        int aux;
        scanf("%d",&aux);
        arr.push_back(aux);
    }
    
    vector<ll> delta(m+2,0);
    vector<ll> delta2(n+2,0);
    vector<ll> psum(m+2,0);
    vector<ll> number_of_op(m+2,0);
    vector<tii> queries;
    
    queries.push_back(make_tuple(0,0,0));
    for(int i = 0; i < m; i++)
    {
        scanf("%d %d %d",&l,&r,&d);
        queries.push_back(make_tuple(l,r,d));
    }
    
 
    for(int c = 0; c < k; c++)
    {
        scanf("%d %d",&x,&y);
        delta[x]++;
        delta[y+1]--;
    }
    
    ll atual = 0;
    for(int i = 1; i <= m; i++)
    {
        atual = atual + delta[i];
        number_of_op[i] = atual;
    }
    
    for(int i = 1; i <= m; i++)
    {
        l = get<0>(queries[i]);
        r = get<1>(queries[i]);
        d = get<2>(queries[i]);
        delta2[l] = delta2[l]+((ll) d)*number_of_op[i];
        delta2[r+1] = delta2[r+1]-((ll) d)*number_of_op[i];
    }
    
    ll ans=0;
    atual =0;
    for(int i = 1; i <= n; i++)
    {
        atual = atual + delta2[i];
        ans = atual + arr[i];
        printf("%lld ",ans);
    }
    printf("\n");
    
    return 0;
}
