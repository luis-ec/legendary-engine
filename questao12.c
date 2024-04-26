#include <stdio.h>

int main(){

    int n1 = 7, n2 = 8, n3 = 9;
    int n4 = 4, n5 = 5, n6 = 9, mediaAri1, mediaAri2, result1, result2, media1;

    mediaAri1 = n1 + n2 + n3 / 3;
    mediaAri2 = n4 + n5 + n6 / 3;


    printf("A sua primeira media e: %d\n", mediaAri1);
    printf("A sua primeira media e: %d\n", mediaAri2);


    result1 = mediaAri1 + mediaAri2;
    printf("A soma das duas medias sao: %d\n", result1);

    media1 = mediaAri1 + mediaAri2 / 2;
    printf("A media da media e: %d\n", media1);

return 0;
}