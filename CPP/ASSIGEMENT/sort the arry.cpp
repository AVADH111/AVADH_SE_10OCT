#include <iostream>

template<int length>
class myClass {
public:
    typedef int ArrayType[length];

    static struct StaticData {
        ArrayType array;

        StaticData()
        {
            for (int i = 0; i < length; i++) array[i] = i;
        }
    }
    static_data;

    static ArrayType &array;
};

template<int length>
typename myClass<length>::StaticData myClass<length>::static_data;

template<int length>
typename myClass<length>::ArrayType &myClass<length>::array = myClass<length>::static_data.array;

int main(int argc, char** argv) {
    const int LEN = 13;
    for (int i = 6; i < LEN; i++) {
        std::cout << myClass<LEN>::array[i];
    }
}