#include <cstring>
template <typename T>
class Storage
{
public:
    Storage() = default;
    Storage(const Storage& val) = default;
    Storage(const T &val);
    ~Storage();

    void SetVal(const T &val);
    T GetVal();
private:
    T m_val;
};

template <>
class Storage<char*>
{
public:
    Storage();
    Storage(const Storage& val);
    Storage(const char* val);
    ~Storage();

    void SetVal(const char* val);
    char* GetVal();

private:
    char* m_val;
};

