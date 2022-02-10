#include<bits/stdc++.h>
 
using namespace std;

int isSet(int pos, int number)
{
    int pot2 = (1<<pos);
    if(number & pot2)
        return 1;
    else
        return 0;
}
 
int main()
{
    unsigned int un;
    int num,a;
    // not
    un = 5;
    printf("~%d = %u\n",un,~un);
    printf("~%d = %d\n",un,~un);
    // 5 = 0101_2 = ~0101_2 = (1)010_2 => comp2 => (1)110_2 = -6
    
    num = -4;
    printf("~%d = %d\n",num,~num);
    // ~(-4) => comp2 => ~(1100_2) = 0011_2 = 3
    
    num = 6;
    a = 3;
    printf("%d OR %d = %d\n",a,num,a|num);
    
    num = 6;
    a = 3;
    printf("%d AND %d = %d\n",a,num,a&num);
    
    num = 6;
    a = 3;
    printf("%d XOR %d = %d\n",a,num,a^num);
    
    //left-shift
    printf("Left shift:\n");
    printf("%d\n",1 << 1);
    printf("%d\n",1 << 2);
    printf("%d\n",1 << 4);
    printf("%d\n",1 << 8);
    
    printf("Right shift:\n");
    printf("%d\n",127 >> 1);
    printf("%d\n",127 >> 2);
    printf("%d\n",127 >> 4);
    printf("%d\n",127 >> 8);
    
    
    
    
    for(int bitm = 0; bitm < 8; bitm++)
    {
        printf("bitmask: %d\n",bitm);
        for(int i = 0; i < 3; i++)
            printf("%d",isSet(i,bitm));
        printf("\n");
    }
    
    
    
    return 0;
}
