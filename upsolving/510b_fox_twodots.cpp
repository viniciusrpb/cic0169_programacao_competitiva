/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva
 * Prof. Dr. Vinicius R. P. Borges
 *
 * Tópico: Busca completa (Busca em Profunidade - DFS)
 * Resolucao do problema:
 *           Codeforces Round #290 (Div. 2) - B. Fox And Two Dots (https://codeforces.com/problemset/problem/510/B)
 *
 * POR FAVOR: nao submeter esse código-fonte diretamente no Codeforces
 *
 * Compilar no terminal: g++ 510b_fox_twodots.cpp -std=c++11 -o fox
 * Executar: ./fox
 */

#include<bits/stdc++.h>

using namespace std;

char mat[52][52];
bool visited[52][52];
bool valid;
int n,m;

void dfs(int i, int j, int x, int y, char cor){

    if(i < 0 or j < 0 or i >= n or j >= m)
        return ;

    if(visited[i][j]){
        valid = true;
        return ;
    }

    visited[i][j] = true;

    if((i+1 != x or j != y) and matriz[i+1][j] != cor)
        dfs(i+1,j,i,j,cor);

    if((i != x or j+1 != y) and matriz[i][j+1] != cor)
        dfs(i,j+1,i,j,cor);

    if((i-1 != x or j != y) and matriz[i-1][j] != cor)
        dfs(i-1,j,i,j,cor);

    if((i !=x or j-1 != y) and matriz[i][j-1] != cor)
        dfs(i,j-1,i,j,cor);
}

bool solve(){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(!visited[i][j])
            {
                dfs(i,j,-1,-1,mat[i][j]);
                if(valid)
                    return true;
            }
        }
    }
    return false;
}


int main()
{
    scanf("%d %d\n",&n,&m);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%c",&mat[i][j]);
        }
        getchar();
    }

    bool ans = solve();

    if(ans)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
