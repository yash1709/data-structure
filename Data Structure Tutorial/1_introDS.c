// Data Structures and Algorithms are two different things.

// Data Structures –  These are like the ingredients you need to build efficient algorithms. These are the ways to arrange data so that they (data items) can be used efficiently in the main memory. Examples: Array, Stack, Linked List, and many more.

// Algorithms – Sequence of steps performed on the data using efficient data structures to solve a given problem, be it a basic or real-life-based one.  Examples include: sorting an array.

// Some other Important terminologies:
// Database – Collection of information in permanent storage for faster retrieval and updation. Examples are MySql, MongoDB, etc.

// Data warehouse – Management of huge data of legacy data( the data we keep at a different place from our fresh data in the database to make the process of retrieval and updation fast) for better analysis.

// Big data – Analysis of too large or complex data, which cannot be dealt with the traditional data processing applications.

// *** Memory Layout of C Programs:
// 1. When the program starts, its code gets copied to the main memory.
// 2. The stack holds the memory occupied by functions. It stores the activation records of the functions used in the program. And erases them as they get executed.
// 3. The heap contains the data which is requested by the program as dynamic memory using pointers.
// 4. Initialized and uninitialized data segments hold initialized and uninitialized global variables, respectively.

/*

            HEAP
            !
            STACK
            !
            Uninitialised data            -----> static + global variables
            Initialised data
            !
            Code Seegment
            !
            !
            Memory RAM

*/