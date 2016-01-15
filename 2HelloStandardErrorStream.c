#include <unistd.h>
int main() {
    int n=10;
    int count;
    for(count=1; count<n+1; count++)
    {
        int i;
        for(i=0; i<count; i++)
        {
            write(2, "*", 1);
        }
        write(2, "\n", 1);
        
    }
    return 0;
    
}