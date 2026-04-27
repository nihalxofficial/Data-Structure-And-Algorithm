#include<iostream>
using namespace std;

int reverse(int num){
    bool isNegative = false;
    if (num < 0){
        isNegative = true;
        num = -num;
    }

    int ans = 0;
    while (num > 0){
        int lastDigit = num%10;
        ans = (ans * 10) + lastDigit;
        num /= 10;
    }
    if (isNegative){
        return -ans;
    }else{
        return ans;
    }
}

int isPalindrome(int x) {
    if (x < 0) {
        return false;
    }

    int original = x;
    int reversed = 0;

    while (x > 0) {
        int rem = x % 10;
        reversed = (reversed * 10) + rem;
        x /= 10;
    }

    return original == reversed;
}


int main(){
    // cout << addInt(38) << endl;
    // addInt(38);
    // cout << addInt(0) << endl;
    
    // reverse(-123);

    // cout << ((-19) < 3) << endl;
    // cout << mySqrt(49);
    cout << isPalindrome(0121);
    cout << isPalindrome(-121);
    cout << isPalindrome(123);
    cout << isPalindrome(121);


    int a;
    cout << "enter a number" <<endl;;
    cin >> a;

    cout << "number is " << a;
    return 0;
}