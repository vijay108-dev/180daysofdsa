#include<iostream>
using namespace std;
int main()
{
  //Print a centered right-angled triangle star pattern
// int n;
// cout<<"Enter the input"<<" ";
// cin>>n;
// for(int row=1;row<=n;row++)
// {
//    //Space print
//    for(int col=1;col<=n-row;col++)
//    {
//       cout<<"  ";
//    }
   
//     //Star print
//     for(int col=1;col<=2*row-1;col++)
//     {
//         cout<<"* ";
//     }
//     cout<<endl;

// }


// int n;
// cout<<"Enter the input"<<" ";
// cin>>n;
// for(int row=1;row<=n;row++)
// {
//    //Space print
//    for(int col=1;col<=n-row;col++)
//    {
//       cout<<"  ";
//    }
   
//     //1 to row
//     for(int col=1;col<=row;col++)
//     {
//         cout<<col<<" ";
//     }
//     //row-1 to 1
//     for(int col=row-1;col>=1;col--)
//     {
//         cout<<col<<" ";
//     }

//     cout<<endl;

// }




// int n;
// cout<<"Enter the input"<<" ";
// cin>>n;
// for(int row=n;row>=1;row--)
// {
//    //Space print
//    for(int col=1;col<=n-row;col++)
//    {
//       cout<<"  ";
//    }
   
//     //Star print
//     for(int col=1;col<=2*row-1;col++)
//     {
//         cout<<"* ";
//     }
//     cout<<endl;

// }






int n;
cout<<"Enter the input: ";
cin>>n;
for(int row=n;row>=1;row--)
{
   // print*
   for(int col=1;col<=row;col++)
   {
      cout<<"* ";
   }
   
    //Print space
    for(int col=1;col<=2*n-2*row;col++)
    {
        cout<<"  ";
    }
    //Print *    
    for(int col=1;col<=row;col++)
    {
        cout<<"* ";
    }

    cout<<endl;

}


for(int row=1;row<=n;row++)
{
   // print*
   for(int col=1;col<=row;col++)
   {
      cout<<"* ";
   }
   
    //Print space
    for(int col=1;col<=2*n-2*row;col++)
    {
        cout<<"  ";
    }
    //Print *    
    for(int col=1;col<=row;col++)
    {
        cout<<"* ";
    }

    cout<<endl;

}




  return 0;
}