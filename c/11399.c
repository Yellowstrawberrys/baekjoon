#include <stdio.h>

void sort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i],j;

		for(j=i-1; j>=0 && arr[j]>key; j--){
			arr[j+1] = arr[j];
		}
	
		arr[j+1] = key;
    }
}

int main() {
    int n,t=0,ct=0;
    scanf("%d", &n);
    
    int a[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    sort(a, n);
    for(int i=0; i<n; i++) {
        ct += a[i];
        t += ct;
    }
    printf("%d", t);
    return 0;
}
