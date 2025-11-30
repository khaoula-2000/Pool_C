#include<stdio.h>
#include<stdbool.h>
bool is_pal_tail(char *s){
    char *end = s;
    while(*end != '\0'){
        end++;
    }
    end--; 
    while(s<end){
        if(*s!=*end){
            return false;
        }
        s++;
        end--;      
    }
    return true;
}

int main(){
    char string[100];
    printf("Enter a string: ");         
    fgets(string, sizeof(string), stdin);
    if(is_pal_tail(string)){
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}