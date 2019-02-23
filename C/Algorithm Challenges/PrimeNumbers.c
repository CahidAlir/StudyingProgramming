#include<stdio.h>
#include<stdbool.h>

bool isPrime(int num) {
    int divisor = 0;
    int i;
    for(i=1; i<=num; i++) {
        if(num%i == 0) {
            divisor++;
        }
        if(divisor > 2) {
            break;
        }
    }
    if(divisor == 2) {
        return true;
    }
    return false;
}


void getPrimes(int l, int r) {
    int size = (l-r);
    int primes[size];
    int counter = 0;
    int i;
    for(i = l; i<=r; i++) {
        if(isPrime(i)){
            primes[counter] = i;
            counter++;
        }
    }

    //Printing
    for(i = 0; i < counter; i++) {
        printf("%d\n",primes[i]);
    }
}


int main() {
    //TO DO.. get them from user
    int left = 1;
    int right = 10;
    getPrimes(left, right);
}
