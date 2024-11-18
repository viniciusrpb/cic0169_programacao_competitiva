#include<bits/stdc++.h>

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

int main(){
    fast_io
    int n,aux,elem,ans;
    vector<int> arr;

    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf("%d",&aux);
        if(aux) // aux != 0
            arr.push_back(aux);
    }

    sort(arr.begin(),arr.end());

    if(arr.size() == 0){
        ans = 0;
    }
    else{
        ans = 1;

        for(int i = 1; i < arr.size(); i++){
            if(arr[i-1] != arr[i]){
                ans++;
            }
        }
    }

    printf("%d\n",ans);

    return 0;
}
