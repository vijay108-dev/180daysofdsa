#include<iostream>
using namespace std;
int main(){

// int n;
// cout<<"Input the number: "<<endl;
// cin>>n;
// for(int row=1; row<=n; row++)
// {
//     // space print
//     for(int col=1; col<=n-row; col++)
//         cout<<"  ";

//     // star print
//     for(int col=1; col<=row; col++)
//     {
//         cout<<"* ";

//     }   

//     cout<<endl;
// }


for(int row=1; row<=4; row++)
{
    // space print
    for(int col=1; col<=4-row; col++)
        cout<<"  ";

    // number print
    for(int col=1; col<=row; col++)
    {
        cout<<row<<" ";

    }   

    cout<<endl;
}



for(int row=1; row<=4; row++)
{
    // space print
    for(int col=1; col<=4-row; col++)
        cout<<"  ";

    // number print
    for(int col=1; col<=row; col++)
    {
        cout<<col<<" ";

    }   

    cout<<endl;
}




for(int row=1; row<=4; row++)
{
    // space print
    for(int col=1; col<=4-row; col++)
        cout<<"  ";

    // number print
    for(int col=1; col<=row; col++)
    {
        cout<<col<<" ";

    }   

    cout<<endl;
}


for(int row=1; row<=4; row++)
{
    // space print
    for(int col=1; col<=4-row; col++)
        cout<<"  ";

    // char print
    for(char name='A'; name<='A'+row-1; name++)
    {
        cout<<name<<" ";

    }   

    cout<<endl;
}

// method - 2
for(int row=1; row<=4; row++)
{
    // space print
    for(int col=1; col<=4-row; col++)
        cout<<"  ";

    // char print
    for(int col=1; col<=row; col++)
    {
        char name = 'A' + col-1;
        cout<<name<<" ";

    }   

    cout<<endl;
}




for(int row=1; row<=5; row++)
{
    // space print
    for(int col=1; col<=5-row; col++)
        cout<<"  ";

    // number print
    for(int col=row; col>=1; col--)
    {
        cout<<col<<" ";

    }   

    cout<<endl;
}









  return 0;
}