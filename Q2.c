#include<stdio.h>
#include<string.h>

void main()
{
	int i,len,j,frequency;
	char str1[100];

	
	printf("Enter the string of your choice:-");
	scanf("%s",&str1);
	
	len=strlen(str1);
	printf("len of your string is:- %d\n",len);
	
	for(i=0;i<len;i++){
		
		frequency=1;
		
		if(str1[i]){
			
			for(j=i+1;j<len;j++){
				
				if(str1[i] == str1[j]){
					
					frequency++;
					str1[j]='\0';
				}
			}
		}
		printf("%c = %d \n",str1[i],frequency);
		
	}
	
	
	
	
	
	
	
	
//pattern	
//	for(i=1;i<=5;i++){
//		
//		for(s=4;s>=i;s--){
//			printf(" ");
//		}
//		for(j=1;j<=i;j++){
//			printf("*");
//		}
//		printf("\n");
//	}
}
