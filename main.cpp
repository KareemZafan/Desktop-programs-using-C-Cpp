#include <iostream>
#include<algorithm>
#define MAX_SIZE 1000
using namespace std;
int multiply(int x , int res[] , int res_Size) ;
void fact(int num) ;
int main()
{


    fact(700) ; /* Calculate factorial of 100 */
    return 0;
}

int multiply(int x , int res[] , int res_Size)
{
    int carry   = 0 ;
    int product = 0  ;

    for(int i=0 ; i<res_Size ; ++i)
    {
         product = res[i] *x + carry ;
         res[i]      = product % 10 ;
         carry       = product / 10 ;
    }

   while(carry)
   {
       res[res_Size]  = carry % 10 ;
       carry  /= 10 ;
       res_Size++ ;

   }

return res_Size ;
}
void fact(int num) {
   unsigned int res_Size = 1 ;
   int res[MAX_SIZE] ; res[0]  = 1 ;
   for(int i=2 ; i<=num ; ++i)
   {
       res_Size = multiply(i ,res , res_Size ) ;

   }

   /* Here you know the elements number in the res array
      so print the value of the large factorial */

    for(int i = res_Size-1 ; i>= 0 ; --i )
    {

        cout<<res[i] ;
    }

}
