// build in function string 



// strlen

#include<stdio.h>
#include<string.h>
int main(){

    char* str = "hemant  mohane";
    int x = strlen(str);
    printf("%d",x);
    return 0;
return 0;
}



//strcpy



#include<stdio.h>
#include<string.h>
int main(){

    char s1[15] = "hemant mohane";
    char s2[15];
    strcpy(s2,s1);
    printf("%s",s2);


return 0;
} 


// strcat

#include<stdio.h>
#include<string.h>
int main(){

    char s1[15] = "hemant mohane";
    char s2[15] =" \nnisha mohane";
    strcat(s1,s2);
    printf("%s",s1);


return 0;
}