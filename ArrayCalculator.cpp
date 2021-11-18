
class ArrayCalculator{
	public:
    static int sumOfArray(int arr[], int n){
        int k=0;
        for(int i=0;i<n;i++)
        k=k+arr[i];
        return k;
    }
    static double sumOfArray(double arr[],int n){
        double k=0;
        for(int i=0;i<n;i++)
        k=k+arr[i];
        return k;
    }
};
