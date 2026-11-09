#ifndef MEMORY_H
#define MEMORY_H

#include <string>

class Memory {
private:
    std::string cells[256];

public:
    Memory();
    std::string read(int address);
    void write(int address, std::string value);
    void clear();
};

#endif
