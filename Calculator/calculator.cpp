#include <iostream>
using namespace std;
int x;
int y;
int output;
int done;
int function;
void divide();
void multiply();
void add();
void subtract();

int main(){
    cout<<"Pick Multiply(1), Division(2), Addition(3), Subtration(4)\n";
    cin>>function;
    cout<<"Input yout two or more numbers.\n";
    cin>>x;
    cin>>y;
    if (function == 1){
        multiply();
    }else if (function == 2){
        divide();
    }else if (function == 3){
        add();
    }else if (function == 4){
        subtract();
    }

    cout<<"\nType done when done.";
    cin>>done;
 return 0;
}



void divide(){
    int output = x / y;
    cout<<x<<" Divided by "<<y<<" Equals ";
    cout<<output;
}

void multiply(){
    int output = x * y;
    cout<<x<<" Times "<<y<<" Equals ";
    cout<<output; 
}

void subtract(){
    int output = x - y;
    cout<<x<<" Subtracted by "<<y<<" Equals ";
    cout<<output; 
}

void add(){
    int output = x + y;
    cout<<x<<" Plus "<<y<<" Equals ";
    cout<<output; 
}