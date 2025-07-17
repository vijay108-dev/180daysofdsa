#include<iostream>
using namespace std;
int main()
{
//Decimal to Binary Conversion
int num;
cout<<"Enter a number: ";
cin>>num;
int rem, ans=0, mul=1;

while(num>0){
   //reminder of num
    rem=num%2;
    //quotient of num
    num=num/2;
    //answer
    ans=ans+rem*mul;
    //multiply by 10 for next digit
    mul=mul*10;
}

cout<<"Reversed number is:"<<ans<<endl;


  return 0;
}