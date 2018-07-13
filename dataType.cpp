#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int i;
    long lg;
    char ch;
    float f;
    double d;
    scanf("%d %ld %c %f %lf" ,&i,&lg,&ch,&f,&d);
    printf("%d\n",i);
    printf("%ld\n",lg);
    printf("%c\n",ch);
    printf("%.3f\n",f);
    printf("%.9lf\n",d);
    
    return 0;
}