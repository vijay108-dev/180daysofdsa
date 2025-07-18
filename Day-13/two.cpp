// #include<iostream>
// using namespace std;
// void swap(int a , int b){
//   int c;
//   c=a;
//   a=b;
//   b=c;
// }
// int main(){
// int a;
// cout<<"Enter first number: ";
// cin>>a;
// int b;
// cout<<"Enter second number: ";
// cin>>b;
// swap(a,b);
// cout<<a<<b<<endl;  //Value of a and b will not change here because we are passing by value

//   return 0;
// }




#include<iostream>
using namespace std;
void swap(int &a , int &b){
  int c;
  c=a;
  a=b;
  b=c;
}
int main(){
int a;
cout<<"Enter first number: ";
cin>>a;
int b;
cout<<"Enter second number: ";
cin>>b;
swap(a,b);
cout<<a<<b<<endl;  //value of a and b will change here because we are passing by reference

  return 0;
}




//Pass by value and pass by reference
//pass by value means function ko sirf copy milegi
// #include <iostream>
// using namespace std;
// void passByValue(int a){
//     a =a+10; // sirf copy change hogi
//     cout<<"Inside function (pass by value):"<<a<< endl;
// }

// int main() {
//     int num=5;
//     passByValue(num);
//     cout<<"Outside function: "<<num<<endl; // original value same rahegi
//     return 0;
// }



// pass by reference means function ko original value milegi
// Isme function ko address (reference) milta hai original variable change ho sakti hai.
// #include <iostream>
// using namespace std;
// void passByReference(int &a) {
//     a =a+10; // original value change ho jayegi
//     cout<<"Inside function (pass by reference):"<<a<< endl;
// }

// int main() {
//     int num=5;
//     passByReference(num);
//     cout<<"Outside function: "<<num<<endl;// original value badal gayi
//     return 0;
// }
