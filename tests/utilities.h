
 /**
 * @brief Round off a value with n digits
 * @param x Value to be rounded
 * @param n Number of digits
 * @return Rounded x.
 */
double roundn(double x, int n)
{

  double rounded_x;
  double fac = pow(10, n);

  rounded_x = round(x * fac) / fac;

  return rounded_x;
}
