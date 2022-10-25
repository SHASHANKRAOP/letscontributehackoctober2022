#include<iostream>

using namespace std;
int main()
{
   int num, temp=0, last, rem, sum=0;
   cout<<"Enter a Number: ";
   cin>>num;
   while(num!=0)
   {
      if(temp==0)
      {
         last = num%10;
         temp++;
      }
      rem = num%10;
      num = num/10;
   }
   sum = rem + last;
   cout<<"\nSum of First ("<<rem<<") and Last ("<<last<<") Digit = "<<sum;
   cout<<endl;
   return 0;
}