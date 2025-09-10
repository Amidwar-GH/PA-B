#include<iostream>
using namespace std;


//Prototipo de la funcion
void interDirDer(int arr[], int );

int main(){
	
	int arr[100];
	int n;
	
	cout<<"Digite el tamaño del arreglo: "; cin>>n;
	for(int i=0; i<n; i++){
		cout<<"Digite el numero: "; 
		cin>>arr[i];
	}
	
	interDirDer(arr,n);
	
	
	
	return 0;
}

void interDirDer(int arr[], int tam ){
	int aux;
	for(int i=0; i<tam-1; i++){
		for(int j=1; j<tam-i; i++){
			if(arr[j]>arr[j+1]){
				aux = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=aux;
			}
		}
	}
}

