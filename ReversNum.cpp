#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter your number: ";
    cin>>n;
    int revers=0;
    while(n>0)
    {
        int lastDigit=n%10;
        revers=revers*10+lastDigit;
        n=n/10;
    }
    cout<<revers<<endl;

    return 0;
}