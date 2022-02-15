/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva 
 * Prof. Dr. Vinicius R. P. Borges
 * 
 * Tópico: Estruturas de Dados
 * Aula: Resolucao do problema 
 *                     Codeforces Round 200 (Div. 1) - B. Alternating Current (https://codeforces.com/contest/343/problem/B)
 * 
 * POR FAVOR: nao submeter esse código-fonte diretamente no Codeforces
 * 
 * Compilar no terminal: g++ 343b_alternating_current.cpp -std=c++11 -o corrente
 * Executar: ./corrente
 */


#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    string str;
    stack<char> pilha;

    cin >> str;
    
    for(int i = 0; i < str.size(); i++)
    {
        if(pilha.empty())
            pilha.push(str[i]);
        else
            if(pilha.top() == str[i])
                pilha.pop();
            else
                pilha.push(str[i]);
    }
    
    if(pilha.empty())
        printf("Yes\n");
    else
        printf("No\n");
    
    
    return 0;
}
