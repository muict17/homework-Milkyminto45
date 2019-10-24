#include <stdio.h>

int main() {
	int n,i,j,repeat;
	scanf("%d",&n);
	
	int a[n];
	for(i=0;i<n;i++) {
	  scanf("%d",&a[i]);
	}
	printf("The given array is: ");
	for(i=0;i<n;i++) {
	  printf("%d ",a[i]);
	}

  for(i=0;i<n;i++) {
    int count=1;
    for(j=0;j<n;j++) {
      if(a[i]==a[i+1]) {
        count++;
      }
    }
    if(count>n/2) {
    repeat=a[i];
    printf("\nThe majority element is: %d",repeat);
    }
  }
	return 0;
}
