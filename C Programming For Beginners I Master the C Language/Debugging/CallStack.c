/*
    -A stack trace (call stack) is generated whenever your app crashes because of a fatal error

    -A stack trace shows a list of the function calls that lead to the error
        -Includes the filenames and line numbers of the code that cause the exception or error to occur
        -Top of the stack contains the last call that caused the error (nested calls)
        -Bottom of the stack contains the first call that started the chain of calls to cause the error
        -You need to find the call in your application that is causing the crash

    -A programmer can also dump the stack trace
*/