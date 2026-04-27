#include<iostream>
using namespace std;

int binarySystem(int decNum){
    int ans = 0;
    int pow = 1;

    while(decNum > 0){
        int rem = decNum % 2;
        decNum /= 2;

        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}

int decimalSystem(int binNum){
    int ans = 0;
    int pow = 1;
    while(binNum > 0){
        int rem = binNum%10;
        ans += rem*pow;
        binNum /= 10;
        pow *= 2;
    }
    return ans;
}


int findComplement(int num){
    if (num==0){
        return 1;
    }
    int ans = 0;
    int pow = 1;

    while(num > 0){
        int rem = num % 2;
        rem = rem^1;
        ans = ans + rem * pow;
        num /= 2;
        pow *= 2;
    }
    return ans;
}

int main(){

    // for (int i=0; i<=10; i++){
    //     binarySystem(i);
    // }

    // decimalSystem(1010);
    cout << bitwiseComplement(0);
    
    



    return 0;
}