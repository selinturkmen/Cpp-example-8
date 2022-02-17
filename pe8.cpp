#include <iostream>
#include <cmath>
using namespace std;

int digit(int n){
	int num = 0;
	while (n!= 0){
		n/=10;
		num ++; }
		return num;
		}
int compute(int x, int y){
	int i,digitx;
	int n,a,z;
	double sx;
	digitx= digit(x);
	sx = pow(x,2);
	cout<<"Number of Digits:"<<digitx<<endl;
	cout<<"MSM PRNG steps: input (n)  squared(2n)   PRN(n)\n";
	for (i = 0; i<y; i++){
		a =pow(10,digitx);
		n = x/pow(10,(digitx/2));
		z = n%a;
		cout<<"MSM PRNG steps: "<< x <<"     "<< sx <<"      "<< z << endl;}}


int main(){
	int a,b;
	cout<<"Enter any number:"<<endl;
	cin>> a;
	cout<<"Requested number of random numbers:"<<endl;
	cin>> b;
	cout<< compute(a,b)<<endl;
	return 0;
	}
