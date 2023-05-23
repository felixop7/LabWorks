#include "Sort.h"
#include <iostream>
using namespace std;

void InsertionSort(int* arr, int size){
    for(int i=0;i<size-1;i++){
            int temp=0;
            for(int j=0;j<=i;j++){
                    if (arr[i+1]<arr[j]){
                        temp=1;
                    }
                    if(temp==1){
                        arr[j]=arr[j]^arr[i+1];
                        arr[i+1]=arr[j]^arr[i+1];
                        arr[j]=arr[j]^arr[i+1];
                    }

            }




    }
    return;



};