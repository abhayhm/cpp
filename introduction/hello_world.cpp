// Single line comment
/* Multi line
   Comment. */

/* Comments are only for readability and are discarded(removed by compiler)
   in preprocessing(compile) time. */

/* This is to include standard stream IO facilities.
   Without this below statement:
   std::cout<<"Hello, World!"<<std::endl;
   would make no sense. */
#include <iostream>

/* There should be only one global main function.
   Execution starts from main always.
   Returns integer type value.
   0 is returned on successful completion.
   non 0 value represents failure. */
int main(){

    /* "<<"(put to) operater writes
       its second argument to its first.
       */
    std::cout<<"Hello, World!\n";

    // Returns 0 on successful completion.
    return 0;
}