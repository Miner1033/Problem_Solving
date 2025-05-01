#include <bits/stdc++.h>
using namespace std;

int main() {
    // 1. Sequence Containers
    // ----------------------

    // Vector (Dynamic Array)
    vector<int> v = {1, 2, 3};
    v.push_back(4);       // Add to end
    v.pop_back();         // Remove from end
    v.insert(v.begin()+1, 5); // Insert at position
    v.erase(v.begin());    // Remove first element

    // Deque (Double-ended Queue)
    deque<int> dq = {1, 2, 3};
    dq.push_front(0);     // Add to front
    dq.push_back(4);      // Add to end
    dq.pop_front();       // Remove from front
    dq.pop_back();        // Remove from end

    // List (Doubly Linked List)
    list<int> l = {1, 2, 3};
    l.push_front(0);      // Add to front
    l.push_back(4);       // Add to end
    l.pop_front();        // Remove from front
    l.pop_back();         // Remove from end
    l.insert(next(l.begin()), 5); // Insert after first element

    // 2. Associative Containers (Ordered)
    // -----------------------------------

    // Set (Unique elements, sorted)
    set<int> s = {3, 1, 2};
    s.insert(4);          // Insert element
    s.erase(2);           // Remove element
    auto it = s.find(3);  // Find element

    // Multiset (Allows duplicates, sorted)
    multiset<int> ms = {1, 1, 2};
    ms.insert(1);         // Insert another 1
    ms.erase(1);          // Removes all 1s

    // Map (Key-value pairs, sorted by key)
    map<string, int> m = {{"Alice", 25}, {"Bob", 30}};
    m["Charlie"] = 28;    // Insert or update
    m.erase("Bob");       // Remove by key
    auto mit = m.find("Alice"); // Find by key

    // Multimap (Allows duplicate keys, sorted)
    multimap<string, int> mm = {{"Alice", 25}, {"Alice", 26}};
    mm.insert({"Alice", 27});

    // 3. Associative Containers (Unordered - Hash Tables)
    // ---------------------------------------------------

    // Unordered Set
    unordered_set<int> us = {3, 1, 2};
    us.insert(4);
    us.erase(1);

    // Unordered Map
    unordered_map<string, int> um = {{"Alice", 25}, {"Bob", 30}};
    um["Charlie"] = 28;
    um.erase("Bob");

    // 4. Container Adaptors
    // ---------------------

    // Stack (LIFO)
    stack<int> st;
    st.push(1);           // Push to top
    st.push(2);
    st.pop();             // Pop from top
    int top = st.top();   // Access top

    // Queue (FIFO)
    queue<int> q;
    q.push(1);            // Add to back
    q.push(2);
    q.pop();              // Remove from front
    int front = q.front(); // Access front

    // Priority Queue (Max-heap by default)
    priority_queue<int> pq;
    pq.push(3);           // Insert element
    pq.push(1);
    pq.push(2);
    pq.pop();             // Remove largest element
    int largest = pq.top(); // Access largest

    // Min-heap priority queue
    priority_queue<int, vector<int>, greater<int>> min_pq;

    // 5. Other Useful Containers
    // --------------------------

    // Pair
    pair<int, string> p = {1, "Alice"};
    cout << p.first << " " << p.second << endl;

    // Tuple
    tuple<int, string, double> t = {1, "Alice", 3.14};
    cout << get<0>(t) << " " << get<1>(t) << endl;

    // Bitset
    bitset<8> bs(5);      // 00000101
    bs.set(3);            // 00001101
    bs.reset(0);          // 00001100
    cout << bs.count();   // Count set bits (2)

    return 0;
}
