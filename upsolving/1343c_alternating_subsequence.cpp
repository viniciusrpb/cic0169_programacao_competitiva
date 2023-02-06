/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva
 * Prof. Dr. Vinicius R. P. Borges
 *
 * Tópico: Two Pointers
 * Aula: Resolucao do problema
 *                     Codeforces Round #725 (Div. 3) - C. Alternating Subsequence (https://codeforces.com/contest/1343/problem/C)
 *
 * POR FAVOR: nao submeter esse código-fonte diretamente no Codeforces
 *
 * Compilar no terminal: g++ 1343c_alternating_subsequence.cpp -std=c++17 -o altsub
 * Executar: ./altsub
 * Complexidade: O(qn) no tempo
 */

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll solve(int *v, int n){
    int l,r,max_elem;
    ll ans;
    
    ans = 0;
    l = 0;
    
    while(l<n){
        r=l+1;
        max_elem = v[l];
        while(r<n and ((v[l] > 0 and v[r] > 0) or (v[l] < 0 and v[r] < 0)) ){
            max_elem = max(max_elem,v[r]);
            r++;
        }
        ans+=max_elem;
        l=r;
    }

    return ans;
}

int main(){
    int n,q;
    
    scanf("%d",&q);
    
    while(q--){
        
        scanf("%d",&n);
        
        int v[n+1];
        
        for(int i = 0; i < n; i++){
            scanf("%d",v+i);
        }
        
        printf("%lld\n",solve(v,n));
    }
    
    return 0;
}
