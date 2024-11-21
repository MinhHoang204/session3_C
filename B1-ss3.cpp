#include <stdio.h>

int main() {
    char name[50];
    
    printf("Nhap ten cua ban: ");
    fgets(name, sizeof(name), stdin);  // Su dung fgets de doc ca dong
    // Xoa ky tu newline (\n) neu co
    if (name[strlen(name) - 1] == '\n') {
        name[strlen(name) - 1] = '\0';
    }
    printf("Xin chao %s!\n", name);

    return 0;
}
