/*
Journery of Bablu and Dablu

Bablu and DAblu are traveling at train . This time they are
traveling without their parents . Bablu wants to know the 
arrangement of seats inside the train coach.
The entire coach cou;d be viewed as an arrangement of
consecutive blocks of size 8

Berth Number 		Compartment 
1   - 8					1
9   - 16				2
17  - 24				3
....and so on
EAch of these size-8 blocks are further arranged as
1LB,2MB,3UB,4LB,5MB,6UB,7SL,8SU,9LB,10MB,....
Here LV denotes lower berth , MB middle Berth and UB upper berth.
The following berths are called Train - Partners

7SL		|	8SU
3UB		|	6UB
2MB		|	5MB
1LB		|	4lB
And the pattern is repeated for every set of 8 berths
Bablu and Dablu are playing a game of finding the train partner of
each berth.But they are not able to find the right partner.They ask for help

Input Format

The first line of inout contains a single integer T,denoting the
number of test cases to follow.
Each of the next T lines contains a simgle integer N, the
berth nubmer whose neighbour is to be found out

Output 
The output should contain exactly T lines each containt the berth of the neighbour of the corresponding seat

EXample 
4
3
5
1
8

Output
6UB
2MB
4LB
7SL

*/


#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    switch(n%8){
      case 0: cout<<(n-1)<<"SL"<<endl;
              break;
      case 1: cout<<(n+3)<<"LB"<<endl;
              break;
      case 2: cout<<(n+3)<<"MB"<<endl;
              break;
      case 3: cout<<(n+3)<<"UB"<<endl;
              break;
      case 4: cout<<(n-3)<<"LB"<<endl;
              break;
      case 5: cout<<(n-3)<<"MB"<<endl;
              break;
      case 6: cout<<(n-3)<<"UB"<<endl;
              break;
      case 7: cout<<(n+1)<<"SU"<<endl;
              break;
    }
  }
  return 0;
}
