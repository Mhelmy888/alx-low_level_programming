int _atoi(char *s)
{
  int sign = 1;
  int result = 0;
  int i = 0;

  // Skip leading whitespace
  while (s[i] == ' ')
    i++;

  // Check for sign
  if (s[i] == '-')
  {
    sign = -1;
    i++;
  }
  else if (s[i] == '+')
  {
    i++;
  }

  // Process digits
  while (s[i] >= '0' && s[i] <= '9')
  {
    // Check for overflow
    if (result > (INT_MAX / 10) || (result == (INT_MAX / 10) && (s[i] - '0') > (INT_MAX % 10)))
    {
      // Return INT_MAX if overflow and positive sign
      if (sign == 1)
        return INT_MAX;
      else
        return INT_MIN; // Return INT_MIN if overflow and negative sign
    }

    // Update result
    result = result * 10 + (s[i] - '0');
    i++;
  }

  return sign * result;
}

