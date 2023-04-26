#include<iostream>
using namespace std;
int main()
{
int row, col;
cout<<"Enter the row number: ";
cin>>row;
cout<<"Enter the col number: ";
cin>>col;
for (int i=1;i<=row;i++)
{
    for(int j=1;j<=col;j++)
    {
        cout<<"*";
    }
    cout<<endl;
}
return 0;
}
