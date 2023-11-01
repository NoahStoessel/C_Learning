// + - * / 

#include <stdio.h>

int main(){
    // be carefull with int division
    int num_1 = 100;
    int num_2 = 250;// this may truncate 0.5 too so set as float for good measure
    // if result is set as int but result has numbers after the deccimal . they will be truncated
    int result = num_1 / num_2;
    // or to precede add this
    result = num_1 / (float) num_2; // preceeding is done like this
    // but with float its ok
    // mod gives remainder of an division
    result = 4 % 2; 
    // increment by one
    num_1++;
    // decrement by 1;
    num_2--;
    /// Pretty Much
    // augmented asignment operators
    num_1 += 5;
    num_2 /= 3;
    num_1 *= 5;
    num_2 -= 2;
    
    return 0;
}