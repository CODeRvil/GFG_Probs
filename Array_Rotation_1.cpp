#include<bits/stdc++.h>
using namespace std;

#define FORE(a, b, c) for (int(a) = (b); (a) <= (c); ++(a))
#define FORD(a, b, c) for (int(a) = (b); (a) >= (c); --(a))
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define FOREACH(a, b) for (auto&(a) : (b))

// void ArrRotateByONE(int *arr, int n){
//     int temp;
//     FOR(i,0,n-1){
//         temp = arr[i+1];
//         arr[i+1] = arr[i];
//         arr[i] = temp;
//     }
// }        Slower!!

// rotates the arr in the anti-clockwise direction

int hcf(int r, int n){
    while(n%r!=0) n %= r;
    int set = n;
    return set;
}

int ArrRotate(int *arr, int r, int n){
    int set;
    if(r>n) r%=n;
    else if(r==n) return 0;
    else set = hcf(r,n);
    FOR(i,0,set){
        int temp = arr[i];
        int j = i;
        while(1){
            int k = j + r;
            if(k>=n) k-=n;
            if(k==i) break;
            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
    }
    return 0;
}

int main(){
    ios_base::sync_with_stdio(false);

    int t=1; //cin>>t;
    while(t--){
        int n, r; cin>>n>>r;
        int arr[n];
        FOR(i,0,n) cin>>arr[i];
        FOR(i,0,r) ArrRotate(arr,r,n);  //ArrRotateByONE(arr, n);
        
        FOR(i,0,n) cout<<arr[i]<<' ';
        cout<<'\n';
    }

    return 0;
}