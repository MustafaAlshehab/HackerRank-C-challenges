#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lexicographic_sort(const char* a, const char* b) {
    return strcmp(a, b);
}

int lexicographic_sort_reverse(const char* a, const char* b) {
    return strcmp(b, a);
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int distinct_character1 = 0;
    int distinct_character2 = 0;
    int count[256] = {0};
    int count2[256] = {0};

    for(int i = 0; a[i]; i++){
        count[a[i]]++;
    }
    for (int i = 0; i < 256; i++){
        distinct_character1++;
    }
    for(int i =0; b[i]; i++){
        count2[b[i]]++;
    }
    for (int i = 0; i < 256; i++){
        if(count[i] == 1){
            distinct_character2++;
        }
    }
   if (distinct_character1 == distinct_character2) {
        return lexicographic_sort(a, b);
    }
    else {
        return distinct_character1 < distinct_character2 ? 0 : 1;
    }
    
}

int sort_by_length(const char* a, const char* b) {
    int length1 = strlen(a);
    int length2 = strlen(b);

    if (length1 == length2) {
        return lexicographic_sort(a, b);
    }
    else {
        return length1 < length2 ? 0 : 1;
    }
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
   for(int i = 0; i < len-1; i++) {
      for(int j = i+1; j < len; j++) {
        if(cmp_func(arr[i], arr[j]) > 0) {
            char *temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
      }
   }
}

int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
    printf("\n");
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
}