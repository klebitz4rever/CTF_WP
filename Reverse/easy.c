#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char a[]="wwwwwww";
    char b[]="d`vxbQd";

    //try to find out the flag
    printf("please input flag:");
    scanf("%s",a);

    if(strlen(a)!=7){
        printf("NoNoNo\n");
        system("pause");
        return 0;
    }

    for(int i=0;i<7;i++){
        a[i]++;
        a[i]=a[i]^2;
    }

    if(!strcmp(a,b)){
        printf("good!\n");
        system("pause");
        return 0;
    }

    printf("NoNoNo\n");
    system("pause");
    return 0;
    //flag 记得包上 NSSCTF{} 再提交!!!
    //NSSCTF{easy_Re}
}