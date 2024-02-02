#include "whatever.hpp"

int main( void ) 
{
    int a = 2;
    int b = 3;

    int arr[] = {1, 2, 3, 4, 5};
    std::cout << "min( arr ) = " << ::min( arr[0], arr[1] ) << std::endl;
    std::cout << "max( arr ) = " << ::max(arr[1], arr[1]) << std::endl;

    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
}