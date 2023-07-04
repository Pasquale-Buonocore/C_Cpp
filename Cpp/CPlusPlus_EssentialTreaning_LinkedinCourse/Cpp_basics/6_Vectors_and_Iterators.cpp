#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    // vector object definition
    cout << "Vector from initializer list: " << endl;
    vector<int> vi1 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    // vector object methods
    cout << "size: " << vi1.size() << endl;

    cout << "front: " << vi1.front() << endl;

    cout << "back: " << vi1.back() << endl;

    cout << "element at 5: " << vi1.at(5) << endl;

    cout << endl << "Insert 42 at begin + 5: " << endl;
    vi1.insert(vi1.begin() + 5, 42);
    cout << "Check the updated vector at index 5 vi1[5]: " << vi1[5] << endl;

    cout << "Erase at begin + 5: " << endl;
    vi1.erase(vi1.begin() + 5);
    cout << "size: " << vi1.size() << endl;
    cout << "vi1[5]: " << vi1[5] << endl;
    
    cout << "push_back 47: " << endl;
    vi1.push_back(47);
    cout << "size: " << vi1.size() << endl;
    cout << "vi1.back() " << vi1.back() << endl;

    /* 
    **************
    ** Iterator **
    **************
    An iterator in C++ is an object that allows you to traverse the elements of a container (such as an array, a vector, a map, or a set) in a sequence. 
    It provides a way to access the elements of a container without exposing its internal structure. 
    Iterators behave like pointers in that they can be dereferenced to access the value at a particular position in the container, and they can be incremented to move to the next element in the container.
    Iterators come in different types, depending on the container being traversed and the direction of the traversal. Some common types of iterators include:

        - Forward iterators: allow you to traverse a container in a forward direction, from the beginning to the end.
        - Bidirectional iterators: allow you to traverse a container in both directions, forward and backward.
        - Random access iterators: allow you to jump to any element in the container in constant time, using arithmetic operations.
    
    Iterators are very useful for algorithms that need to traverse or manipulate the elements of a container, such as sorting, searching, or removing elements. 
    They provide a standard interface that can be used with any container type, making the algorithms more flexible and reusable.

    */


    cout << endl << "Forward Iterator:" << endl;
    // Using a forward iterator to traverse the vector
    vector<int>::iterator itbegin = vi1.begin();
    vector<int>::iterator itend = vi1.end();

    for (auto it = itbegin; it < itend; ++it) {
        cout << *it << ' ';
    }


    cout << endl << "Bidirectional Iterator:" << endl;
    // Using a reverse bidirectional iterator to traverse the list backwards
    vector<int>::reverse_iterator rit;
    for (rit = vi1.rbegin(); rit != vi1.rend(); ++rit) {
        std::cout << *rit << " ";
    }


    cout << endl << "Random Access Iterator:" << endl;
    // Using a random access iterator to traverse the array
    int my_array[] = {1, 2, 3, 4, 5};
    int* it;
    for (it = std::begin(my_array); it != std::end(my_array); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
