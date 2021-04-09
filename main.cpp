#include <iostream>
using namespace std;

int main()
{
   int r, c;
   for(r = 5; r >=1; r--){
      for(c = 1; c <= 5-r; c++)
      {
        cout<<" ";
      }
     for(c = 1; c <= r; c++)
     cout<<"*";
     cout<<endl;
   }
    return 0;
}