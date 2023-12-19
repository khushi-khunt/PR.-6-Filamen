#include<stdio.h>
#include<string.h>
/*
Input:
Enter any string: development

Output:
Frequency of each letter:
d => 1
e => 2
v => 1
l => 1
o => 1
p => 1
m => 1
n => 1
t => 1
*/
void main(){
	int i,j;
	char str[100];
	int len;
		int cnt;
	
	printf("Enter any string  :- ");
    gets(str);
    
	len=strlen(str);
	
	for(i=0; i<len; i++){
			cnt=1;
		if(str[i]){
			 
		for(j=i+1; j<len; j++){
		 
			if(str[i]==str[j]){
				cnt++;
				str[j]='\0';
			}
		
		}
		
			printf("%c = %d\n",str[i],cnt);
				}
	}
	
}
