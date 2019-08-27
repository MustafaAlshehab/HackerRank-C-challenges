#include <stdio.h>
#include <string.h>

int main() {
 
    int distinct_character1 = 0;
    int distinct_character2 = 0;
    int count[256] = {0};
    int count2[256] = {0};

    char *a = "aaaaaaaaaa";
    char *b = "bbbb";

    for(int i = 0; i < strlen(a); i++){
        count[a[i]]++;
        printf("char to int >>>>> %d \n", a[i]);
    
    }
    for (int i = 0; i < 256; i++){
        if(count[i] == 1){
            distinct_character1++;
        }
    }
    for(int i =0; i < strlen(b); i++){
       
        count2[b[i]]++;
        printf("char to int >>>>> %d \n", b[i]);
   
    }
    for (int i = 0; i < 256; i++){
        if(count2[i] == 1){
            distinct_character2++;
        }
    }
   
    printf("value of distict_charcter1 is: %d\n", distinct_character1);
    printf("value of distict_charcter2 is: %d\n", distinct_character2);

    return 0;
}