int set_bit(unsigned char x, unsigned char position) {
    unsigned char mask;
    mask = (unsigned char) (1 << position);
    return x | mask;

}

int clear_bit(unsigned char x, unsigned char position) {
    unsigned char mask;
    mask = (unsigned char) (1 << position);
    return x & ~mask;
}

int flip_bit(unsigned char x, unsigned char position) {
    unsigned char mask;
    mask = (unsigned char) (1 << position);
    return x ^ mask;
}

int is_bit_set(unsigned char x, unsigned char position) {
    unsigned char shifted;
    shifted = x >> position;
    return shifted & 1;
}



int modify_bit(unsigned char x, unsigned char position, int state) {
    int mask = 1 << position;
    return (x & ~mask) | (-state & mask);
}

/* the four ways to count set bits */
int count_set_bits(unsigned char val) {
    int count = 0;
    while (val > 0) {
        if (val & 1) {
            count++;
        }
        val >>= 1;
    }
    return count;
}


int count_set_bits_kernighan(unsigned char val) {
    int count = 0;
    while (val != 0) {
        val &= (val - 1);
        count++;
    }
    return count;
}

/* using lookup table */
int count_with_lookup_tbl(unsigned short int x) {
    /*
     * Count set bits in an 16-bit integer.
     * 1) Split number in 8 bit chunks
     * 2) Generate the table which stores number of set bits in every number from 0 to 255
     * 3) Using generated table count set bits
     *
     * 4) Time Complexity : O(1) - Todo: check it!
     */
    unsigned char lookuptable[256] = {0};
    unsigned short count;
    for (int i = 0; i < 256; i++) {
        lookuptable[i] = (unsigned char) ((i & 1) +
                                          lookuptable[i / 2]);
    }
    count = lookuptable[x & 0xff] + lookuptable[(x >> 8) & 0xff];
    return count;
}

/* population count */
int population_count(unsigned char i) {
    unsigned char mask1, mask2, mask3;
    mask1 = 0b01010101;

    mask2 = 0b00110011;
    mask3 = 0b00001111;

    i = (i & mask1) + ((i >> 1) & mask1);
    i = (i & mask2) + ((i >> 2) & mask2);
    i = (i & mask3) + ((i >> 4) & mask3);
    return i;
}


