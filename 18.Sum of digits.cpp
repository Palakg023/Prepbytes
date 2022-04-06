/*
Sum of digits 
https://practice.geeksforgeeks.org/problems/sum-of-digits1742/1

Prepbuddy gave you a number X and asks you to find sum of digit
present in number 

Input format

One integer is provided denoting the value of X

Output

Print the sum of digits of X

Example

Input
102345

Output
15

*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int sum=0;
	while(n>0)
	{
		int d=n%10;
		sum+=d;
		n=n/10;
	}
	cout<<sum;
}
