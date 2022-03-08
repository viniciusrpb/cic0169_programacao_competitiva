/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva 
 * Prof. Dr. Vinicius R. P. Borges
 * 
 * Tópico: Busca completa (Busca em Largura - BFS)
 * Aula: Resolucao do problema 
 *                     Beecrowd 1907 - Colouring Game Scenarios (https://www.beecrowd.com.br/judge/en/problems/view/1907)
 * 
 * POR FAVOR: nao submeter esse código-fonte diretamente no Codeforces
 * 
 * Compilar no terminal: g++ beecrowd_1907.cpp -std=c++11 -o color
 * Executar: ./color
 */

#include<bits/stdc++.h>

using namespace std;

typedef tuple<int,int,int> tii;

int main()
{
    char c;
    int n,m,cor,x,y;
    int image[1026][1026];
    bool visited[1026][1026];
    
    scanf("%d %d",&n,&m);
    
    for(int i = 0; i < 1026; i++)
    {
        for(int j = 0; j < 1026; j++)
        {
            image[i][j]=0;
            visited[i][j] = false;
        }
    }
    
    scanf("%c\n",&c);
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            scanf("%c",&c);
            if(c == '.')
                image[i][j]=1;
        }
        scanf("%c",&c);
    }
    
    cor = 0;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(image[i][j] == 1 and !visited[i][j])
            {
                cor++;
                queue<tii> fila;
                fila.push(make_tuple(i,j,cor));
                visited[i][j] = true;
                
                while(!fila.empty())
                {
                    tie(x,y,cor) = fila.front();
                    /*tii atual = fila.front();
                    x = get<0>(atual);
                    y = get<1>(atual);
                    cor = get<2>(atual);*/
                    fila.pop();
                    
                    if(image[x-1][y] == 1 and !visited[x-1][y])
                    {
                        fila.push(make_tuple(x-1,y,cor));
                        visited[x-1][y] = true;
                    }
                    
                    if(image[x+1][y] == 1 and !visited[x+1][y])
                    {
                        fila.push(make_tuple(x+1,y,cor));
                        visited[x+1][y] = true;
                    }
                    
                    if(image[x][y-1] == 1 and !visited[x][y-1])
                    {
                        visited[x][y-1] = true;
                        fila.push(make_tuple(x,y-1,cor));
                    }
                    
                    if(image[x][y+1] == 1 and !visited[x][y+1])
                    {
                        visited[x][y+1] = true;
                        fila.push(make_tuple(x,y+1,cor));
                    }
                }
            }
        }
    }
    
    printf("%d\n",cor);
    
    return 0;
}
