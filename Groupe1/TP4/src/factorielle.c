#include <stdio.h>

 
int factorielle (int num) {
    //calcule de !0
    if (num == 0) {
        return 1;
    }
    else {
        //retourne n * (n-1) jusqu'à ce que n = 0
        return (num * factorielle (num-1));
        printf("%i", num); 
    }
}

int main(){
    int num = 6;
    printf("%d", factorielle(num)); 
}

