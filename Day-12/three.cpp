#include <iostream>
using namespace std;

int main() {
  //Decimal to Octal Conversion
    int num;
    cout<<"Enter a decimal number: ";
    cin>>num;
    int rem, ans = 0, mul = 1;

    while(num>0){
        // Get remainder in base 8
        rem=num%8;
        // Update num by dividing it by 8
        num=num/8;
        // Add to answer
        ans = ans + rem * mul;
        // Multiply by 10 for next digit
        mul=mul*10;   
    }
    cout<<"Octal number is:"<<ans<<endl;
    return 0;
}
