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
            cout << "pushed: " << i+1 << endl;
        } else {
            cout << "failed: " << i+1 << endl;
        }
    }
    cout << endl;

    //testing isEmpty()
    if(stack.isEmpty()){
        cout << "stack is empty" << endl;
    } else {
        cout << "stack is NOT empty" << endl;
    }
    cout << endl;

    //testing peeking
    try {
        cout << "peeked: " << stack.peek() << endl;
    } catch (...) {
        cout << "failed" << endl;
    }
    cout << endl;

    //programmer debug routine
    stack.dumpStack();

    //testing popping whole stack
    for(int i=0; i<STACKSIZE+4; i++){
        try {
            cout << "popped: " << stack.pop() << endl;
        } catch (...) {
            cout << "failed" << endl;
        }
    }
    cout << endl;

    stack.dumpStack();

    //testing peeking
    try {
        cout << "peeked: " << stack.peek() << endl;
    } catch (...) {
        cout << "failed" << endl;
    }
    cout << endl;

    //testing isEmpty()
    if(stack.isEmpty()){
        cout << "stack is empty" << endl;
    } else {
        cout << "stack is NOT empty" << endl;
    }
    cout << endl;


    return 0;
}