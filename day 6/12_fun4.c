#include<stdio.h>
int sub();
int main()
{
    printf("main function:");
    add();
    int res=sub();
    printf("sub is:%d\n",res);

}
void add(){
    printf("addition is:%d\n",(10+10));
}
int sub(){
    
}