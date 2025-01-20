#include <iostream>
#include <set>
using namespace std;

int main() {
    // Creating a set of integers
    set<int> s;

    // 1. Inserting elements
    s.insert(10);
    s.insert(20);
    s.insert(5);
    s.insert(20);  // Duplicate insertion; will not be added

    // 2. Displaying elements
    cout << "Elements in set: ";
    for (const auto& value : s) {
        cout << value << " ";
    }
    cout << endl;

    // 3. Finding an element
    if (s.find(20) != s.end()) {
        cout << "Element 20 found in set." << endl;
    } else {
        cout << "Element 20 not found in set." << endl;
    }

    // 4. Erasing an element
    s.erase(20);
    cout << "Elements in set after erasing 20: ";
    for (const auto& value : s) {
        cout << value << " ";
    }
    cout << endl;

    // 5. Checking size of the set
    cout << "Size of set: " << s.size() << endl;

    // 6. Checking if set is empty
    if (s.empty()) {
        cout << "Set is empty." << endl;
    } else {
        cout << "Set is not empty." << endl;
    }

    // 7. Clearing the set
    s.clear();
    cout << "Size after clearing the set: " << s.size() << endl;

    return 0;
}
