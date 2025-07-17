Common Commands in C++ for LeetCode
===
1. Vector 
```cpp
std::vetor<int> v; // Declare a vector of integers
v.push_back(1); // Add an element to the end of the vector
v.pop_back(); // Remove the last element from the vector
v.size(); // Get the number of elements in the vector

v.insert(v.begin(), 0); // Insert an element at the beginning

v.resize(10); // Resize the vector to 10 elements
v.reserve(10); // Reserve space for 10 elements

vector<int>::iterator it = v.begin();
for (; it != nums.end();) {
    if (*it == val) {
    }
    it++;
}

std::sort(v.begin(), v.end(), [](int a, int b){ return a < b;}); // Sort the vector
```

1. String 
```cpp
string s = "Hello, World!"; // Declare a string
v.substr(0, 5); // Get a substring from index 0 to 4 (5 characters)

std::isalpha(s[0]); // Check if the first character is an alphabetic character
std::isdigit(s[0]); // Check if the first character is a digit
```

1. Map
```cpp
std::map<int, string> m; // Declare a map with integer keys and string values
m.first; // Get the key of the first element
```

1. Stack
```cpp
std::stack<int> s; // Declare a stack of integers

s.top();
s.pop();
```

1. Set
```cpp
std::set<int> s; // Declare a set of integers
if (s.find(a)==s.end()) // if not found
```

1. For
```cpp
for (const auto& ch : s) // for each
```

