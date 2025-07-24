#include <iostream>
#include <cmath>

using namespace std;

const int N = 1e6 + 1;
bool a[N];

void sang(int n){
    for(int i = 0; i <= n; i++){
        a[i] = true;
    }

    a[0] = a[1] = false;

    for(int i = 2; i <= sqrt(n); i++){
        if(a[i]){
            for(int j = i * i; j <= n; j += i){
                a[j] = false;  
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    sang(n);

    for(int i = 2; i <= n; i++){
        if(a[i])
        cout << i << " ";
    }
   

    
}
