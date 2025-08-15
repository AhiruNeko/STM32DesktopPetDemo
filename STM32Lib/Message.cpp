#include "Message.h"
#include <string>
#include <sstream>


void Message::put(const string& key, const any& value) {
    msg[key] = value;
}

any Message::get(const string& key) {
    return msg[key];
}

bool Message::contains(const string &key) {
    return msg.find(key) != msg.end();
}

