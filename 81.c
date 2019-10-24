#include <stdio.h>

int main() {
	int n,i;
	scanf("%d",&n);
	
	int a[n];
	for(i=0;i<n;i++) {
	  scanf("%d",&a[i]);
	}
	printf("The given array is: ");
	for(i=0;i<n;i++) {
	  printf("%d ",a[i]);
	}
	
	int max=a[0],repeat=0;
	for(i=1;i<n;i++) {
	  if(max<a[i]) {
	    max=a[i];
      repeat=i;
	  }
	}
	printf("\nThe maximum repeating number is: %d",a[repeat]);
	return 0;
}
