/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva
 * Prof. Dr. Vinicius R. P. Borges
 *
 * Tópico: Fundamentos de C/C++
 * Esse código-fonte apresenta operacoes de entrada e saida em uma string da linguagem C
 *
 * Compilar no terminal:
 *   $ g++ string_nativa_c.cpp -std=c++17 -o strc
 * Executar:
 *   $ ./strc
*/

#include<bits/stdc++.h>
#define MAX 500

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    char str[MAX+1]; /* acomodar o caractere \0 - fim de string*/

    cin >> str; /*leitura ateh encontrar um espaco em branco*/
    // getline(cin,str)  /* leitura ateh encontrar um "\n"*/

    cout << "String lida: " << "\n";

    cout << str << "\n";

    return 0;
}
