#include<stdio.h>

int main(){
    int initial, bought, given;
    scanf("%d %d %d", &initial ,&given, &bought); 
    
    int total = initial - given + bought;
    printf("%d\n", total); 
}