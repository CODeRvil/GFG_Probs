#include<bits/stdc++.h>
using namespace std;

#define FORE(a, b, c) for (int(a) = (b); (a) <= (c); ++(a))
#define FORD(a, b, c) for (int(a) = (b); (a) >= (c); --(a))
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define FOREACH(a, b) for (auto&(a) : (b))

// don't know why it gives an error while calling the functions!!

// void rotate(int arr[], int n, int x){
//     reverse(arr, 0, (n-x-1));
//     reverse(arr, (n-x), (n-1));
//     reverse(arr, 0, (n-1));
// }

// void reverse(int arr[], int low, int high){
//     while(low<high){
//         swap(arr[low],arr[high]);
//         low++;
//         high--;
//     }
// }

// rotates the arr in the clockwise direction

int main(){
    ios_base::sync_with_stdio(false);

    int t; cin>>t; //test cases
    while(t--){
        int n, x; cin>>n>>x; //array size and rotation factor
        int arr[n];
        FOR(i, 0, n) cin>>arr[i];
        // rotate(arr, n, x);
        int high, low;
        // reverse(arr, 0, (n-x-1));
        high = n-x-1; low = 0;
        while(low<high){
            swap(arr[low], arr[high]);
            high--;
            low++;
        }
        // reverse(arr, (n-x), (n-1));
        high = n-1; low = n-x;
        while(low<high){
            swap(arr[low], arr[high]);
            high--;
            low++;
        }
        // reverse(arr, 0, (n-1));
        high = n-1; low = 0;
        while(low<high){
            swap(arr[low], arr[high]);
            high--;
            low++;
        }

        FOR(i, 0, n) cout<<arr[i]<<" ";
        cout<<'\n';

    }

    return 0;
}