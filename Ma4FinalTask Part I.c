#include <stdio.h>
int main(){
    for(int x = 1; x<=9;x++){
        for(int y = x;y<=9;y++){
            y == 9 ? printf("%d\n", y) : printf("%d", y);
        }
    }
    return 0;
}
