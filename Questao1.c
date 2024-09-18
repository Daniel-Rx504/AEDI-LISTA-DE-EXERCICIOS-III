#include <stdio.h>

int main() {
    char arr[200];
	int i, j, n = 0;
    char temp;
    
    
    printf("Escreva varias letras:\n");
	
	 while ((arr[n] = getchar()) != '\n' && n < 200) {
        n++; 
    }


for (i = 0; i < n - 1; i++) {
	for (j = 0; j < n - i - 1; j++) {

            if (arr[j] > arr[j + 1]) {
                temp = arr[j];       
                arr[j] = arr[j + 1]; 
				arr[j + 1] = temp; 
            }
        }
        
    }

    printf("Letras Ordenadas:\n ");
    for (i = 0; i < n; i++) {
        printf("%c ", arr[i]);
    }
    
    return 0;
}
