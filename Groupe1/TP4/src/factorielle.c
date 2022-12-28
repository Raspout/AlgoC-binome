#include <stdio.h>

 
int factorielle (int num) {
    if (num == 0) {
        return 1;
    }
    else {
        return (num * factorielle (num-1));
        printf("%i", num); 
    }
}

int main(){
    int num = 6;
    printf("%d", factorielle(num)); 
}

