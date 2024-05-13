#ifndef EXITNOTFOUNDEXCEPTION_H
#define EXITNOTFOUNDEXCEPTION_H

#include <exception>
#include <string>

using namespace std;
class ExitNotFoundException : public exception {
private:
    string exitName;
public:
    ExitNotFoundException(const string& exit) : exitName(exit) {}

    const char* what() const noexcept override {
        return ("Exit not found: " + exitName).c_str();
    }
};

#endif // EXITNOTFOUNDEXCEPTION_H
