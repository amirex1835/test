#include <stdio.h>
int counter(long inht num){
    int count;
    
    while(num>1){
        num/=10;
        count+=1;
    }
    return count;
}
int main(){
    long int num;
    scanf("%d",&num);
    int c=counter(num);
    printf("%d",c);
}