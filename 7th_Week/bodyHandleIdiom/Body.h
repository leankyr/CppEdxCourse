class Handle;  // Forward reference of the "handle" class, so the compiler knows about it.
// this class represents some internal detail that you wanna shield away from the client programmer
// We do not want the client programmer to know much at all about the Body class
// You wanna be able to change the implementation without really affecting the clients code
    class Body
    {   // Handle class is declared as friend
        // the class our programmer will deal with 
        friend class Handle;

    private:
        int someData;
        
    };



