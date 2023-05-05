/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva
 * Prof. Dr. Vinicius R. P. Borges
 *
 * Tópico: Estruturas de Dados Lineares
 * Aula: Resolucao do problema
 *                     Educational Codeforces Round 37 (Rated for Div. 2) - B. Tea Queue (https://codeforces.com/problemset/problem/920/B)
 *
 * POR FAVOR: nao submeter esse código-fonte diretamente no Codeforces
 *
 * Compilar no terminal: g++ 920b_tea_queue.cpp -std=c++17 -o fila
 * Executar: ./fila
 * Complexidade: O(t*2*n) no tempo
 */

#include<bits/stdc++.h>

using namespace std;

typedef pair<int,int> pii;

int main(){

    int t,n,l,r,ans,time;

    scanf("%d",&t);

    while(t--){
        scanf("%d",&n);

        queue<pii> fila;

        for(int i = 0; i < n; i++){
            scanf("%d %d",&l,&r);
            fila.push({l,r});
        }

        time = 1;

        while(!fila.empty()){
            pii atual = fila.front();
            fila.pop();
            
            if(atual.first >= time){
                time = atual.first;
                printf("%d ",time++);
            }else{
                if(atual.second >= time){
                    printf("%d ",time++);
                else
                    printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}
