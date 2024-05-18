//SIMPLE CALCULATOR
#include <iostream>   
using namespace std;
//FUNCTION FOR ADDITION
float add(float x,float y)
{
    return(x+y);
}
//FUNCTION FOR SUBTRACTION
float sub(float x,float y)
{
    return(x-y);
}
//FUNCTION FOR MULTIPLICATION
float mul(float x,float y)
{
    return(x*y);
}
//FUNCTION FOR DIVISION
float div(float x,float y)
{
    return(x/y);
}
//MAIN FUNCTION
int main()
{
   float n1,n2;
   int ope,n;
   cout<<"SIMPLE CALCULATOR"<<endl;
   cout<<"CHOICE LIST"<<endl;
   cout<<"1.ADDITION"<<endl;
   cout<<"2.SUBTRACTION"<<endl;
   cout<<"3.MULTIPLICATIONTION"<<endl;
   cout<<"4.DIVISION"<<endl;
   do
   {
   cout<<"ENTER CHOICE:"<<endl;
   cin>>ope;
   cout<<"ENTER TWO NUMBERS:"<<endl;
   cin>>n1>>n2;
   switch(ope)
   {
       case 1:
            cout<<"ADDITION OF "<<n1<<" AND "<<n2<<" IS "<<add(n1,n2)<<endl;
            cout<<"_\n";
            break;
       case 2:
            cout<<"SUBTRACTION OF "<<n1<<" AND "<<n2<<" IS "<<sub(n1,n2)<<endl;
            cout<<"_\n";
            break;
       case 3:
            cout<<"MULTIPLICATION OF "<<n1<<" AND "<<n2<<" IS "<<mul(n1,n2)<<endl;
            cout<<"_\n";
            break;
    case 4:
            cout<<"DIVISION OF "<<n1<<" AND "<<n2<<" IS "<<div(n1,n2)<<endl;
            cout<<"_\n";
            break;
    default:
            cout<<"enter correct choice"<<endl;
            cout<<"_\n";
            break;
   }
   cout<<"PRESS 0 TO CONTINUE : ";
   cin>>n;
   }while(n==0);
   cout<<"THANKYOU";
    return 0;
}