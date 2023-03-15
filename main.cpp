#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double nr,dec=0,rem=0,i=0;
    double b=0,r=0,j=1;
    cout<<" Please enter a number: ";
    cin>>nr;
    int nr2 = nr;
    int num = nr;
    int num2 = nr;
    int f = nr;
        while(f>=10)
        {
            f/=10;
        }
        while(num!=0)
    {
        if(rem!=0 and rem!=1)
        {
            dec=0;
            break;
        }
        rem=num%10;
        num=num/10;
        dec = dec + rem * pow(2,i);
        i++;

    }
    while(num2>0)
    {
        r=num2%2;
        num2=num2/2;
        b= b + r * j;
        j= j*10;

    }
    if(dec==0 and nr2!=0)
    {
        cout<<" The binary number is: "<<b<<endl;
        cout<<" The number you entered should be expressed in the base 2 numeral system or binary numeral system to be correctly inter- preted as a decimal number \t";
    }
    else if(nr2%10==nr2 and nr2>1 or f>1)
    {
        cout<<" The binary number is: "<<b<<endl;
        cout<<" The number you entered should be expressed in the base 2 numeral system or binary numeral system to be correctly inter- preted as a decimal number \t";
    }
    else
    {
        cout<<" The decimal number is: "<<dec<<endl;
        cout<<" The binary number is: "<<b;

    }

}
