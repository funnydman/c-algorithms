_Bool is_little_endian() {
    unsigned short val = 0x0001;
    return *(char *) &val == 0x01; // returns true if little endian
}
////////////////////////////////////////

// or we can define union like this
// union u {
//    uint8_t u8;
//    uint16_t u16;
//    uint32_t u32;
//};
    
union u {
    unsigned char u8; 
    unsigned short u16;
    unsigned int u32;
};

_Bool is_little_endian() {
    union u t_u = {.u32=0x01};
    return t_u.u8 == t_u.u16 == t_u.u32; // returns true if little endian
}

/* change endianess - got this from wiki */

uint32_t change_endianness(uint32_t value) {
    uint32_t result = 0;
    result |= (value & 0x000000FF) << 24;
    result |= (value & 0x0000FF00) << 8;
    result |= (value & 0x00FF0000) >> 8;
    result |= (value & 0xFF000000) >> 24;
    return result;
}
