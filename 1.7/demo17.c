int sum_array(int a[], int n)
{
int sum = 0;
int *p = a;
for (int i = 0; i < n; i++)
{ sum += *p;
p++; }
return sum;
}