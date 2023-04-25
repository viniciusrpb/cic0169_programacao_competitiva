/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva 
 * Prof. Dr. Vinicius R. P. Borges
 * 
 * Tópico: Estruturas de Dados, biblioteca STL, Pilha 
 * Funcao desse programa: apresentar metodos da classe Stack
 * 
 * Compilar: g++ stl_stack.cpp -std=c++17 -o pilha
 * Executar: ./pilha
 */

#include<bits/stdc++.h>

using namespace std;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<int> pilha;

    /* O(1): Empilhar, colocar novo elemento no topo da pilha */
    pilha.push(6);
    pilha.push(10);
    pilha.push(3);
    pilha.push(8);

    /* O(1): pegar a quantidade de elementos da pilha e verificar se a pilha eh vazia */
    if(pilha.empty()){
        cout << "Pilha vazia\n";
    }
    else{
        cout << "Pilha contem " << pilha.size() << " elementos\n";
    }

    while(!pilha.empty()){
        /* O(1): retornar o elemento que estah no topo da pilha */
        int elemRemovido = pilha.top();

        cout << elemRemovido << "\n";

        /* O(1): desempilhar, remover o elemento do topo da pilha */
        pilha.pop();
    }

    return 0;

}
