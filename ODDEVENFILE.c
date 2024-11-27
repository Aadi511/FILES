#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int i;
    FILE *fp1, *fp2, *fp3;
    fp1= fopen("DATA.txt", "w+");
    int n;
    printf("Enter values of n");
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++){
    	scanf("%d", &a[i]);
	}
	for(i=0;i<n;i++){
		fprintf(fp1, "%d", a[i]);
	}
    fp2 = fopen("ODD.txt", "w+");
    fp3 = fopen("EVEN.txt", "w+");
    for(i=0;i<n;i++){
    	if(a[i]%2==0){
    		fprintf(fp3, "%d", a[i]);
		}
		if(a[i]%2!=0){
			fprintf(fp2, "%d", a[i]);
		}
	}
	fclose(fp2);
	fclose(fp3);
	return 0;
}
