 long long int minValue(int a[], int b[], int n)
    {
        // Your code goes here
        sort(a , a + n);
        sort(b , b + n);
        int i = 0 ;
        int j = n - 1;
        long long int sum = 0;
        int product = 1;
        while(i < n && j >= 0){
            product = a[i] * b[j];
            sum = sum + product;
            i++;
            j--;
        }
        return sum;
    }
