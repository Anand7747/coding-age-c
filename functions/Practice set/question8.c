/*WAP to find the product of all elements in a floating point array using a for loop.*/
int main(){
    int n;
    float arr[100], product = 1;
    printf("Enter the number of elements in the array:\n");
    scanf("%d", &n);
    printf("Enter %d elements of the array:", n);
    for(int i=0; i < n; i++)
    {
        scanf("%f", &arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        product= product*arr[i];
    }
    printf("Product of all elements in the array is %.2f\n", product);
    return 0;
}