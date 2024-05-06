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
    int t,n,l,r;

    scanf("%d",&t);

    while(t--){
        scanf("%d",&n);
        queue<pii> fila;
        int linhatempo = 0;
        for(int i = 0; i < n; i++){
            scanf("%d %d",&l,&r);
            //{l,r} = make_pair(l,r)
            fila.push(make_pair(l,r));
        }

        while(!fila.empty()){
            /*pii atual = fila.front();
            l = atual.first;
            r = atual.second;*/
            tie(l,r) = fila.front();
            fila.pop();

            if(linhatempo <= l){
                linhatempo = l;
                printf("%d ",l);
                linhatempo++; //tempo de uso do bule
            }else{
                if(linhatempo <= r){ // valeu a pena esperar
                    printf("%d ",linhatempo);
                    linhatempo++;
                }else // saiu da fila sem o cha
                    printf("0 ");
            }
        }
        printf("\n");

    }
    return 0;
}
