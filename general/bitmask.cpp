/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva 
 * Prof. Dr. Vinicius R. P. Borges
 * 
 * Tópico: Operadores bitwise and bitmasks
 * Esse código-fonte apresenta algumas funções que podem ser utilizadas com bitmasks
 * 
 * Compilar no terminal:
 *   $ g++ bitmask.cpp -std=c++11 -o mask
 * Executar:
 *   $ ./mask
*/

#include<bits/stdc++.h>
 
using namespace std;
 
bool isSet(int num, int bitPos)
{
    return (num & (1 << bitPos)) != 0;
}

int setBit(int num, int bitPos)
{
    return (num | (1 << bitPos));
}

int LSB(int num)
{
    return num & -num;
}

int posLSB(int num)
{
    return log2(num & -num);
}

void complete_search_bitmask()
{
    vector<int> v({1,2,3,4,5});
    int n = v.size();
    
    printf("Generate all subvectors of a vector:\n");
    for(int bitmask = 0; bitmask < (1 << n); bitmask++)
    {
        printf("[ ");
        for(int i = 0; i < n; i++) {
            if(isSet(bitmask,i)) {
                printf("%d ",v[i]);
            }
        }
        printf("]\n");
    }
}

int main()
{
     int bitmask = 12;
     
     printf("Bit 2 is on? Ans: %d\n",isSet(bitmask,2));
     
     printf("Bit 3 is on? Ans: %d\n",isSet(bitmask,3));
     
     printf("Change bit 2, we get: %d\n\n",setBit(bitmask,2));
     
     bitmask = 26; // 11010_2
     
     printf("LSB of %d is: %d\n",bitmask,LSB(bitmask));
     
     printf("LSB's position of %d is: %d\n\n",bitmask,posLSB(bitmask));
     
     bitmask = 24; // 11000_2
     
     printf("LSB of %d is: %d\n",bitmask,LSB(bitmask));
     
     printf("LSB's position of %d is: %d\n\n",bitmask,posLSB(bitmask));
     
     complete_search_bitmask();
     
    return 0;
}
