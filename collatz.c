#include <stdio.h>
#include <stdbool.h>

int main(){
    int i = 1;
    while(true){
        int count = 0;
        int j = i;
        while(j > 1){
            if(j % 2 == 0)
                j /= 2;
            else
                j = 3 * j + 1;
            count++;
        }
        printf("%d works! And in only %d steps!\n", i, count);
        i++;
    }
}
