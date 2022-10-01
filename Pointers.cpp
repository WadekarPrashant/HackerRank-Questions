#include <stdio.h>
void update(int *a,int *b) {
    // Complete this function 
    int temp = *a;   
    *a = *a + *b;
    *b = temp - *b;
    
    if (*b < 0)
    {
        *b = -(*b);
    }
}
int main() {
    int a, b;
    int *qa = &a, *qb = &b;
    
    scanf("%d %d", &a, &b);
    update(qa, qb);
    printf("%d\n%d", a, b);
    return 0;
}
