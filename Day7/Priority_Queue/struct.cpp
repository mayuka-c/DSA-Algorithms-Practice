#include <bits/stdc++.h>
using namespace std;

struct Person {
    int age;
    float height;
    Person(int a, float h) {
        age = a;
        height = h;
    }
};

struct myCmp {
    bool operator() (Person const &p1, Person const &p2) {
        return p1.height > p2.height;
    }
};

int main() {
    priority_queue<Person, vector<Person>, myCmp> pq;
    
    Person* p1 = new Person(32, 5.5); 
    Person* p2 = new Person(26, 5.8); 
    Person* p3 = new Person(38, 5.2);

    pq.push(*p1); 
    pq.push(*p2); 
    pq.push(*p3); 

    while(!pq.empty()) {
        Person person = pq.top();
        cout << person.age << " ";
        pq.pop();
    }

    return 0;
}