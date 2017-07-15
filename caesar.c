#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>


int main (int argc ,string argv[])
{
    if(argv[1] != '\0')
    {
    int key = atoi (argv[1]);
    if(key>=0)
    {
        if(argc == 2)
        {
            printf("plaintext: ");
            string s = get_string();
            printf("ciphertext:");
            for(int i=0; i <strlen(s) ;i++)
            {
                 
                if(isalpha(s[i]))   //如果是alphabet
                {
                   
                    if(isupper(s[i])) //如果是大寫
                        {
                            s[i]=(char)(((int)s[i]-65+key)%26+65);
                            printf("%c",s[i]);
                        }
                    else if(islower(s[i]))  //☆★★
                        {
                            s[i]=(char)(((int)s[i]-97+key)%26+97);
                            printf("%c",s[i]);
                        }
                }
                else
                    printf("%c",s[i]);
                    
            }
            
            printf("\n");
        }
           return 0;
    }
    if(key <0 || argc!= 2)
    {
        printf("Usage: ./caesar k\n");
    }
    }
    if(argv[1] == '\0')
    {
        printf("Usage: ./caesar k\n");
        return 1;
    }
}
