/*

Character Value
You are provided with this table containing a character and its 
value. Given one of this character as input you need to print it 
corresponding value

| P or p 	- 	Prepbytes 			|
| Z or z  	- 	Zenith   			|
|E or e 	-	Expert Coder		|
|D or d		-	Data Structures		|

Input Format
A single character

Output 
For each test case print the corresponding value of given character

Example

Input 
e
Output
Expert Coder

*/

#include<iostream>
using namespace std;

int main()
{
	char c;
	cin>>c;
	if(c=='P'||c=='p')
	cout<<"Prepbytes";
	else if (c=='Z'||c=='z')
	cout<<"Zenith ";
	else if (c=='E'||c=='e')
	cout<<"Expert Coder";
	else if (c=='D'||c=='d')
	cout<<"Data Structures";
	
	
}

