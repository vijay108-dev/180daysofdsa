#include<iostream>
using namespace std;
int main()
{

//Arithemetic operator
cout<<13/2<<endl;
cout<<12.4/2<<endl;
cout<<13.4*2<<endl;



//Unary Operator
//Pre-increment and Post-increment
int a=10;
cout<<++a<<endl;
cout<<a<<endl;

int b =10;
cout<<b++<<endl;
cout<<b<<endl;


int c=10;
int d=c++;
cout<<d<<" "<<c<<endl;




//Comparison Operator
//1 and 0
// int x,y;
// cout<<"Enter the value of a: "<<" ";
// cin>>x;
// cout<<"Enter the value of b: "<<" ";
// cin>>y;

//==

// if(x==y)
// {
//   cout<<"Yes"<<endl;
// }else
// {
//   cout<<"No"<<endl;
// }


//>
// if(x>y)
// {
//   cout<<"Yes"<<endl;
// }else
// {
//   cout<<"No"<<endl;
// }



//<
// if(x<y)
// {
//   cout<<"Yes"<<endl;
// }else
// {
//   cout<<"No"<<endl;
// }



//>=
// if(x>=y)
// {
//   cout<<"Yes"<<endl;
// }else
// {
//   cout<<"No"<<endl;
// }


//<=
// if(x<=y)
// {
//   cout<<"Yes"<<endl;
// }else
// {
//   cout<<"No"<<endl;
// }


//!=
// if(x<=y)
// {
//   cout<<"Yes"<<endl;
// }else
// {
//   cout<<"No"<<endl;
// }




//Logical Operator
//AND Operator
// int x,y,z;
// cin>>x>>y>>z;

// if(x>y && x>z)
// {
//   cout<<"Yes"<<endl;
// }
// else
// {
//   cout<<"No"<<endl;
// }




//OR Operator
// char name= 'a';
// if(name=='a' || name=='e' || name=='i' || name=='o' || name=='u')
// {
//   cout<<"Vowel"<<endl;
// }
// else
// {
//   cout<<"Consonant"<<endl;
// }



//NOT Operator

cout<<!25<<endl; //those who are non zero will be 0
cout<<!0<<endl; //those who are zero will be 1






//Bitwise Operator
//Bitwise AND &
int ans= 2&3; // 2=10, 3=11, ans=10=2
cout<<ans<<endl;

//Bitwise OR |
int ans1= 2|3; // 2=10, 3=11, ans=11=3
cout<<ans1<<endl;

//Bitwise XOR ^
int ans2= 2^3; // 2=10, 3=11 //warning 
cout<<ans2<<endl; // ans=01=1


//left shift operator <<
int ans3= 2<<3; // 2=10, ans=100=
cout<<ans3<<endl; // ans=4


//right shift operator >>
int ans4= 18>>3; // 2=10, ans=0
cout<<ans4<<endl; // ans=0



//compliment operator ~
int ans5= ~2; // 2=10, ans=01
cout<<ans5<<endl; // ans=-3 in 2's complement form
// the first bit is the sign bit so it is negative)
// 2's complement of 2 is
// 1's complement of 2 is 01, and adding 1 gives us
// 10 which is -3 in decimal



//Assignment Operator
int x=10;
x+=5; // x=x+5
cout<<x<<endl; 


// Precedence:
// The priority of operators that determines the order in which they are evaluated in an expression.

// Associativity:
// The rule that defines the direction (left-to-right or right-to-left) in which operators of the same precedence are evaluated.



















  return 0;
}