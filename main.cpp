#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int bin,dec=0,rem=0,i=0,bin2;
    cout<<"Please enter the binary number: ";
    cin>>bin;
    bin2=bin;
        while(bin!=0)
    {
        if(rem!=0 and rem!=1)
        {
            dec=0;
            break;
        }
        rem=bin%10;
        bin=bin/10;
        dec = dec + rem * pow(2,i);
        i++;

    }
    if(dec==0 and bin2!=0)
    {
        cout<<"error";
    }
    else if(bin2%10==bin2 and bin2>1)
    {
        cout<<"error";
    }
    else
    {
        cout<<"The decimal number is: "<<dec;

    }



}
