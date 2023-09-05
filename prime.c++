#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    bool flag=0;//o means false
    // for( i=2;i<n;i++)
    for(i=2;i<=sqrt(n);i++)
    //if a squer roote can't divide than it will prime number 
    {
        if(n%i==0)
        {
            cout<<"The number is not prime"<<endl;
            flag=1;//if it is true
            break;
        }
     
    }
    if(flag==0)
    {
        cout<<"The number is prime";
    }
    return 0;
}