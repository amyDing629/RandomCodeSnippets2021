#include <stdio.h>
#include <stdlib.h>
int main(){
    char phone[11];
    int num = 0;
    int rst = 0;
    scanf("%s", phone);
    
    while (scanf("%d", &num) != EOF){
    
    if (num == -1){
        printf("%s\n", phone);
    }
    else if (num >= 0 && num <= 9){
        printf("%c\n", phone[num]);
    }
    else{
        printf("ERROR\n");
        rst = 1;
    }
    }
    
    return rst;



}
