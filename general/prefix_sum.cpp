/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva 
 * Prof. Dr. Vinicius R. P. Borges
 * 
 * Tópico: Soma de Prefixos
 * Objetivo: Código-fonte que recebe dois inteiros N e Q
 *           Lê N elementos e armazena-os em um vetor v[1], v[2], ..., v[N]
 *           Lê Q consultas: cada consulta consiste de dois números inteiros l e r
 *                           deve-se retornar a soma dos elementos v[l]+v[l+1]+...+v[r-1]+v[r]
 *           importante: 1 <= l <= r <= N
 * 
 * Compilar: g++ prefix_sum.cpp -std=c++11 -o psum
 * Executar: ./psum
 *  
 * Complexidade: O(N+Q)
 * 
 */

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,q,aux,l,r;
    vector<int> v;
    
    scanf("%d %d",&n,&q);
    
    /*primeiro elemento a[0] é zero, não iremos utilizá-lo*/
    v.push_back(0); 
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&aux);
        v.push_back(aux);
    }
    
    /*primeiro elemento a[0] é zero, não iremos utilizá-lo*/
    vector<int> psum(n+1,0);
    
    for(int i = 1; i <= n; i++)
    {
        psum[i] = v[i] + psum[i-1];
    }
    
    /* Leitura das Q consultas para intervalo [l,r]*/
    while(q--)
    {
        scanf("%d %d",&l,&r);
        
        printf("%d\n",psum[r]-psum[l-1]);
    }
    
    return 0;
}
