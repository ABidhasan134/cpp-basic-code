#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<"Enter your number: ";
    cin>>n;
    bool flag=0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%2==0)
        {
            cout<<"Non-prime number is"<<n;
            flag=1;
            break;
        }

    }
    if(flag==0){
        cout<<"\nPrime Number "<<n;
        }

    return 0;
}