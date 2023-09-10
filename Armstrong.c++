#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int sum=0;
    int orginalN=n;
    while(n>0)
    {
        int lastDigit=n/10;
        sum += pow(lastDigit,3);
        n=n/10;
    }
    if(orginalN==n)
    {
        cout<<n<<" is a armstrong number ";
    }
    else
    {
        cout<< n <<" is not a armstrong number";
    }

    return 0; 
}