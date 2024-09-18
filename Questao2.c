#include <stdio.h>

int main() {
    int arr[] = {8, 4, 3, 2, 5};
    int n = 5; 
    int i, j, temp;
    int trocou;  
    
 
 for (i = 0; i < n - 1; i++) {
 	
 	for (j = 0; j < n - i - 1; j++) {
	 
	 if (arr[j] > arr[j + 1]) {
                temp = arr[j];       
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;  
                trocou = 1; 
            }
        }

        if (trocou == 0) {
            break;
        }
    }

    printf("Array ordenado: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }


}

