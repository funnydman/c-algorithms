/*
  output on machine with little endian is 0x67 0x45 0x23 0x01 
*/

void show_mem_rep(char *start, int n) {
    for (int i = 0; i < n; i++) {
        printf(" %#.2x", start[i]);
    }
    printf("\n");
}

int main() {
    int i = 0x01234567;
    show_mem_rep((char *) &i, sizeof(i));
    getchar();
}
