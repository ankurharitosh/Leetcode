//Question: Given two integers A and B. Find a number X such that A Xor X is minimum possible and number of set bits in X equals to B.



#include<bits/stdc++.h>
using namespace std;

int main(){
	int A, A_temp, B, X=0, mask=0;
	cout<<"Enter A: ";
	cin>>A;
	cout<<"Enter B: ";
	cin>>B;

	for(int i=31; i>=0; i--){
		if(((A>>i)&1)==1 && B!=0){
			X|=(1<<i);
			B--;
		}
	}
	A_temp=A;
	while(B!=0){
		mask= ~A_temp & (A_temp+1);
		A_temp=A_temp | (A_temp+1);
		X|=mask;
		B--;
	}
	cout<<"X: "<<X<<endl;
	A^=X;
	cout<<"Answer: "<<(A)<<endl;
	return 0;
}
