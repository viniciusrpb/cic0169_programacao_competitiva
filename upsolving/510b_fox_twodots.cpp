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
 * Compilar no terminal: g++ 510b_fox_twodots.cpp -std=c++17 -o fox
 * Executar: ./fox
 */

#include<bits/stdc++.h>

using namespace std;

char board[52][52]; // padding de matrizes
bool visited[52][52]; // padding de matrizes
bool acheiSolucao;
int n,m;

void dfs(int i, int j, int x, int y, char cor){

    // se encontramos um ponto de mesma cor que jah foi visitado
    // significa que fechamos o ciclo de pelo menos 4 pontos
    if(visited[i][j]){
        valid = true; // marca que encontrou a resposta
        return ;
    }

    visited[i][j] = true;

    if((i+1 != x or j != y) and board[i+1][j] == cor)
        dfs(i+1,j,i,j,cor);

    if((i != x or j+1 != y) and board[i][j+1] == cor)
        dfs(i,j+1,i,j,cor);

    if((i-1 != x or j != y) and board[i-1][j] == cor)
        dfs(i-1,j,i,j,cor);

    if((i != x or j-1 != y) and board[i][j-1] == cor)
        dfs(i,j-1,i,j,cor);
}

bool solve(){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(!visited[i][j]){
                dfs(i,j,-1,-1,board[i][j]);
                if(acheiSolucao)
                    return true;
            }
        }
    }
    return false;
}


int main(){
    scanf("%d %d",&n,&m);
    
    getchar(); // se livra do \n
    
    memset(board,'.',sizeof(board));

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            scanf("%c",&board[i][j]);
        }
        getchar(); // se livra do \n
    }

    if(solve())
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
