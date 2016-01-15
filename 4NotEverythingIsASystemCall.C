#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
int main() {
    mode_t mode=S_IRWXU;
    int filedest=open("message.txt", O_CREAT | O_TRUNC | O_RDWR, mode);
    
    printf("filedest is %d\n", filedest);
    
    return 0;
}