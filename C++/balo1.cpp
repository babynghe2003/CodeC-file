#include <bits/stdc++.h>
using namespace std;
long long L[100+1][100000+1];
int main()
 {
    // ios_base::sync_with_stdio(0);
    // cin.tie(0); cout.tie(0);
    long long N,T;
    cin >> N >> T;
    long long A[N+3], B[N+3];
    for (long long i = 1; i <= N; i++)
    {
        cin >> A[i] >> B[i];
    }
    L[0][0]=0; L[0][1]=0;
    for (long long i = 1; i<= N; i++){
    L[i][0]=0;
    for (long long j =1 ; j <= T ; j++){
          if   (A[i]<=j) L[i][j]=max(L[i-1][j], L[i-1][j-A[i]]+B[i]);
          else L[i][j]=L[i-1][j];
    }
    }
    // for (long long i = 1; i<= N; i++){
    //     cout << endl;
    //     for (long long j=1; j<=T; j++){
    //         cout << L[i][j] << " ";
    //     }
    // }
    cout << L[N][T];
    system("pause");
    return 0;
}