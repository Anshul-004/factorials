#include<iostream>
using namespace std;


int fact(int f){  // Funtion associated with main performance

    if (f<2){
        return 1;
    }
    else
    {
        return f * fact(f-1);  // simply calculates the factorial by using n*(n-1) formula.
    }
    

}

int main()
{
    int choice;
    cout<<"Enter number for factorial : "<<endl;
    cin>>choice;
    cout<<"Factorial of "<<choice<<" is "<<fact(choice);
    return 0;
}
// licensed with GNU v.3.0
