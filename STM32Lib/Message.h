#ifndef MESSAGE_H
#define MESSAGE_H
#include <string>
#include <unordered_map>
using namespace std;


class Message {
public:
    Message();

    template <typename T>
    void put(const string& key, const T& value);

    template <typename T>
    T get(const string& key);

    bool contains(const string& key);

private:
    unordered_map<string, string[2]> msg;
};



#endif //MESSAGE_H
