#include "Handle.h"

    int main()
    {   // Tje client code uses the handle 
        // that affects the body without the client code knowing it
        Handle h;
        h.someOperationOnBody();

        return 0;
    }



