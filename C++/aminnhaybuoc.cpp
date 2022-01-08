#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	long n, N, K, S;
	double c; 
	cin >> n;
	for (int i=1; i<= n; i++){
		 cin >> N; 
		 S= 0; K=0;
		 c= ((sqrt(8*N+1)-1)/2);
		 if (trunc(c) != c){
		 	K=trunc(c)+1; 
		 }else {
		 	K=trunc(c); 
		 } 
		 S= trunc((K*(K+1))/2); 
	//	cout << S << K << endl; 
		
		 if ((S == N) || ((S - N ) % 2 == 0)){
		 	cout << K << endl; 
		 } else if (K % 2!=0){
		 	cout << K+2 << endl; 
		 } else if (K % 2==0){
		 	cout << K+1 << endl; 
		 } 
		
		 
		  
	} 
	return 0;
}
