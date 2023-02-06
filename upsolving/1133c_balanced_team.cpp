/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva
 * Prof. Dr. Vinicius R. P. Borges
 *
 * Tópico: Two Pointers
 * Aula: Resolucao do problema
 *                     Codeforces Round #544 (Div. 3) - C. Balanced Team (https://codeforces.com/problemset/problem/1133/C)
 *
 * POR FAVOR: nao submeter esse código-fonte diretamente no Codeforces
 *
 * Compilar no terminal: g++ 1133c_balanced_team.cpp -std=c++17 -o team
 * Executar: ./team
 * Complexidade: O(nlogn + 2n) no tempo
 */

#include<bits/stdc++.h>

using namespace std;

int solve(int *v, int n)
{
    int l,r,ans;
    
    ans=0;
 
    for(l = 0,r=1; l < n; l++){
        while(r<n and ((v[r]-v[l]) <=5))
            r++;
        ans=max(ans,r-l);
    } 
    
    return ans;
}

int main()
{
    int n;
    int a[200005];
    
    scanf("%d",&n);
    
    for(int i = 0; i < n;i++)
        scanf("%d",a+i);
    
    sort(a,a+n);
    
    printf("%d\n",solve(a,n));

    return 0;
}
