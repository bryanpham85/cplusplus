#include <iostream>

using namespace std;

void insertionSort(char *A, int n){
    for(int i=1; i<n; i++){
        int cur = A[i];
        int j = i - 1;
        while (j >= 0 && A[j] > cur)
        {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = cur;
    }
}


int main(){
    int size = 8;
    char A[] = {'B', 'C', 'D', 'A', 'E', 'H', 'G', 'F'};

    //Before
    cout << "Before sorted " << endl;
    for(int i=0; i<size; i++)
        cout << A[i] << " ";

    insertionSort(A, 8);
    //After
    cout << "\nAfter sorted " << endl;
    for(int i=0; i<size; i++)
        cout << A[i] << " ";
    return EXIT_SUCCESS;
}