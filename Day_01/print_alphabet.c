#include<stdio.h>
#include<unistd.h>
void print_alphabet(){
    for(char c ='a';c<='z';c++){
       write(1,&c,1);
    }
}
void main(){
    print_alphabet();
}