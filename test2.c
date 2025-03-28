#include <stdio.h>
#include <string.h>

char a[1000], b[1000];  


char compare2(char a[], char b[]) {
    if(strlen(a) != strlen(b)) {
        if(strlen(a) > strlen(b)) {
            return 'H';  // HIGHER
        } else { 
            return 'L';  // LOWER
        }
    } else {
        for(int i = 0; i < strlen(a); i++) {
            if(a[i] != b[i]) {
                if(a[i] > b[i]) {
                    return 'H';  // HIGHER
                } else {
                    return 'L';  // LOWER
                }
            }
        }     
        return 'E';  // EQUAL
    }
}

int main() {
    char m[1000], n[1000];  
   henduowei

    char result = compare(m,n);
    if(result == 'H') {
        printf("HIGHER\n");
    } else if(result == 'L') {
        printf("LOWER\n");
    } else {
        printf("EQUAL\n");
    }
    
    return 0;
}
