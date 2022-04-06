/*

V pattern

Print the output the exact pattern provided below

1        1
12      21
123    321
1234  4321
1234554321

Input Format:=
A single chancter denoted by ch

Ouput Format:-
Print the same pattern provided in problem statement 

Constrainsts
ch='V'

*/

#include<iostream>
using namespace std;

int main()
{
	int i,j,k,l;
	char ch;
	cin>>ch;
	if(ch=='V')
	{
		for(i=1;i<=5;i++)
		{
			for(j=1;j<=i;j++)
			cout<<j;
			
			for(k=1;k<=2*(5-i);k++)
			cout<<" ";
			
			for(l=i;l>=1;l--)
			cout<<l;
			cout<<endl;	
		}
		
	}
	
}


