//
/*
* This program will check whther or not x is smaller than y and if not add x to x's value and will repeat until x is greater to y. 
Then it will display if x is even or odd at the end.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
  
    int x = 0;
    int y = 5;

    while (x < y){
        printf("%i\n", x);
        x = x + 3;
    }

    if (x % 2 == 0){
        printf("x is even\n");
    }
    else {
        printf("x is odd\n");
    }

    return 0;
}