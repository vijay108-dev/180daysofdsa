#include <iostream>
using namespace std;
int main() {
    // Binary to Octal Conversion
    int num;
    cout<<"Enter a binary number: ";
    cin>>num;
    // Step 1: Convert Binary to Decimal
    int rem, deci=0, mul=1;
    while(num>0){
        rem = num%10;       
        num = num/10;       
        deci = deci+rem*mul; 
        mul = mul*2;        
    }

    // Step 2: Convert Decimal to Octal
    int ans=0, mul2=1;
    while (deci>0) {
        rem = deci%8;      // get remainder base 8
        deci = deci/8;  // divide by 8
        ans = ans + rem * mul2; // add to answer
        mul2 = mul2*10;       // move to next
    }

    cout<<"Octal number is:"<<ans<<endl;

    return 0;
}
