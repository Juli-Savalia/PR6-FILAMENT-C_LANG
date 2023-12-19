//Write a Program to check whether a string is a palindrome or not without using string functions.:-


#include<stdio.h>
#include<string.h>

void main()
{

	char str1[100];
	int i,length=0;
	int check=0;
//    int length=strlen(str1);

	printf("enter the string of your choice:-");
	scanf("%s",&str1);


	for(i=0;str1[i]!=NULL;i++){
		length++;
	}
	
    for(i=0;i<length;i++) {
    	
        if (str1[i]==str1[length-i-1]) {
        	check=1;
        }
        
        else{
        	check=0;
		}
    }
    
    if(check==1){
    	printf("pali");
	}
	
	else{
		printf("not pali");
	}

}
