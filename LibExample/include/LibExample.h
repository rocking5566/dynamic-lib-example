#ifndef LibExample_h__
#define LibExample_h__

#if (defined WIN32 || defined _WIN32 || defined WINCE)
#   define API_EXPORTS __declspec(dllexport)
#else
#   define API_EXPORTS
#endif

int API_EXPORTS Fibonacci(int n);

class API_EXPORTS CDemoClass
{
public:
    CDemoClass();
    int GetVal();
    void SetVal(int val);

private:
    int m_val;
};
#endif // LibExample_h__