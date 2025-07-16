#include<iostream>
using namespace std;
int main()
 {

//   int n;
//   cout<<"Enter a number: ";
//   cin>>n;
//   int i=1; // Initialize
//   while(i<=10)// Condition
//   {
//     cout<<i*n<<endl;
//     i++; // Increment
//   }


// int n;
// cout<<"Enter a number: ";
// cin>>n;
// int i=1;
// while(i<=n){
// if (n%i==0) {
//  cout<<i<<"is a factor of"<<n<<endl;
// }
// i++;
// }




// Do-While Loop

// Print numbers from 1 to n using do-while loop
// int n;
// cout<<"Enter a number: ";
// cin>>n;
// int i=1;
// do{
// cout<<i<<endl;
// i++;
// } while(i<=n);



// Sum of numbers from 1 to 10 using do-while loop

// int i=1;
// int sum=0;
// do{
//     sum+=i;
//     //cout<<sum<<" ";
//     i++;
//   }while(i<=10);
//     cout<<"Sum of numbers is:"<<sum<<endl;

//why we do not use do while loop mostly?
// Because it executes at least once, even if the condition is false.
// This can lead to unexpected behavior if the initial condition is not met.
// In contrast a while loop checks the condition before executing.
//Making it more predictable for certain scenarios.
// For example ->if you want to read user input until a valid value is provided a while loop is more suitable.




// Break Statement
// int i=1;
// while(i<=10){
// if(i==4) {
// break; // loop yahin ruk jaayega
// }
// cout<<i<<endl;
// i++;
// }




// Continue Statement
// int i=1;
// while(i<=10){ 
// if(i%4==0){
// i++;       // pehle i++ karo warna infinite loop ho sakta hai
// continue;  // 4 se divisible number skip ho jaayega
// }
// cout<<i<<endl;
// i++;
//   }







// Switch Case
// int choice;
// cout<<"Enter your Choice: ";
// cin>>choice;
// switch(choice)
// {
// case 1:
// cout<<"Vijay"<<endl;
// break;
// case 2:
// cout<<"Sahil"<<endl;
// case 3:
// cout<<"Aj"<<endl;
// break;
// default:
// cout<<"Invalid choice"<<endl;

//     }


//scope of variables
int x=10; // Global variable
{
  int y=20; // Local variable
  cout<<x<<endl; // Accessing global variable
  cout<<y<<endl; // Accessing local variable
}
cout<<x<<endl; // Accessing global variable
// cout<<y<<endl; // error y is not accessible outside the block






return 0;
}