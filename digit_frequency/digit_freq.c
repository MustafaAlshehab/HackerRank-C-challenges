#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  
    int num[10] = {0}, temp = 0;
    char s[1000];

    scanf("%s", s);

    for (int i = 0; i < strlen(s); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            temp = s[i] - 48;
            num[temp] += 1;
        }
    }

    for(int i = 0; i < 10; i++){
      printf("%d ",num[i]);
    }

    printf("\n");

    return 0;
}
