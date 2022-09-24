#include<iostream>
#include<conio.h>
using namespace std;
int reverse(int);
int reverse(int x)
{
    int rev=0,l,i;
    for(;x;)
    {
        l=x%10;
        x=x/10;
        rev=rev*10+l;
    }
}
int main()
{
    int x;
    cout<<"Enter a Number "<<endl;
    cin>>x;
    if(x>=0)
    {
        if(x==reverse(x))
        {
            cout<<"True "<<endl;
        }
        else
        {
            cout<<"False "<<endl;
             getch();
        }
    }
    else
    {
        cout<<"False "<<endl;

    }
    getch();
    return 0;
}

