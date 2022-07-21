/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva 
 * Prof. Dr. Vinicius R. P. Borges
 * 
 * Tópico: Fundamentos de Linguagem C++
 * Aula: Resolucao do problema 
 *                     Codeforces Beta Round #47 - A. Domino piling (https://codeforces.com/problemset/problem/50/A)  
 * 
 * POR FAVOR: nao submeter esse código-fonte diretamente no Codeforces
 * 
 * Compilar no terminal: g++ 50a_domino_piling.cpp -std=c++17 -o domino
 * Executar: ./domino
 * Complexidade: O(1) no tempo
 */

#include<bits/stdc++.h>
 
using namespace std;
 

int main()
{   
    int m,n,menor,maior,ans;
    
    scanf("%d %d",&m,&n);
    
    maior = max(m,n);
    menor = min(m,n);
    
    ans = (maior/2)*menor + (menor/2)*(maior%2);
    
    printf("%d\n",ans);
    
    return 0;
}
