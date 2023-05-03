/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva 
 * Prof. Dr. Vinicius R. P. Borges
 * 
 * Tópico: Estruturas de Dados
 * Aula: Resolucao do problema 
 *                     Beecrowd 1523 - Estacionamento Linear (https://www.beecrowd.com.br/judge/pt/problems/view/1523)
 * 
 * POR FAVOR: nao submeter esse código-fonte diretamente no Beecrowd
 * 
 * Compilar no terminal: g++ beecrowd_1523.cpp -std=c++17 -o carros
 * Executar: ./carros
 * 
 * Complexidade: O(2n)  => Cada carro entra na pilha (estacionamento) uma única vez, como também sai uma única vez.                       
 *                         Como a quantidade n de carros é referência do tamanho da entrada e as operações básicas
 *                         da pilha (push e pop) são executadas em tempo O(1), a complexidade depende da quantidade
 *                         total de operações feitas na pilha. Considerando push e pop, O(2n). 
 */

#include<bits/stdc++.h>

using namespace std;

int main(){

    int n,k,c,s;

    scanf("%d %d",&n,&k);

    while(n || k){

        stack<int> estacionamento;
        bool flag = true;

        for(int i = 0; i < n; i++){

            scanf("%d %d",&c,&s);

            while(!estacionamento.empty() and estacionamento.top() <= c){
                estacionamento.pop();
            }

            if(estacionamento.size() >= k){
                flag = false;
            }else{
                if(estacionamento.empty()){
                    estacionamento.push(s);
                }
                else{
                    if(estacionamento.top() > s){
                        estacionamento.push(s);
                    }else{
                        flag = false;
                    }
                }
            }
        }

        if(flag == false)
            printf("Nao\n");
        else
            printf("Sim\n");

        scanf("%d %d",&n,&k);
    }
 
    return 0;
}
