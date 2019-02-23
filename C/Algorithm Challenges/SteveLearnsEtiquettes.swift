/**
@author Said Alır, GitHub Al-Said 
*/

func checkConditions(s: String) -> Bool {
    if s.count < 1 || s.count > 100 {
        return false
    }
    if s.contains("?") == false {
        return false
    }
    return true
}

func bePolite(s: String) -> String {
    
    var polite = String(s.split(separator: "?")[0])
    polite = polite + ", please?"
    return polite
}

func solve() -> Bool {
    var sentence: String = ""
    print("Please enter the sentence! ")
    sentence = readLine()!
    repeat {
        print("Your sentence is empty or does not contains any question mark!")
        print("Please enter again...")
        print("To quit please type 'quit' ")
        sentence = readLine()!
        if sentence == "quit" {
            return false
        }
    } while (checkConditions(s: sentence) == false)
    print("You should say!")
    print(bePolite(s: sentence))
    return true
}

solve()
