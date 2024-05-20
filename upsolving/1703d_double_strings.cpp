/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva 
 * Prof. Dr. Vinicius R. P. Borges
 * 
 * Tópico: Estruturas de Dados
 * Aula: Resolucao do problema 
 *                     Codeforces Round #806 (Div. 4) - D. Double Strings (https://mirror.codeforces.com/contest/1703/problem/D)
 * 
 * POR FAVOR: nao submeter esse código-fonte diretamente no Codeforces
 * 
 * Compilar no terminal: g++ 1703d_double_strings.cpp -std=c++17 -o doubles
 * Executar: ./doubles
 */

#include<bits/stdc++.h>
 
using namespace std;
 
int solve(string s, set<string> hash[9]){
 
    for(int j = 1; j <= s.size(); j++){
        int other = s.size()-j;
        string subs = s.substr(0,j);
        if(hash[j].count(subs)){
            string subs2 = s.substr(j,other);
            if(hash[other].count(subs2)){
                return 1;
            }
        }
    }
  
    return 0;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int t;
 
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;
 
        set<string> hash[9];
        vector<string> input;
 
        for(int i = 0; i < n; i++){
            string s;
            cin >> s;
            int ind = s.size();
            hash[ind].insert(s);
            input.push_back(s);
        }
 
        string s = "";
        for(int i = 0; i < input.size(); i++){
            s+=to_string(solve(input[i],hash));
        }
 
        cout << s << "\n";
    }
    return 0;
}
