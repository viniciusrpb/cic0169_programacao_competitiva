#include<bits/stdc++.h>

using namespace std;

bool isSet(int num, int bitPos)
{
    return (num & (1 << bitPos)) != 0;
}

int setBit(int num, int bitPos)
{
    return num | (1 << bitPos);
}

int main()
{
    int n,m;
    unsigned int un;
    
    n = 5;
    m = 9;
    un = 5;
    
    printf("~%d = %d\n",n,~n);
    printf("~%u = %u\n",un,~un);
    
    // O(1)
    printf("%d and %d = %d\n",n,m,n&m);
    
    printf("%d or %d = %d\n",n,m,n|m);
    
    printf("%d xor %d = %d\n",n,m,n^m);
    
    /* Left shift  x << d
     *  x << d = x * 2^d */
    printf("(1 << 1) = %d\n",1<<1);
    printf("(1 << 2) = %d\n",1<<2);
    printf("(1 << 3) = %d\n",1<<3);
    printf("(1 << 4) = %d\n",1<<4);
    
    printf("(2 << 3) = %d\n",2<<4);
    
    /* Right shift  x >> d
     * x >> d = floor(x/2^d)  */
    printf("(5 >> 1) = %d\n",5>>1);
    
    /* para variaveis long long*/
    printf("(5 << 2) = %lld\n",5LL<<1);
    
    if(isSet(9, 1))
        printf("Sim\n");
    else
        printf("Nao\n");
    
    printf("setbit no num %d na pos %d = %d\n",10,2,setBit(10,2));
    
    return 0;
}
