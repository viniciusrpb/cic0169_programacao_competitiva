/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva 
 * Prof. Dr. Vinicius R. P. Borges
 * 
 * Tópico: Operadores bitwise e bitmasks
 * Aula: Resolucao do problema 
 *                     Codeforces Round #803 (Div. 2) - A. XOR Mixup (https://codeforces.com/problemset/problem/1698/A)
 * 
 * POR FAVOR: nao submeter esse código-fonte diretamente no Codeforces
 * 
 * Compilar no terminal: g++ 1698a_xor_mixup.cpp -std=c++11 -o mixup
 * Executar: ./mixup
 */

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,ans,a;
    
    scanf("%d",&t);
    
    while(t--)
    {
        scanf("%d",&n);
        
        ans = 0;
        
        for(int i = 0; i < n-1; i++)
        {
            scanf("%d",&a);
            ans^=a;
        }
        scanf("%d",&a);
        printf("%d\n",ans);
    }
    return 0;
}
