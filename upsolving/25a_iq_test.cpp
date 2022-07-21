/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva 
 * Prof. Dr. Vinicius R. P. Borges
 * 
 * Tópico: Fundamentos de Linguagem C++
 * Aula: Resolucao do problema 
 *                     Codeforces Beta Round #25 (Div. 2 Only) - A. IQ test (https://codeforces.com/problemset/problem/25/A)  
 * 
 * POR FAVOR: nao submeter esse código-fonte diretamente no Codeforces
 * 
 * Compilar no terminal: g++ 25a_iq_test.cpp -std=c++17 -o teste
 * Executar: ./teste
 * Complexidade: O(n) no tempo
 */

#include<bits/stdc++.h>
 
using namespace std;
 
int idVerifica(int p, int s, int t){
 
    if((p % 2 and s % 2 == 0 and t % 2 == 0) or (p % 2 == 0 and s % 2 and t % 2))
        return 1;
    else
        if((p % 2 == 0 and s % 2 and t % 2 == 0) or (p % 2 and s % 2 == 0 and t % 2))
            return 2;
        else
            if((p % 2 == 0 and s % 2 == 0 and t % 2) or (p % 2 and s % 2 and t % 2 == 0))
                return 3;
 
    return -1;
}
 
int main(){
    
    int n,p,s,t,id;
    
    scanf("%d",&n);
    
    scanf("%d",&p);
    
    scanf("%d",&s);
    
    for(int i = 0; i < n-2; i++)
    {
        scanf("%d",&t);
        
        id = idVerifica(p,s,t);
        
        if(id < 0)
        {
            p = s;
            s = t;
        }
        else
        {
            id+=i;
            break;
        }
    }
    printf("%d\n",id);
    
    return 0;
}
