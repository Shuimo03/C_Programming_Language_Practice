#include <stdio.h>
#include <string.h>

char *CPY(char* s1, const char* s2){
	return memcpy(s1,s2,strlen(s2)+1);
}

char *join(char* s1, const char *s2){
	CPY(s1+strlen(s1),s2);
	return s1;
}


int main ()
{
    char s1[] = "Hello";
    char s2[] = "World";
    char s3[]="";
  	//strcpy(s3,s1);
  	//strcat(s1,s2);
    printf("%s",join(s1,s2));
    return 0;
}
