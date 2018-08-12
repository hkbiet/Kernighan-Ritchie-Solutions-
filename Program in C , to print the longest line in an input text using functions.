/*Program in C , using fucntions ,  to print the longest line in an input text*/
 
#include<stdio.h> 
 
int grabline(char newline[]); 
 
void copy(char from[] , char to[]); 
 
int main(){ 
 
char currentline[200]; 
 
char longestline[200]; 
 
int current=0; 
 
int longest=0; 
 
char c; 
 
printf("ENTER THY TEXT HITHER : \n\n"); 
 
while((current=grabline(currentline))>0){ 
 
if(current>longest){ 
 
longest=current; 
 
copy(currentline,longestline); 
 
                   } 
 
                      } 
 
printf(" \n\n THE LONGEST LINE IN THE INPUTTED TEXT FOLLOWS : \n\n"); 
 
printf("\n\n%s\n\n",longestline); 
 
return 0; 
 
} 
 
 
 
int grabline(char newline[]){ 
 
int count=0; 
 
char c; 
 
int i=0; 
 
for(i=0;((c=getchar())!='\n') && ((c!='\t'));++i){ 
 
newline[i]=c; 
 
++count; 
 
                                            } 
 
newline[i]='\0'; 
 
return count; 
 
                          } 
 
 
 
 
 
void copy(char from[] , char to[]){ 
 
int i=0; 
 
while((to[i]=from[i])!='\0') 
 
++i; 
 
                            } 
