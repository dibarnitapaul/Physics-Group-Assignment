#include <bits/stdc++.h>
using namespace std;

int main()
{
    double lambda_nm, d_um, theta_deg;

    cout << "Enter wavelength (nm): ";
    cin >> lambda_nm;

    if (lambda_nm < 380 || lambda_nm > 750)
    {
        cout << "Out of the range. Please enter a valid number." << endl;
        return 0;
    }

    cout << "Enter slit separation d (µm): ";
    cin >> d_um;

    cout << "Enter angle θ (in degrees): ";
    cin >> theta_deg;

    double lambda_m = lambda_nm * 1e-9;
    double d_m = d_um * 1e-6;
    double theta_rad = theta_deg * M_PI / 180.0;

    double m = (d_m * sin(theta_rad)) / lambda_m;

    cout << "Calculated order: " << round(m) << "-th order maxima" << endl;

    return 0;
}
