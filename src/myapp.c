#include "myfuncs.h"

int main()
{
   for (int i=0; i<3; i++) {
      foo();
      goo();
   }

   for (int i=0; i<3; i++) {
      zoo();
   }

   return 0;
}
