#include <stdio.h>
#include "wren.h"

int main(int argc, char const *argv[])
{
    WrenConfiguration config; 
    wrenInitConfiguration(&config);
    WrenVM* vm = wrenNewVM(&config);
    WrenInterpretResult result = wrenInterpret(vm, "System.print(\"I am running in a VM!\")");
    printf("%u", result);
    wrenFreeVM(vm);
    return 0;
}
