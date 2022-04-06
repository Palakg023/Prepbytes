/*

One pattern 

Print in the output the exact pattern provided below
1
1 1
1 1 1
1 1 1 1

Input format
A single integer N

Output
Print the same pattern provided in the problem statement

*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		cout<<"1 ";
		cout<<endl;
	}
}
