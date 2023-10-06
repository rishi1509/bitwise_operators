/*
PRN-22070123095
Exp-4(a)*/
#include<iostream>
using namespace std;
int main()
{
    int given, set,reset,set_ans,reset_ans;
    given = 35;
    set = 16;
    reset = 31;
    set_ans = given | set;
    reset_ans = reset & given;
    cout<<"set:"<<set_ans<<endl;
    cout<<"reset:"<<reset_ans<<endl;

    /*
    OUTPUT
    set:51
    reset:3
    */

/*
PRN-22070123095
Exp-4(b)*/

#include<iostream>

using namespace std;
int main()
{
    int n1 , n2;
    cout<<"ENTER THE FIRST NUMBER : ";
    cin>>n1;
    cout<<"ENTER THE SECOND NUMBER : ";
    cin>>n2;
    cout<<"ADDITION = "<<n1+n2<<endl;
    cout<<"SUBTRACTION = "<<n1-n2<<endl;
    bool com = n1 > n2;
    cout<<"COMPARISION = "<<com<<endl;
    int band = n1 & n2;
    cout<<"BITWISE AND = "<<band<<endl;
    int bor = n1 | n2;
    cout<<"BITWISE OR = "<<bor<<endl;
    return 0;
}
/*OUTPUT-ENTER THE FIRST NUMBER : 23
ENTER THE SECOND NUMBER : 45
ADDITION = 68
SUBTRACTION = -22
COMPARISION = 0
BITWISE AND = 5
BITWISE OR = 63*/




