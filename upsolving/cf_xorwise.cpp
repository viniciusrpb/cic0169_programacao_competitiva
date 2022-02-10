/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva 
 * Prof. Dr. Vinicius R. P. Borges
 * 
 * Tópico: Operadores bitwise e bitmasks
 * Aula: Resolucao do problema 
 *                     Codeforces Round #676 (Div. 2) - A. XORwise (https://codeforces.com/problemset/problem/1421/A)
 * 
 * POR FAVOR: nao submeter esse código-fonte diretamente no Codeforces
 * 
 * Compilar no terminal: g++ cf_xorwise.cpp -std=c++11 -o cf_xorwise
 * Executar: ./cf_xorwise
 */


#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int x,t,a,b;
    
    scanf("%d",&t);
    
    while(t--)
    {
        scanf("%d %d",&a,&b);
        x = a&b;
        printf("%d\n",(a^x)+(b^x));
    }
    
    return 0;
}
