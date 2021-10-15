/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva 
 * Prof. Dr. Vinicius R. P. Borges
 * 
 * Tópico: Algoritmos Gulosos
 * Esse código-fonte está associado à implementação do problema da mochila fracionária
 *      - Seja uma mochila de capacidade W;
 *      - Conjunto de N itens, em que um item i é descrito pelo seu peso e valor (peso_i,valor_i)
 *      - Devemos pegar um subconjunto desses itens de modo a maximizar o valor da mochila, em que é possível pegar integralmente
 *        ou parcialmente os itens, sem exceder a capacidade W.
 * 
 * Compilar no terminal: g++ frac_knapsack.cpp -std=c++11 -o mochilaf
 * Executar: ./mochilaf
*/

#include<bits/stdc++.h>

using namespace std;

typedef tuple<int,int,int> tii;
typedef pair<double,int> pdi;

vector<double> solve(vector<tii> itens, double W, double *totalValue)
{
    vector<double> frac(itens.size(),0);
    vector<pdi> razao_itens;
    
    *totalValue = 0;
    int n = itens.size();
    
    for(int i = 0; i < n;i++)
    {
        double aux = (double) get<0>(itens[i])/(double) get<1>(itens[i]);
        razao_itens.push_back(make_pair(aux,get<2>(itens[i])));
    }
    
    sort(razao_itens.begin(),razao_itens.end());
    
    for(int i = n-1; i >= 0; i--)
    {
        int id = razao_itens[i].second;
        
        /* consigo colocar o item inteiro na mochila? */
        if(get<1>(itens[id]) <= W)
        {
            W = W - get<1>(itens[id]);
            frac[id] = 1;
            *totalValue = *totalValue + get<0>(itens[id]);
        }
        else
        {
            frac[id] = W / get<1>(itens[id]);
            *totalValue = *totalValue + get<0>(itens[id])*frac[id];
            W = 0;
        }
    }
    return frac;
}

int main()
{
    int n;
    double W,peso,valor,tvalue;
    vector<tii> itens;
    
    scanf("%d %lf",&n,&W);
    
    for(int i = 0; i < n; i++)
    {
        scanf("%lf %lf",&peso,&valor);
        itens.push_back(make_tuple(valor,peso,i));
    }
    
    vector<double> ans = solve(itens,W,&tvalue);
    
    printf("Valor total (max) da mochila: %lf\n",tvalue);
    
    for(int i = 0; i < itens.size(); i++)
    {
        printf("%d - %lf\n",i,ans[i]);
    }
    
    return 0;
}
