#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int turn(int y, int x);
int main(int argc, string argv[]){
    printf("plaintext:  ");
    string s = get_string();
    printf("ciphertext: ");
    if(argc == 2){
        int k = atoi(argv[1]);
        int add;
        for(int i=0, n=strlen(s); i<n; i++)
        {   
            add=(int)s[i]+k;
            if( isupper(s[i])){
                printf("%c",toupper((char) turn(1,add)));
            }else if(islower(s[i])){
                printf("%c",tolower((char) turn(2,add)));
            }else{
                 printf("%c",s[i]);
            }
        } 
           
    }else{
        printf("Usage: ./caesar k");
    }
    printf("\n");
    return 0;
}

int turn(int y, int x){
    int count=0;
    if(y==1){
        //upper
        count=((x-65) % 26) + 65;
    }else if(y==2){
        //lower
        count=((x-97) % 26) + 97;
    }
    return count;
}