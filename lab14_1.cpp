#include <iostream>
using namespace std;

template<typename T>
void swap(T d[],int x,int y){
	T temp = d[x];
	d[x] = d[y];
	d[y] = temp;
} 

template <typename T>
void insertionSort(T d[],int N){
 for(int i=1;i<N;i++){  //10ตัวแปร ทำ9รอบ รอบ1เทียบ1 รอบ2เทียบ2
    for(int j=i;j>0;j--){  //1 0,2 1 0,3 2 1 0 
	 {
      if(d[j]>d[j-1]){ //i=1 j[1]=
      swap(d,j,j-1);
	  }
	 }
	}
	cout << "Pass " << i << ":" ;
	for(int k=0;k<N;k++){
		cout << d[k] << " ";
	}
	cout << endl;
 }
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
