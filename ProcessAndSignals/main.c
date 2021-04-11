//
//  main.c
//  ProcessAndSignals
//

#include <stdio.h>
#include <stdlib.h> //for getenv()

int main(int argc, const char * argv[]) {
    
    
    
    int stayAlive = 1;
    
    while(stayAlive == 1)
    {
        //Check the value of an environment variable
        char environment_name[50];
        printf("Enter the Environment name: ");
        scanf("%s", environment_name);
        
        printf("Environment Value: %s\n", getenv(environment_name));
        
        //Set the value of an environment variable
        char variable_name[15];
        char variable_value[15];
        int overwrittenValue;
        
        printf("Let's set an environment variable.\n");
        printf("Enter your Variable Name (Case Sensitive): ");
        scanf("%s", variable_name);
        
        printf("Enter the Variable Value: ");
        scanf("%s", variable_value);
        
        // 1 --> Represents the Overriden of Value.
        // 0 --> Doesn't override the value
        printf("Enter the Overriden Value (1 Overrides | 0 Does Not Override): ");
        scanf("%d", &overwrittenValue);
        
        // Returns 0 --> On Success || -1 on failure
        int status = setenv(variable_name, variable_value, overwrittenValue);
        
        if(status == 0)
        {
            printf("Environment variable %s Created Successfully!\n", variable_name);
        }
        else if(status == -1)
        {
            printf("Environment variable not created...\n");
        }
        
        printf("Would you like to Continue (1) or Stop (0)?: ");
        scanf("%d", &stayAlive);
        
    }
    
    
    
    return 0;
}
