// Created on Эксперт.

#include <iostream>
using namespace std;

/*
int main() {
        int n;
        cin >> n;
        int arr[n];

        for(int i = 0; i < n; i++) {
                cin >> arr[i]
        }

        int result =0;

        for(int i = 0; i < n; i++) {
                for(int j = i + 1; j < n; j++) {
                        if((j - i >= 5) && (arr[i] * arr[j] % 113 == 0)) {
                                result++;
                        }
                }
        }

        cout << result;
}


int main() {
    int n;
    cin >> n;
    int buf[5];
    
    for(int i = 0; i < 5; i++) {
        cin >> buf[i];
    }
    
    int num = 0;
    
    for(int i = 5; i < n; i++) {
        if(arr[0] % 113 == 0) {
            num++;
        }
        
        int tmp;
        cin >> tmp;
        
        buf[0] = buf[1];
        buf[1] = buf[2];
        buf[2] = buf[3];
        buf[3] = buf[4];
        buf[4] = tmp;
        
        if(tmp % 113 == 0) {
            result += i - 5 + 1;
        } else {
            result +=
        }
    }
    
    cout << result;
}
*/


#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int array[n];
 
    for(int i = 0; i < n; i++) {
        cin >> array[i];
    }
 
    int result = 0;
 
    for(int i = 0; i < n; i++) {
        for(int j = i + 5; j < n; j++) {
            if(array[i] % 113 == 0 || array[j] % 113 == 0) {
                result++;
            }
        }
    }
 
    cout << result;
}