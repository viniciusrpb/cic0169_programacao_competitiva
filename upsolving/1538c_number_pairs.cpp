/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva
 * Prof. Dr. Vinicius R. P. Borges
 *
 * Tópico: Busca Binária
 * Aula: Resolucao do problema
 *                     Codeforces Round #725 (Div. 3) - C. Number of Pairs (https://codeforces.com/contest/1538/problem/C)
 *
 * POR FAVOR: nao submeter esse código-fonte diretamente no Codeforces
 *
 * Compilar no terminal: g++ 1538c_number_pairs.cpp -std=c++17 -o np
 * Executar: ./np
 * Complexidade: O(t*(n + n log n + 2(log n))) no tempo
 */

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int t,n,l,r,aux,lb,ub;
    ll ans;
    
    scanf("%d",&t);
    
    while(t--){
        
        scanf("%d %d %d",&n,&l,&r);
        
        vector<int> a;
        for(int i = 0; i < n; i++){
            scanf("%d",&aux);
            a.push_back(aux);
        }
        
        sort(a.begin(),a.end());
        
        ans = 0;
        
        for(int i = 0; i < n; i++){
            int lb = lower_bound(a.begin()+i+1,a.end(),l-a[i]) - a.begin();
            int ub = upper_bound(a.begin()+i+1,a.end(),r-a[i]) - a.begin();
            ans+=(ub-lb);
        }
        
        printf("%lld\n",ans);
        
    }
    return 0;
}
