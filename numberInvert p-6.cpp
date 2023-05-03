#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter the number you went: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+1-i;j++)//j's value should be decrement 1 every time
        {
            cout<<j<<" ";
        }
          cout<<endl;
    }


    return 0;
}
