/*
 * This is the main() to test and demonstrate
 * a simple Integer Stack
 */

#include "main.h"

int main() {

    Intstack stack;

    //testing filling the stack and overflow
    for(int i=0; i<STACKSIZE+4; i++){
        if(stack.push(i+1)){
            cout << "yay! " << i+1 << endl;
        } else {
            cout << "boo " << i+1 << endl;
        }
    }

    //programmer debug routine
    stack.dumpStack();

    return 0;
}