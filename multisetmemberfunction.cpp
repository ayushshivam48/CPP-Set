#include <iostream>
#include <set>
using namespace std;

int main() {
    // Creating a multiset of integers
    multiset<int> ms1;

    // 1. Inserting elements
    ms1.insert(4);
    ms1.insert(8);
    ms1.insert(3);
    ms1.insert(1);
    ms1.insert(4); // Duplicate insertion

    cout << "Elements in multiset after insertion: ";
    for (auto value : ms1) {
        cout << value << " ";
    }
    cout << endl;

    // 2. Finding an element
    auto it = ms1.find(8);
    if (it != ms1.end()) {
        cout << "Element 8 found in multiset." << endl;
    } else {
        cout << "Element 8 not found in multiset." << endl;
    }

    // 3. Counting occurrences of an element
    int count_4 = ms1.count(4);
    cout << "Element 4 appears " << count_4 << " times in multiset." << endl;

    // 4. Erasing a specific element (one occurrence)
    ms1.erase(ms1.find(4));  // Erasing one occurrence of 4
    cout << "Elements in multiset after erasing one '4': ";
    for (auto value : ms1) {
        cout << value << " ";
    }
    cout << endl;

    // 5. Erasing all occurrences of an element
    ms1.erase(4);  // Erasing all occurrences of 4
    cout << "Elements in multiset after erasing all '4's: ";
    for (auto value : ms1) {
        cout << value << " ";
    }
    cout << endl;

    // 6. Checking size of the multiset
    cout << "Size of multiset: " << ms1.size() << endl;

    // 7. Clearing the multiset
    ms1.clear();
    cout << "Size after clearing the multiset: " << ms1.size() << endl;

    return 0;
}
