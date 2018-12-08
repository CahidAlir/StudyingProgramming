//@author Said Alır, GitHub -> Al-Said
func solve() {
    let left = getBounds().left
    let right = getBounds().right
    let primes = getPrimes(l: left, r: right)
    printSolution(nums: primes)
}

func getBounds() -> (left: Int, right: Int) {

    print("Enter left bound. It should be greater or equal to 1")
    var left = Int(readLine() ?? "0")!
    while left < 1 {
        print("You entered invalid value")
        left = Int(readLine() ?? "0")!
    }
    print("Enter right bound. It should be greater than left bound and less then 10^8")
    var right = Int(readLine() ?? "0")!
    while right < left || right > 100000000 {
        print("You entered invalid value")
        right = Int(readLine() ?? "0")!
    }
    return (left, right)
}

func getPrimes(l: Int, r: Int) -> [Int] {
    var primes: [Int] = []
    for i in l...r {
        if isPrime(number: i) {
            primes.append(i)
        }
    }
    return primes
}

func printSolution(nums: [Int]) {
    for i in nums {
        print(i)
    }
}

func isPrime(number: Int) -> Bool {
    var divisor = 0
    for i in 1...number {
        if number%i == 0 {
            divisor = divisor + 1
        }
        if divisor > 2 {
            break
        }
    }
    if divisor == 2 {
        return true
    }
    return false
}


