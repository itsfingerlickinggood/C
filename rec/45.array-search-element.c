#include<stdio.h>
int main(){
    int a, i;
    printf("Enter the no of elements to be stored in an array: ");
    scanf("%d", &a);
    
    int array[a];
    
    for (i = 0; i < a; i++) {
        printf("Enter the element at the position [%d]: ", i);
        scanf("%d", &array[i]);
    }    
    
    printf("\nThe array is: \n");
    for (i = 0; i < a; i++) {
        printf("\t%d", array[i]);
    }
    
    int elementSearch;
    int found = 0;
    int position = -1;
    
    printf("\n\nEnter the element to be searched: ");
    scanf("%d", &elementSearch);
    
    for (i = 0; i < a; i++) {
        if (elementSearch == array[i]) {
            found = 1;
            position = i;
            break;
        }
    }
    
    if (found == 1) {
        printf("ELEMENT FOUND!\n");
        printf("\nThe ELEMENT %d is at position->[%d]\n", elementSearch, position);
    } else {
        printf("NOT FOUND!\n");
    }
    
    return 0;
}
