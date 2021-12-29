//
#include <iostream>
#include <functional>
#include "Function.h"
double suma(double a){
        int answer = 0;

        for(int i = 10; i <= 1000; i *= 10)
            answer += (int)((a)*(i)) % 10;
     
        return answer;
    }

void sort(double *arr, int size){
    double temp;
    for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (suma(arr[j]) > suma(arr[j + 1])) {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
}

void goodbedn(double *arr, int n){
    int good=0;
    int bad=0;
    int netr=0;
    for (int i=0;i<n;i++){
        if (arr[i]<0.0){
            bad+=1;
        }
        else if (arr[i]>0.0){
            good+=1;
        }
        else if (arr[i]==0.0){
            netr+=1;
        }
    }
    std::cout<<"good:" << good << "bed:" << bad << "netr:" << netr;
}
