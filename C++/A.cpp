#include<bits/stdc++.h>
using namespace std;
int T,N, S=0;
int A[210][210], L[210][210] , L2[200000];
int demduong(int x, int y){
    int  k,S=0,S1=1e9;
        for (int i = x+1; i<= N; i++){
            S1=A[x][i];
            if (y<N)
            for (int j = i-1; j>y; j--){
                   S1=min(S1,A[i][y]);
            }
            
            S+=S1;
        }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T,N, S=0;
    cin >> T;
    while ( T--)
    {
        cin >> N;
        for (int i = 1; i<=N; i++){
            for (int j = 1; j <= N; j++)
            {
                cin >> A[i][j];
            }
        }
        for (int i = 1; i<=N; i++){
            for (int j = 1; j<= N; j++){
                if (i==j) L[i][j]=0;
                else {
                   
                }
            }
        }
    }
    
    return 0;
}