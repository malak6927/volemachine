#ifndef REGISTERFILE_H
#define REGISTERFILE_H

#include <string>

class RegisterFile {
private:
    std::string registers[16];

public:
    RegisterFile();
    std::string getRegister(int index);
    void setRegister(int index, std::string value);
    void clear();
};

#endif
