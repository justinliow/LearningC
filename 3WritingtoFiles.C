#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
int main() {
    mode_t mode=S_IRWXU;
    int filedest=open("message.txt", O_CREAT | O_TRUNC | O_RDWR, mode);
    
    write(filedest, "boop boop\n", 10);
    
    return 0;
}