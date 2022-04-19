#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> arr = {9,7,6,4,3,1};
    int s;
    int l = 0;
    int r = arr.size()-1;
    
    scanf("%d",&s);
    
    while(l<r)
    {
        printf("a[%d] = %d - a[%d] = %d => %d < %d?\n",l,arr[l],r,arr[r],arr[l]-arr[r],s);
        if(arr[l]-arr[r] < s)
            r--;
        else
            if(arr[l]-arr[r] > s)
                l++;
            else
                l=r+1;            
    }
    if(l==r)
        printf("Nao eh possivel\n");
    else
        printf("a[%d] = %d - a[%d] = %d => %d\n",l,arr[l],r,arr[r],s);
    return 0;
}
