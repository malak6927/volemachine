#include "Memory.h"

Memory::Memory() {
    clear();
}

std::string Memory::read(int address) {
    if (address >= 0 && address < 256) {
        return cells[address];
    }
    return "00";
}

void Memory::write(int address, std::string value) {
    if (address >= 0 && address < 256) {
        cells[address] = value;
    }
}

void Memory::clear() {
    for (int i = 0; i < 256; i++) {
        cells[i] = "00";
    }
}
