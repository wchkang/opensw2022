#include "myfuncs.h"
#incoude <stdio.h>

int main()
{
   // call functions 3 times...
   for (int i=0; i<3; i++) {
      foo();
      goo();
   }

   // call zoo three times...
   for (int i=0; i<3; i++) {
      zoo();
   }

   return 0;
}
