#include<bits/stdc++.h>
using namespace std;
int A[1000000];
int main(){
    int n,k, d=0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++){
        cin >> A[i];
    }
    sort(A+1, A+n+1);
    int l = 1, r = 1;
    while (r<=n && A[r]<=k){
        while (A[l]+A[r] == k && l<r){
            d++; 
            l++;
        }
        r++;
    }
    cout << d;
    return 0;
}