#include <stdio.h>

int main() {
  int a[10][10],n,m,i,j,count=1;
  printf("Input number of Rows for the matrix: ");
  scanf("%d",&n);
  printf("Input number of Columns for the matrix: ");
  scanf("%d",&m);
  
  printf("Input elements in the first matrix: \n");
  for(i=0;i<n;i++) {
    for(j=0;j<m;j++) {
      printf("element - [%d],[%d]: ",i,j);
      scanf("%d",&a[i][j]);
    }
  }
  printf("\nThe matrix is: \n");
  for(i=0;i<n;i++) {
    for(j=0;j<m;j++) {
      printf("%d ",a[i][j]);
    }
    printf("\n");
  }
  
  for(i=0;i<n;i++) { 
    for(j=0;j<m;j++) {
      if(a[i][j]!=1 && a[j][i]!=0){
        count=0;
      }
    }
  }
  
  if(count==1) {
    printf("The matrix is an identity matrix.");
  }
  else if(count==0) {
    printf("The matrix is not an identity matrix.");
  }
  return 0;
}
