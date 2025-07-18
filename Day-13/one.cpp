#include<iostream>
using namespace std;

int sum(int a,int b){
    return a+b;
}

int main(){
    int x,y;
    cout<<"Enter two numbers: ";
    cin>>x>>y;
    cout<<"The Sum of two number is = "<<sum(x,y)<<endl;

    return 0;
}

// #include<iostream>
// using namespace std;
// // Function to check if a number is prime or not
// bool isPrime(int num) {
//     if(num<=1)
//     return 0;
//     for(int i =2;i*i<=num;i++) {
//         if(num%i == 0)
//             return 0;
//     }
//     return 1;
// }
// int main() {
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     if(isPrime(n))
//         cout<< n<<"is a prime number.";
//     else
//         cout<< n<<"is not a prime number.";

//     return 0;
// }




// #include<iostream>
// using namespace std;
// //factorial of a number
// int factorial(int n){
//     int fact=1;      
//     for(int i=1;i<=n;i++){
//         fact*=i;     
//     }
//     return fact;
// }

// int main() {
//     int n;
//     cout<<"Enter a number:";
//     cin>>n;
//     cout<<"Factorial of "<< n <<" is "<<factorial(n)<<endl;
//     return 0;
// }

