#include<iostream>
#include<cmath>
#include<stdlib.h>
#include <string> 
using namespace std;

double square(double x){
	return x*x;
}
void print_square(double x){
	cout<<"the square of "<<x<<" is "<<square(x)<<"\n";
}
int main(){
	double x;
	char c[3];
	do {
	system("cls");
		cout <<"write a number ";
		cin>>x;
 		print_square(x);
 		char c;
 		cout<<"continue y/n";
 		cin>>c;
 		switch (c){
 			case 'y':
 				return true;
 			case 'n':
			 	return false;
			default:
			 	return false;
		 } while (accept==false )
} 
}
