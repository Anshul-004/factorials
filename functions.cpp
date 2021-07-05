#include<iostream>
using namespace std;


int fact(int f){

    if (f<2){
        return 1;
    }
    else
    {
        return f * fact(f-1);
    }
    

}

int main()
{
    int choice;
    cout<<"Enter number for factorial : "<<endl;
    cin>>choice;
    // cout<<fact(5);
    cout<<"Factorial of "<<choice<<" is "<<fact(choice);
    return 0;
}
