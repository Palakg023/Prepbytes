/*

Number pattern
Print in the output the exact pattern provided below
1 2 3 4 5 
1 2 3 4
1 2 4 
1 2
1

Input 
A single integer N

Output
Print the same pattern provided in problem statement

*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i+1;j++)
		cout<<j<<" ";
		cout<<endl;
		
	}
}
