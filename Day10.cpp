//Accumulator
/*The accumulate function is part of the <numeric> header and is used to perform a summation 
or other types of accumulation on a range of elements. It is a general-purpose function that can 
be used to accumulate values in a variety of ways, depending on the operation provided.*/
/*
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main(){
    vector<int> numbers{1, 2, 3, 4, 5};
    int sum = accumulate(numbers.begin(), numbers.end(), 0, [](int total, int n){
        return total + n;
    });
    cout << "Sum: " << sum << endl;
    return 0;
}
*/

/*
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main(){
    vector<int> numbers{1, 2, 3, 4, 5};
    int sum = accumulate(numbers.begin(); numbers.end(); 0);
    cout << "Sum: " << sum << endl;
    return 0;
}
*/
//Without accumulator
/*
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> num = {1, 2, 3, 4, 5};
    int sum = 0;

    auto add = [&sum](vector<int> num)
    {
        for (int i : num)
        {
            sum += i;
        }
        return sum;
    };

    cout << "sum is: "
         << add(num);

    return 0;
}
*/


//Custom accumulation
/*
#include <iostream>
#include <vector>
#include <string>
#include <numeric>

using namespace std;

int main() {
    vector<string> words = {"hello", "world", "from", "c++"};
    string result = accumulate(words.begin(), words.end(), string(""),
    [](const string& total, const string& word) {
        return total + (total.empty() ? "" : " ") + word;
    });

    cout << "Result: " << result << endl; // This is the added cout line
    return 0;
}
*/


//Write a program to find dulicate no from string
/*
#include <iostream>
#include <string>

using namespace std;

void findDuplicates(const string& str) {
    int count[256] = {0}; // Array to store the count of characters (256 for all ASCII characters)

    // Iterate over the string and count each character
    for (int i = 0; i < str.length(); i++) {
        count[str[i]]++;
    }

    cout << "Duplicate characters in the string are:" << endl;
    for (int i = 0; i < 256; i++) {
        if (count[i] > 1) {
            cout << char(i) << ": " << count[i] << " times" << endl;
        }
    }
}

int main() {
    string email = "john12doe14@gmail.com";
    findDuplicates(email);
    return 0;
}
*/
