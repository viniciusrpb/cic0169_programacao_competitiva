/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva 
 * Prof. Dr. Vinicius R. P. Borges
 * 
 * Tópico: Operadores bitwise e bitmasks
 * Aula: Resolucao do problema 
 *                     Codeforces Round #306 (Div. 2) - B. Preparing Olympiad (https://codeforces.com/contest/550/problem/B)
 * 
 * POR FAVOR: nao submeter esse código-fonte diretamente no Codeforces
 * 
 * Compilar no terminal: g++ 550b_preparing_olympiad.cpp -std=c++11 -o olimp
 * Executar: ./olimp
 * 
 * Complexidade: O(2^n)
 */

#include<bits/stdc++.h>
 
using namespace std;
 
int l,r,x,n;
vector<int> problems;
 
int busca_completa(int bitmask, int atual, int qt, int soma, int menor, int maior)
{
    if(atual >= n)
    {
        //printf("bitmask: %d menor: %d maior: %d soma: %d\n",bitmask,menor,maior,soma);
        //printf("qt: %d l: %d r: %d x: %d ",qt,l,r,x);
        if(qt >= 2 and soma >= l and soma <= r and maior-menor >= x){
            return 1;
        }
        else
            return 0;
    }
    
    int pega = busca_completa(bitmask|(1 << atual),atual+1,qt+1,soma+problems[atual],min(menor, problems[atual]),max(maior,problems[atual]));
    int nao_pega = busca_completa(bitmask,atual+1,qt,soma,menor,maior);
    
    return pega + nao_pega; 
}
 
int main(){
    
    int ans;
    
    scanf("%d %d %d %d",&n,&l,&r,&x);
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&ans);
        problems.push_back(ans);
    }
    
    ans = busca_completa(0,0,0,0,1000002,-1);
    
    printf("%d\n",ans);
    
    return 0;
}
