nclude<stdio.h>
#include<stdlib.h>
#include<string.h>

char * char_Decal(char *src , int k , char *dest){
    int len = strlen(src);
    int i=0,j;
    dest = malloc(len*sizeof(char));
    dest[len] = '\0';
    while(src[i] != '\0'){
        j = (i+k)%len;
        dest[j] = src[i];
    }
    //dest[len] = '\0';
    return dest;
}

int main(){
    char *src = "abcd";
    char *dest = char_Decal(src,2,dest);
    printf("%s devient %s",src,dest);
    return 0;


}
