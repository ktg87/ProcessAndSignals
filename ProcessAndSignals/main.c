//
//  main.c
//  ProcessAndSignals
//

#include <stdio.h>
#include <stdlib.h> //for getenv()

int main(int argc, const char * argv[]) {
    
    char environment_name[50];
    printf("Enter the Environment name: ");
    scanf("%s", environment_name);
    
    printf("Environment Value: %s\n", getenv(environment_name));
    
    return 0;
}
