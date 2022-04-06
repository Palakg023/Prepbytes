//Write a program to take a number as input from the user 
//print the remainder when the no is divided by 10 

/*
n=456
divide 456 by 10
quotient : 45 
remainder as 6

division operator /
modulo operator %

456/10=45
456%10=6

a%b gives remainder when a is divided by b

*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter a number :\n";
	cin>>n;
	cout<<"Remainder when "<<n<<" is divided by 10 : "<<n%10;
}
