#include <iostream>

using namespace std;
int sum(int *arr, int l)
{
    int s = 0;
    for(int x = 0; x < l; x++)
    {
        s = s + arr[x];
    }
    cout << s << '\n';
}
int minu(int *arr, int l)
{
    int men = arr[0];
    for(int x = 1; x < l; x++ )
    {
        if(arr[x] <= men)
        {
            men = arr[x];
        }
    }
    cout << "El menor numero del array es : " << men << '\n';
}
int per(int *arr, int l)
{
    int sum = 0;
    int e;
    int cont = 0;
    for(int x = 0; x < l; x++)
    {
        e = arr[x];
        sum = 0;
        for(int y = 1; y <= (e/2); y++ )
        {
            if(e % y == 0)
            {
                sum = sum + y;
                cout << sum << " " << e << '\n';
            }
        }
        if(sum == e)
        {
            cont = cont + 1;
        }
    }
    cout << "La cantidad de numeros perfectos es : "<< cont << '\n';
}
int as(int *arr,int l )
{
    int aux;
    int m = 0;
    bool e = false;
    while(e == false){
    m++;
    e = true;
    for(int x = 0; x < (l - m); x++)
    {
        if(arr[x] > arr[x + 1])
        {
            e = false;
            aux = arr[x];
            arr[x] = arr[x + 1];
            arr[x + 1] = aux;

        }

    }
    }
    for(int x = 0; x < l; x++)
    {
        cout << arr[x] << '\t';
    }

}
int de(int *arr, int l)
{
    int aux;
    int m = 0;
    bool e = false;
    while(e == false){
    m++;
    e = true;
    for(int x = 0; x < (l - m); x++)
    {
        if(arr[x] < arr[x + 1])
        {
            e = false;
            aux = arr[x];
            arr[x] = arr[x + 1];
            arr[x + 1] = aux;

        }

    }
    }
    for(int x = 0; x < l; x++)
    {
        cout << arr[x] << '\t';
    }
}

int in(int *arr, int l)
{
    int aux;
    int len = l;
    for(int x = 0; x < (l/2); x++)
    {
        aux = arr[x];
        arr[x] = arr[l - (x + 1)];
        arr[l - (x + 1)] = aux;
        len++;
    }
    for(int x = 0; x < l; x++)
    {
        cout << arr[x] << '\t';
    }
}
int main()
{
    //Problema 1:

    int arr[] = {18,16,28,6,2,3,6,7};
    //sum(arr , 5);
    //minu(arr,5);
    //per(arr, 5);
    //as(arr, 5);
    //de(arr,5);
    in (arr, 8);
    return 0;
}
