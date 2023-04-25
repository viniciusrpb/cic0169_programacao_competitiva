/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva 
 * Prof. Dr. Vinicius R. P. Borges
 * 
 * Tópico: Estruturas de Dados, biblioteca STL, Pilha 
 * Funcao desse programa: implementacao de uma pilha de maximos
 * 
 * Compilar: g++ stl_max_stack.cpp -std=c++17 -o pilha
 * Executar: ./pilha
 */

#include<bits/stdc++.h>

using namespace std;

typedef pair<int,int> pii;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    stack<pii> pilha_max;
    int aux,n,maior;
    
    cin >> n;
    
    cin >> aux;
    pilha_max.push(make_pair(aux,aux));
    maior = aux;
    
    for(int i = 1; i < n; i++){
        cin >> aux;
        maior = max(aux,pilha_max.top().second);
        pilha_max.push(make_pair(aux,maior));
    }
    
    while(!pilha_max.empty()){
        cout << pilha_max.top().first << " " << pilha_max.top().second << "\n";
        pilha_max.pop();
    }
    
    return 0;
}
