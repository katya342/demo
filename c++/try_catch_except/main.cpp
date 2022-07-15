#include <iostream>
#include <exception>
using namespace std;
int main() {
//
//    int a = 10, b = 0, c;
//    try
//    {
//        if(b==0)
//            throw runtime_error("Divide by zero error");
//        c = a/b;
//        cout << c << endl;
//    }
//    catch (runtime_error &error)
//    {
//        cout << "Exception occured" << endl;
//        cout << error.what();
//    }
    try {
        throw runtime_error("runtime error");
    }
    catch (const char *error)
    {
        cout << error << endl;
    }
    catch (int err)
    {
        cout << err << endl;
    }

    catch (runtime_error e)
    {
        cout << e.what() << endl;
    }
    catch(...)
    {
        cout << "exception occured" << endl;
    }
    return 0;
}
