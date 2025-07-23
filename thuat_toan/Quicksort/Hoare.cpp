#include <iostream>
using namespace std;

int par(int a[], int l, int r){
int x = a[r];
int i = l - 1;
int j = r + 1;

while(true){
    do{
        ++i;
    }while(a[i] < x);

    do{
        --j;
    }while(a[j] > x);

    if(i < j){
    swap(a[i], a[j]);

    }
    else return j;
}

}

void quicksort(int a[], int l, int r){
if(l > r) return;
int p = par(a,l,r);
quicksort(a,l,p - 1);
quicksort(a, p + 1, r);
}

int main(){
int n, a[1000];
cin >> n;
for(int i = 0 ; i < n ; i++){
    cin >> a[i];
}

quicksort(a,0,n-1);

for(int i = 0 ; i < n ; i++){
    cout << a[i] << " ";
}


}
