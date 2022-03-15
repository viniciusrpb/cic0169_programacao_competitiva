/*
 * Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva 
 * Prof. Dr. Vinicius R. P. Borges
 * 
 * Tópico: Busca completa, Backtracking
 * Aula: resolução do problema "Beecrowd 1556 - Removing Letters", versão 1 (https://www.beecrowd.com.br/judge/en/problems/view/1556)
 * 
 * POR FAVOR: nao submeta esse código-fonte no Beecrowd! 
 * 
 * Compilar no terminal: g++ beecrowd_1556.cpp -std=c++11 -o letters
 * Executar: ./letters
 */

#include<bits/stdc++.h>

using namespace std;

map<string,bool> visitado;

void dfs(string substr)
{
    visitado[substr] = true;
    
    // analisa caractere por caractere
    for(int i = 0; i < substr.size(); i++)
    {
        char removido = substr[i];
        substr.erase(i,1);
        if(substr.size() > 0 and visitado.count(substr) == false)
            dfs(substr);
        substr.insert(i,1,removido);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    string str;
    
    while(cin >> str)
    {
        dfs(str);
        for(auto& ss: visitado)
            cout << ss.first << "\n";
        cout << "\n";
        visitado.clear();
    }
    
    return 0;
}
