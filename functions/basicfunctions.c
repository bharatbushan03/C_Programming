#include<stdio.h>
void england()
{
    printf("I am from ENGLAND\n");
    return;
}
void india()
{
    printf("I am from INDIA\n");
    void australia();
    australia();
    return;
}
void australia()
{
    printf("I am from AUSTRALIA\n");
    void england();
    england();
    return;
}
int main()
{
    printf("WELCOME\n");
    void india();
    india();
    printf("THANK YOU");
        return 0;
}