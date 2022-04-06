/*
Ten from Two

You are given a number n and you are asked to make n divisible 
by 10.The only operation you do on n is to multiply n by 2.
Given n find out how many operations are required to make n 
divisible by 10.

Inpur Format
First line contains an integerT, denoting number of test cases.
Then follow T test cases. Each test case consists of a single variable n.

Output Format
Print T values. Each line will print number or operation(0 or more)
if its possible to make n divisible by 10 otherwis print -1

EXample

Input 
10
25

Output 
0
1

*/

#include<iostream>
using namespace std;
int main()
{
    int T,n;
    cin>>T;
    while(T--)
    {
        cin>>n;
        int rem;
        rem=n%10;
        
        switch(rem)
        {
            case 0:
            cout<<"0"<<endl;break;
            
            case 5:
            cout<<"1"<<endl;break;
            
            default:
            cout<<"-1"<<endl;
        }   
        
    }
   
}

