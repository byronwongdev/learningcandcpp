# include <iostream>
# include <math.h>

using namespace std;

main()
{
    double x1 = 4.0 , x2 = 12.25, x3 = 0.0121 , x4;
    

    cout << "Number         Square Root" << endl;
    cout << "      " << endl;
    cout << x1 << "              " << sqrt(x1) << endl;
    cout << x2 << "          " << sqrt(x2) << endl;
    cout << x3 << "         " << sqrt(x3) << endl;
    cout << "type a number to compute the sqrt: ";
    cin >> x4;

    cout << x4 << "            " << sqrt(x4) << endl;


    return 0;
}