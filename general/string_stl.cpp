/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva
 * Prof. Dr. Vinicius R. P. Borges
 *
 * Tópico: Fundamentos de C/C++
 * Esse código-fonte apresenta operacoes de entrada e saida em uma string da classe STL
 *
 * Compilar no terminal:
 *   $ g++ string_stl.cpp -std=c++17 -o str
 * Executar:
 *   $ ./str
*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    string s; /* acomodar o caractere \0 - fim de string*/

    cin >> s; /*leitura ateh encontrar um espaco em branco*/
    // getline(cin,s)  /* leitura ateh encontrar um "\n"*/

    cout << "String lida: " << "\n";

    cout << s << "\n";

    cout << "Quantidade de caracteres: " << s.size() << "\n";

    return 0;
}
