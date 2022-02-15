/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva 
 * Prof. Dr. Vinicius R. P. Borges
 * 
 * Tópico: Estruturas de Dados, biblioteca STL, Pilha 
 * Funcao desse programa: apresentar metodos da classe Stack
 * 
 * Compilar: g++ stl_stack.cpp -std=c++11 -o pilha
 * Executar: ./pilha
 */

#include<bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> pilha;
    
    if(pilha.empty())
        printf("Pilha estah vazia\n");
    
    /*push: empilha, insere o elemento no topo*/
    pilha.push(5);
    
    if(!pilha.empty())
        printf("Pilha nao estah vazia\n");
    
    printf("Elemento do topo: %d\n",pilha.top());
    
    for(int i = 0; i < 4; i++)
    {
        pilha.push(2*(i+1));
    }
    
    printf("Elemento do topo: %d\n",pilha.top());
    printf("Num de elementos na pilha: %d\n",(int) pilha.size());
    
    while(!pilha.empty())
    {
        printf("Elemento do topo: %d\n",pilha.top());
        pilha.pop();
    }
    
    printf("Elemento do topo: %d\n",pilha.top());
    
    return 0;
}
