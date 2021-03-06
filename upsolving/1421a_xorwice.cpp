/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva 
 * Prof. Dr. Vinicius R. P. Borges
 * 
 * Tópico: Operadores bitwise e bitmasks
 * Aula: Resolucao do problema 
 *                     Codeforces Round #676 (Div. 2) - A. XORwice (https://codeforces.com/problemset/problem/1421/A)
 * 
 * POR FAVOR: nao submeter esse código-fonte diretamente no Codeforces
 * 
 * Compilar no terminal: g++ 1421a_xorwice.cpp -std=c++17 -o cf_xorwice
 * Executar: ./cf_xorwice
 * Complexidade: O(t) no tempo
 */


#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t,a,b;
    
    scanf("%d",&t);
    
    while(t--)
    {
        scanf("%d %d",&a,&b);
        printf("%d\n",(a^(a&b))+(b^(a&b)));
    }
    
    return 0;
}
