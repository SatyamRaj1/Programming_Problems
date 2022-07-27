#include<iostream>
using namespace std;
void swap(int* a, int* b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
void swapf(float* a, float* b){
    float temp = *a;
    *a = *b;
    *b = temp;
}
void Bubble_sort(int n,float* Arr, int* Val){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(Arr[j]<Arr[j+1]){
                swapf(Arr + j, Arr + j +1);
                swap(Val + j, Val + j +1);
                }
            }
        }
}
float Fractional_Knapsack(int n, float  Max_Weight, float* Value_Weight,int* Weights, int Current_Weight = 0,int CI = 0){
    if(CI > n){
        return 0;
    }
    else if(Current_Weight + Weights[CI] > Max_Weight)
        return (Max_Weight - Current_Weight) * Value_Weight[CI];
    else
        return Weights[CI] * Value_Weight[CI] + Fractional_Knapsack(n,Max_Weight,Value_Weight,Weights,Current_Weight + Weights[CI],CI + 1);

}
int main(){
    int n;
    cin>>n;  //number of elements
    float Max_weight;
    cin>>Max_weight;
    int Weights[n];
    int Value[n];
    float ValWei[n];
    for(int i=0;i<n;i++)
        cin>>Weights[i];
    for(int i=0;i<n;i++){
        cin>>Value[i];
        ValWei[i]= float(Value[i])/float(Weights[i]);
    }
    Bubble_sort(n,ValWei,Weights);
    cout<<Fractional_Knapsack(n,Max_weight,ValWei,Weights);
    return 0;
}
