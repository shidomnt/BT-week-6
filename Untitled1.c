//Sap xep thu tu cac ky tu trong 1 chuoi ky tu  !!!

#include<stdio.h>
#include<string.h>

//int swap(char a, char b){
//	char n;
//	n=a; a=b; b=n;
//	return a,b;
//}

int main(){
	printf("Nhap 1 chuoi ky tu: ");
	char arr[100];
	scanf("%s", &arr);
	int n= strlen(arr);
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				char tmp;
				tmp= arr[i];
				arr[i]= arr[j];
				arr[j]= tmp;
			}
		}
	}
	printf("\n%s", arr);
	return 0;
}
