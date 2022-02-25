#include <stdio.h>
#include <stdbool.h>
#include <time.h>
int main(){
    double time_spent = 0.0;
    int counter = 0;
    clock_t begin = clock();
    while(counter < 10){
        int array[] ={10 , 12 , 9 , 8 , 14 , 5 , 64 , 34, 25, 12, 22, 11, 90 , 19 , 20 , 21 , 25 , 50 , 56 , 58 , 99 , 100 , 101 , 1000 , 200 , 201};
        int n = sizeof(array)/sizeof(array[0]);
        int temp = 0;
        bool swapped;
        for(int i = 0; i < n-1 ; i++){
            swapped = false;
            //the minus i elimated already sorted numbers as the biggest number heads to the back in the first loop
            //that is followed by the second highest number in the second loop
            for(int j = 0 ; j < n-i-1 ; j++){
                if(array[j] > array[j+1]){
                    temp = array[j];
                    array[j] = array[j+1];
                    array[j+1] = temp;
                    swapped = true;
                }
            }
        }
        //if nothing is swapped nested for loop then the algorithim is done
        if(swapped = false){
            break;
        }
        // for(int k = 0 ; k < n ; k++){
        //     printf("%d " , array[k]);
        // }
        counter++;
    }
    clock_t end = clock();
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("The time elapsed was : %f" , time_spent);
}
