#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int test(int f[]){
    f[1] = 0;
    return f[1];
}

int main() {
    int f[2][4] = {{1 ,2 ,3 ,4},{1,1,1,1}};
    int a=1, b=1, c=5, d=10;
    if(1){
        printf("%d\n", test(f[0]));
    }

}


// int main() {
//    int frequency[4]={-1,-1,0,-1};
//     int count=0, target = 0;

//     for(int i=0; i<4; i++){
//         if(count == 0){
//             target = frequency[i];
//         }

//         if(target == frequency[i]){
//             count++;
//         }
//         else{
//             count--;
//         }

//     }

//     if(  target && count >= 2){
//         printf("%d\n", target);
//     }
//     else{
//         printf("-2\n");
//     }

//     if(target){
//         printf("-3\n");
//     }
    

// }




