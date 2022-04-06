/*
Second Smallest 
You are given 3 distinct numbers X,Y and Z.
Task is to print the second smallest
number among the three provided numbers.

Input Format
Inpur contains 3 distict integers X,Y and Z

Output 
Print the second smallest integer

Example

Input 
10 42 15
Output
15

*/ 

#include<iostream>
using namespace std;

int main()
{
	int X,Y,Z,A;
	cin>>X>>Y>>Z;
	A=(X>Y)? (Y>Z)? Y : Z : (X>Z)? X : Z;
	cout<<A;
}
