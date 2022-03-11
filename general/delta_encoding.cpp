/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva 
 * Prof. Dr. Vinicius R. P. Borges
 * 
 * Tópico: Codificação Delta (Delta encoding)
 * Objetivo: Código-fonte que recebe dois inteiros N e Q
 *           Lê N elementos e armazena-os em um vetor v[1], v[2], ..., v[N]
 *           Lê Q consultas: cada consulta consiste de três números inteiros l, r e x
 *                           deve-se somar x a cada elemento v[l],v[l+1],...,v[r-1],v[r]
 *           importante: 1 <= l <= r <= N
 * 
 * Compilar: g++ delta_encoding.cpp -std=c++11 -o delta
 * Executar: ./delta
 *  
 * Complexidade: O(N+Q)
 * 
 */

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,q,aux,l,r,x,s;
    vector<int> v;
    
    scanf("%d %d",&n,&q);
    
    /*primeiro elemento a[0] é zero, não iremos utilizá-lo*/
    v.push_back(0); 
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&aux);
        v.push_back(aux);
    }
    
    /* Leitura das Q consultas em que deve-se somar x em cada elemento no intervalo [l,r]*/
    vector<int> delta(n+2,0);
    while(q--)
    {
        scanf("%d %d %d",&l,&r,&x);
        
        delta[l]+=x;
        delta[r+1]-=x;
    }

    vector<int> psum(n+1,0);
    printf("\nRecuperação das alterações a serem feitas no vetor de entrada:\n");
    s = 0;
    for(int i = 1; i <= n; i++)
    {
        s = s + delta[i];
        psum[i] = s;
        printf("%d ",psum[i]);
    }
    printf("\n\n");
    
    printf("Vetor de entrada após as alterações:\n");
    s = 0;
    for(int i = 1; i <= n; i++)
    {
        s = s + delta[i];
        psum[i] = v[i] + s;
        printf("%d ",psum[i]);
    }
    printf("\n");
    
    return 0;
}
