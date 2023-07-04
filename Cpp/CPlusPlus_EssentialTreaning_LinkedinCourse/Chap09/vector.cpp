// vector.cpp by Bill Weinman <http://bw.org/>
// updated 2018-10-31
    
    
    cout << endl << "Range-based for loop:" << endl;
    for (int & i : vi1) {
        cout << i << ' ';
    }
    cout << endl; 
    
    
    
    cout << "Range-based for loop: " << endl;
    for(int & v : vi1) {
        cout << v << ' ';
    }
    cout << endl << endl;
    
    // from C-array
    const static size_t size = 10;
    int ia[size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    cout << endl << "Vector from C-array: " << endl;
    vector<int> vi2(ia, ia + size);
    for( int & i : vi2 ) {
        cout << i << ' ';
    }
    cout << endl << endl;
    
    // vector of strings
    cout << "Vector of strings:" << endl;
    vector<string> vs = { "one", "two", "three", "four", "five" };
    for(string & v : vs) {
        cout << v << endl;
    }
    
