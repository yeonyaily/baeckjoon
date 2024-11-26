#include <iostream>

int main(){
    time_t timer = time(NULL);
    struct tm* t = localtime(&timer); //window date setting에 따라 local 지정됨

    printf("%d-%d-%d", t->tm_year + 1900, t->tm_mon + 1, t->tm_mday); 
    //unix 시간은 1900년 부터! month는 +1 하기!

    return 0;
}