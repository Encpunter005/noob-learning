 #include<iostream>
 #include<string.h>
 using namespace std;
 void sort(int arr[],int sz){
    int i ,j;
    for(i = 1 ; i < sz; i++)
    {
        for(j = 0; j < i; j++ )
        {
            if(arr[i] < arr[j])
            {
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }   
    }
    for(int w = 0; w < i; w++)
    {
        printf("%d ", arr[w]);
    }

}
int main(){
    int arr[100];
    memset(arr, 0 , sizeof(arr));
    int a = 0;
    for(int i = 0; i < 10 ; i++)
    {
        scanf("%d",&a);
        arr[i] = a;
    }
    int sz =sizeof(arr) / sizeof(arr[0]);
    sort(arr,sz);
    return 0;
}

