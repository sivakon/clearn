#include <stdio.h>
#include "wren.h"

void write(WrenVM* vm, const char* str) 
{
    printf("%s", str);
}
int main(int argc, char const *argv[])
{
    // create a config object for WrenVM
    WrenConfiguration config; 
    wrenInitConfiguration(&config);
    config.writeFn = write;

    // create VM from the config created above
    WrenVM* vm = wrenNewVM(&config);
    WrenInterpretResult result = wrenInterpret(vm, "System.print(\"I am running in a VM!\")");
    wrenFreeVM(vm);
    return 0;
}
