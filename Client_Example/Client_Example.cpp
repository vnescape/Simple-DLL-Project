#include <iostream>
#include "FunctionLibrary.h"

int main()
{
    printf("Return value of function1(7): %d\n", function1(7));
    printf("Calling function2(\"DLL\\n\"):\n");
    function2("DLL\n");
    printf("Calling function3(8 ,\"DLL\"):\n");
    function3(8, "DLL");
}