// i = 0x16f0 -> return 0xf016
unsigned short swap_bytes(unsigned short i) {
    unsigned short high_byte = i << 8;
    unsigned short low_byte = i >> 8;

    return high_byte | low_byte;
}

// method that I steal from the c standart library
uint32_t byte_swap_32(x) {
    x = (((x) & 0xff000000) >> 24) |
        (((x) & 0x00ff0000) >> 8) |
        (((x) & 0x0000ff00) << 8) |
        (((x) & 0x000000ff) << 24);
    return x;
}
