/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva
 * Prof. Dr. Vinicius R. P. Borges
 *
 * Tópico: Busca Binária
 * Aula: Resolucao do problema
 *                     Codeforces Round #790 (Div. 4) - E. Eating Queries (https://codeforces.com/problemset/problem/1676/E)
 *
 * POR FAVOR: nao submeter esse código-fonte diretamente no Codeforces
 *
 * Compilar no terminal: g++ 1676e_eating_queries.cpp -std=c++11 -o fome
 * Executar: ./fome
 * Complexidade: O(t*(n log n + q*log n)) no tempo
 */

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,aux,x,n,q,l,r,mid,ans;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d",&n,&q);
        vector<int> a,psum(n+2,0);

        for(int i = 0; i < n; i++){
            scanf("%d",&aux);
            a.push_back(aux);
        }

        sort(a.begin(),a.end(),greater<int>());

        psum[0]=a[0];
        for(int i = 1; i < a.size(); i++){
            psum[i]=psum[i-1]+a[i];
        }

        while(q--)
        {
            scanf("%d",&x);
            l = 0;
            r = n-1;
            ans=-2;
            while(l <= r){
                mid = (l+r)/2;
                if(psum[mid]>=x){
                    ans = mid;
                    r = mid-1;
                }
                else
                {
                    l=mid+1;
                }
            }
            printf("%d\n",ans+1);
        }
    }
    return 0;
}
