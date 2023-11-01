#include <stdio.h>

int max(int x, int y){
    // shortcut to doin allat
    //if(x > y){
    //    return x;
    //}
    //else{
    //    return y;
    //}
    return (x > y) ? x : y; // first condition then ? then first item returned if true after : then item returned if false
}




int main(){
    // idk wtf ternary is but ok lets try

    int max = findMax(3,4);

    printf("%d", max);
    return 0;
}