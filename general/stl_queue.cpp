/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva 
 * Prof. Dr. Vinicius R. P. Borges
 * 
 * Tópico: Estruturas de Dados, biblioteca STL, Fila
 *    Funcao desse programa: apresentar metodos da classe Queue da STL
 * 
 * Compilar: g++ stl_queue.cpp -std=c++11 -o fila
 * Executar: ./fila
 */

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    queue<int> fila;
    
    if(fila.empty())
        printf("Fila estah vazia\n");
    
    /* push: enfileirar o 6 : inserir 6 no final da fila*/
    fila.push(6);
    
     if(!fila.empty())
        printf("Fila nao estah vazia\n");
    
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
    {
        fila.push(i+1);
    }
    
    printf("Tamanho da fila: %d\n",(int) fila.size());
    
    printf("Primeiro da fila: %d\n",fila.front());
    
    /* pop: desenfileirar , remover o primeiro elemento da fila */
    fila.pop();
    
    printf("Primeiro da fila: %d\n",fila.front());
    
    for(int i = 0; i <= n; i++)
    {
        int elem = fila.front();
        printf("O bom da vez: %d\n",elem);
        fila.pop();
        fila.push(elem);        
    }
    
    return 0;
}
