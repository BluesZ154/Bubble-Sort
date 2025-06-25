#include<iostream>
#include<string>
#include<chrono>
#include<thread>
#include<atomic>
#include<cmath>
#include<vector>
#include<map>
#include<algorithm>
#include <ctime>
using namespace std;

int arr[10];
int size_arr = sizeof(arr)/sizeof(arr[0]);
int num, filled = 0, temp, status, swapped;

void show_array();
int bubble_sort();

int main(){

cout<<"WELCOME TO BUBBLE SORTING\n";

for(int i = 0; i<size_arr; i++){
    cout<<"Enter number to sort: ";
    cin>>num;
    
    if(num == 0){
        break;
    }
    
   while(cin.fail() || num<0){
        cin.clear();
        cin.ignore(1000, '\n');
        cout<<"Data types invalid\n";
        cout<<"Enter number to sort(0 to stop): ";
        cin>>num;
        if(num == 0){
            break;
        }
    }
    
    if(num == 0){
        break;
    }
    else{
        arr[i] = num;
        filled++;
    }
}
cout<<"Number: ";
show_array();
cout<<endl;

status = bubble_sort();
if(status == 1){
    cout<<"Bubble Sorting Successful\n";
    cout<<"New Number(Sorted): ";
    show_array();    
    cout<<endl;
}
else{
    cout<<"Bubble Sorting Failed\n";
}


return 0;
}

void show_array(){

    for(int i = 0; i<filled; i++){
        cout<<arr[i];
        if(i != filled-1){
            cout<<", ";
        }
    }
    cout<<endl;
}

int bubble_sort(){

for(int j = 0; j < filled-1; j++){
    
    for(int x = 0; x<filled-1; x++){
        if(arr[x] > arr[x + 1]){
            temp = arr[x];
            arr[x] = arr[x+1];
            arr[x+1] = temp;
            swapped++;
        }
    }
    if(swapped == 0){
        return 1;
    }
    swapped = 0;
}
return -1;
}
   
