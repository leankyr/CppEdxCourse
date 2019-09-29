#include "Body.h"

    class Handle
    {
    private:
        // The Handle class handles a body behind the scenes
        Body * body;   // The "handle" class typically maintains an internal instance of the "body" class.

    public:
        Handle();
        ~Handle();
        // The handle is just the wrapper for some underlying body implementation
        void someOperationOnBody();
        ...
    };
