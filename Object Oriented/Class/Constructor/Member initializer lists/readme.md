# Member initializer lists
https://learn.microsoft.com/en-us/cpp/cpp/constructors-cpp?view=msvc-170#member_init_list

>A constructor can optionally have a member initializer list, which initializes class members before the constructor body runs. (A member initializer list isn't the same thing as an initializer list of type std::initializer_list<T>.)
>
>Prefer member initializer lists over assigning values in the body of the constructor. A member initializer list directly initializes the members. The following example shows the member initializer list, which consists of all the identifier(argument) expressions after the colon:
```
    Box(int width, int length, int height)
        : m_width(width), m_length(length), m_height(height)
    {}
```
>The identifier must refer to a class member; it's initialized with the value of the argument. The argument can be one of the constructor parameters, a function call or a std::initializer_list<T>.
>
>const members and members of reference type must be initialized in the member initializer list.
>
>To ensure base classes are fully initialized before the derived constructor runs, call any parameterized base class constructors in the initializer list.

