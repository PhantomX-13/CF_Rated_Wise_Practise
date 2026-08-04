#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int digit = 0;
    for(int i = 1; i <=n; i++){
        int N;
        scanf("%d", &N);

        digit += N;;
    }
    if(digit % 3 == 0){
        printf("YES");
    }
    else{
        printf("NO");
    }
}