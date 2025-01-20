#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    // Creating an unordered_set of integers
    unordered_set<int> us;

    // 1. Inserting elements
    us.insert(10);
    us.insert(20);
    us.insert(30);
    us.insert(20);  // Duplicate insertion; will not be added

    // 2. Displaying elements
    cout << "Elements in unordered_set: ";
    for (const auto& value : us) {
        cout << value << " ";
    }
    cout << endl;

    // 3. Finding an element
    if (us.find(20) != us.end()) {
        cout << "Element 20 found in unordered_set." << endl;
    } else {
        cout << "Element 20 not found in unordered_set." << endl;
    }

    // 4. Erasing an element
    us.erase(20);
    cout << "Elements in unordered_set after erasing 20: ";
    for (const auto& value : us) {
        cout << value << " ";
    }
    cout << endl;

    // 5. Checking size of the unordered_set
    cout << "Size of unordered_set: " << us.size() << endl;

    // 6. Checking if set is empty
    if (us.empty()) {
        cout << "unordered_set is empty." << endl;
    } else {
        cout << "unordered_set is not empty." << endl;
    }

    // 7. Clearing the unordered_set
    us.clear();
    cout << "Size after clearing the unordered_set: " << us.size() << endl;

    return 0;
}
