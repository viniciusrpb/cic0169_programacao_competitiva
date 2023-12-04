/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva
 * Prof. Dr. Vinicius R. P. Borges
 *
 * Tópico: Busca Binária na Resposta
 * Aula: Resolucao do problema
 *                     Codeforces Round 417 (Div. 2) - C. Sagheer and Nubian Market (https://mirror.codeforces.com/contest/812/problem/C)
 *
 * POR FAVOR: nao submeter esse código-fonte diretamente no Codeforces
 *
 * Compilar no terminal: g++ 812c_sagheer_nubian_market.cpp -std=c++17 -o sagheer
 * Executar: ./sagheer
 * Complexidade: O(log (nlog(n)) no tempo
 */

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int n,S,k,l,r,mid,aux;
    ll T,total_custo;
    vector<ll> a;

    scanf("%d %d",&n,&S);

    for(int i = 0; i < n; i++){
        scanf("%d",&aux);
        a.push_back(aux);
    }

    l = 1;
    r = n;
    k = 0;
    T = 0;

    while(l<=r){
        mid = (l+r)/2; // chute do valor k

        vector<ll> custo;
        for(int i = 0; i < n; i++){
            custo.push_back(a[i]+((ll) (i+1)* (ll) mid));
        }

        sort(custo.begin(),custo.end());
        // ordenado: consigo maximizar a quantidade
        // de itens comprados
        total_custo = 0;
        for(int i = 0; i < mid; i++){
            total_custo+=custo[i];
        }

        if(total_custo <= S){ // mid eh um bom chute?
            // total_custo eh uma resposta valida
            k = mid;
            T = total_custo;
            l = mid+1; // tentar encontrar uma resposta melhor, aumentar k
        }else
            r = mid-1; // diminuir o chute
    }
    
    printf("%d %lld\n",k,T);
    
    return 0;
}

