#include <iostream>
#include <conio.h>
using namespace std;
void swap(int &a, int &b);
int data[5] = {4, 2, 3, 5, 1};
int jml = 5;
void sorting_selection();
void sorting_bubble();
void sorting_insertion();
void swap(int &a, int &b);

int main() {
    int i;
    cout << "Data awal: ";
    for (i = 0; i < jml; i++)
        cout << data[i] << " ";

    cout << endl;
    cout << "\nData urut dengan menggunakan Selection Sort: ";
    sorting_selection();

    cout << "\nData urut dengan menggunakan Bubble Sort: ";
    sorting_bubble();

    cout << "\nData urut dengan menggunakan Insertion Sort: ";
    sorting_insertion();

    getch();
    return 0;
}

void sorting_selection(){
    int i, j;
    for (i = 0; i < jml - 1; i++){
        for (j = i + 1; j < jml; j++){
            if (data[j] < data[i]){
                swap(data[j], data[i]);
            }
        }
    }
    for(i=0;i<jml;i++)
        cout<<data[i]<<" ";
}

void sorting_bubble(){
    int i, j;
    i = jml - 1;
    do{
        for (j = 0; j < i; j++){
            if (data[j + 1] < data[j])
                swap(data[j + 1], data[j]);
        }

        i--;
    } while (i > 0);

    for(i=0;i<jml;i++)
        cout<<data[i]<<" ";
}

void sorting_insertion(){
    int i, j;
    for (i = 0; i < jml; i++){
        j = i;
        while (j > 0){
            if (data[j] < data[j - 1])
                swap(data[j], data[j - 1]);
            j--;
        }
    }

    for(i=0;i<jml;i++)
        cout<<data[i]<<" ";
}

void swap(int &a, int &b){
    int temp;
    temp = a;
    a=b;
    b=temp;

}