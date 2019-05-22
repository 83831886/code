void copy_ptr(double ar[], double br[], int);
void copy_ptr(double ar[], double br[], int n)
{
        int i;

        for ( i = 0; i < n; i++)
                *(ar + i) = *(br + i);
}

