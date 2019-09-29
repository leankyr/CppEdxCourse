 #include "Handle.h"

    Handle::Handle()
    {   // the Hanlde internally creates a body 
        body = new Body;  // Create the underlying "body" object.
    }

    Handle::~Handle()
    {   // when the handle is destroyed it will also destroy its 
        // underlying body object
        delete body;      // Delete the underlying "body" object.
    }
    // Handle class can access private data one the body 
    // because handle is a friend class to the body class
    void Handle::someOperationOnBody()
    {   // Handle does some operation on the body
        body->someData = 42;    // Perform operations on the underlying "body" object.
    }


