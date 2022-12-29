int AnyBit1(int x) {
    for (int i = 0; i < sizeof(x); i++) {
        if ((x >> i) & 0x01) {
            return 1;
        }
    }
    return 0;
}

int AnyBit0(int x) {
    for (int i = 0; i < sizeof(x); i++) {
        if ((x >> i) & 0x00) {
            return 1;
        }
    }
    return 0;
}

int ThirdBit1(int x) {
    if ((x >> 3) & 1) {
        return 1;
    }
    return 0;
}