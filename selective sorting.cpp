// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void sort(int arr[], int n) {
  int s, e, minv;
  for (s = 0; s < n; s++) {
    minv = s;
    
    
    for (e = s + 1; e < n; e++) {
      if (arr[e] < arr[minv]) {
        minv = e;
      }
    }
    if (minv != s) {
      swap(arr[minv], arr[s]);
    }
  }
}

void print(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  
  int j;
   cout << "Enter size of array: ";
   cin>>j;
   int arr[j];

  cout << "Enter numbers: ";
  for (int i = 0; i < j; i++) {
    cin >> arr[i];
  }

  sort(arr, j);
  print(arr, j);

  return 0;
}