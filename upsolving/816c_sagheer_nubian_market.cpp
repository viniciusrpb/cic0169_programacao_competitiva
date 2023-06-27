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

    int n,l,r,mid,k,aux;
    ll total_cost,s,t;
    vector<ll> base_cost;

    scanf("%d %lld",&n,&s);

    for(int i = 0; i < n; i++){
        scanf("%d",&aux);
        base_cost.push_back(aux);
    }

    l = 1;
    r = n;
    k = 0;
    t = 0;

    while(l<=r){
        mid = (l+r)/2; // chutar o valor de k
        vector<ll> final_cost;

        for(int i = 0; i < n; i++){
            final_cost.push_back(base_cost[i] + (ll) (i+1)*(ll) mid);
        }

        sort(final_cost.begin(),final_cost.end());

        total_cost = 0; // garante-se o custo minimo

        for(int i = 0; i < mid; i++){
            total_cost+=final_cost[i];
        }

        if(total_cost <= s){
            k = mid;
            t = total_cost;
            l = mid+1;
        }else
            r = mid-1;
    }

    printf("%d %lld\n",k,t);
    return 0;
}
