#include<stdio.h>
int main(){
	int n,i,p,j,count=0;
	printf("Enter the number of the array elements:");
	scanf("%d",&n);
	int a[n];
	printf("enter the array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		
	}
	for(p=0;p<n;p++){
		for(j=p+1;j<n;j++){
			if(a[p]==a[j]){
				printf("%d ",a[p]);
				count=count+1;
			}
		}

	}
    return 0;

	
}
