/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva
 * Prof. Dr. Vinicius R. P. Borges
 *
 * Tópico: Busca Binária
 * Aula: Resolucao do problema
 *                     Codeforces Round #393 (Div. 2) - B. Frodo and pillows (https://codeforces.com/problemset/problem/760/B)
 *
 * POR FAVOR: nao submeter esse código-fonte diretamente no Codeforces
 *
 * Compilar no terminal: g++ 760b_frodo_pillows.cpp -std=c++11 -o frodo
 * Executar: ./frodo
 * Complexidade: O(log m) no tempo
 */

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int n,m,k;

ll maisouiguaiscamas(ll x, ll k){
    return ((x+1)*x)/2 + k - x;
}

ll maistravesseiros(ll x, ll k){
    return ((2*x-k+1)*k)/2;
}

bool check(ll x)
{
    ll soma = 0;
    /*Bloco 1: camas de 1,2,...,k (Frodo) */
    // tenho mais camas do que travesseiros
    if(x <= k){
        soma += maisouiguaiscamas(x,k);
    }
    else{
        // tenho menos camas do que travesseiros
        soma += maistravesseiros(x,k);
    }

    /*Bloco 2: camas de k+1,k+2,...,n */
    // tenho mais camas do que travesseiros
    if(x-1 <= n-k){
        soma+= maisouiguaiscamas(x-1,n-k);
    }
    else{
        soma+= maistravesseiros(x-1,n-k);
    }
    return soma <= m; // se eh resposta valida
    // soma > m, a resposta eh invalida
}

int main()
{
    int l,r,mid,ans;
    scanf("%d %d %d",&n,&m,&k);

    l = 1;
    r = m;
    ans = -1;

    while(l <= r){
        mid = (l+r)/2;
        // eh uma resposta aceitavel?
        if(check(mid) == true)
        {
            ans = mid;
            l = mid+1; // dah para encontrar resposta melhor?
        }
        else
        {
            r = mid-1;
        }
    }
    printf("%d\n",ans);
    return 0;
}
