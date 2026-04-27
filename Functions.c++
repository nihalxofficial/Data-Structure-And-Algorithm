#include<iostream>
#include<math.h>
using namespace std;


void greet(){
    cout << "good morning" <<endl;
}

int printHello(){
    cout << "Hello" <<endl;
    return 3;
}

void summation(int m, int n){
    int sum = m+n;
    cout << sum;
}

int sumofN(int n){
    int sum = 0;
    for ( int i=1;  i<=n; i++ ){
        sum += i;
    }
    return sum;
}

int factorial(int n){
    if (n == 0 || n==1){
        return 1;
    }else if (n<0){
        cout << "Invalid Number";
    }else{
        int sum = 1;
    for (int i =1; i<=n; i++){
        sum *= i;
    }return sum;
    }
}

void digitSum(int number){
    int sum = 0;
    while (number>0){
        int digit = number%10;
        number = number/10;
        sum += digit;
    }
    cout << sum << endl;
}

void binomialCoefficient(int n, int r){
    int upper = factorial(n);
    int lower = factorial(r) * factorial(n - r);
    int answer = upper/lower;
    cout << "Binomial coefficient for n & r is : " << answer << endl;
}



bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) { 
        if (n % i == 0) {
            return false; 
        }
    }
    return true; 
}

void sumofPrime(int n){
    int sum = 0;
    for (int i = 2; i<=n; i++){
        if (isPrime(i)){
            sum += i;
        }
    }cout << sum;
}


void fibonakkiSeries(int terms){
    int first = 0;
    int second = 1;
    if (terms==1 || terms ==0){
        cout << 0 << endl;
    }else if(terms == 2){
        cout << first << " "<< second << endl;
    }else{
        cout << first << " " << second;
        for (int i = 3; i<=terms; i++){
            int next = first + second; 
            cout << " "<< next;
            first = second;
            second = next;
        }
    }cout << endl;
}

int isNegative(int num){
    if (num < 0){
        return true;
    }else{
        return false;
    }
}


void reverseNumber(int num){
    int ans = 0;
    while (num > 0){
        int lastDigit = num%10;
        ans = (ans * 10) + lastDigit;
        num /= 10;
    }
    if (isNegative(num)){
        cout << -ans << endl;
    }else{
        cout << ans << endl;
    }
}


char convert(char name){
    char ans = name - 'a' + 'A';
    return ans;
}

int countDigit(int n){
    int count = 0;
    while(n != 0){
        n = n / 10;
        count++;
    }
    return count;
}

int isArmstrong(int n){
    if (n<0){
        return 0;
    }
    int original = n;
    int ans = 0;
    int digit = countDigit(n);
    while(n > 0){
        int rem = n%10;
        ans += pow(rem, digit);
        n /= 10;
    }
    return original == ans;
}

int trailingZero(int n){
    int num = factorial(n);
    int countzero = 0;
    while(num>0){
        int rem = num%10;
        num /= 10;
        if(rem==0){
            countzero++;
        }  
    }return countzero;
}

int bishop(int A, int B) {
    int count = 0;
    count += min(8-A, 8-B);
    count += min(8-A, B-1);
    count += min(A-1, B-1);
    count += min(A-1, 8-B);
    
    return count;
}

int main(){
    // greet();
    // printHello();
    // cout << printHello();
    // summation(10.99,20.87);
    // cout << sumofN(10) << endl;
    // factorial(5);
    // digitSum(1239);
    // binomialCoefficient(8,2);
    // cout << isPrime(13);
    // sumofPrime(11);
    // fibonakkiSeries(7);
    // reverseNumber(-45);
    // cout << convert('l');
    // cout << isArmstrong(153);
    cout << countDigit(153);
    // cout << trailingZero(10);

    return 0;
}