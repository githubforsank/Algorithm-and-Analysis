#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    int a[10][10], b[10][10], mult[10][10], rowa, columna, rowb, columnb, i, j, k;
    x:
    cout << "\nEnter rows and columns for first matrix: ";
    cin >> rowa >> columna;
    cout << "\nEnter rows and columns for second matrix: ";
    cin >> rowb >> columnb;
	if((columna != rowb) || ( columna==0 || columnb==0 || rowa==0 || rowb==0))
	{
		cout<<"\n\nERROR\nMATRIX MULTIPLICATION IS NOT POSSIBLE ..!!!";
		goto x;
	}

    cout << endl << "\nEnter elements of matrix 1:" << endl;
    for(i=0; i<rowa; ++i)
    for(j=0; j<columna; ++j)
    {
        
        a[i][j]=rand()%20;
        cout << "\n a" << i+1 << j+1 << " : "<<a[i][j];
    }

    cout << endl << "\nEnter elements of matrix 2:" << endl;
    for(i=0; i<rowb; ++i)
    for(j=0; j<columnb; ++j)
    {
       
        b[i][j]=rand()%20;
        cout << "\nb" << i+1 << j+1 << " : "<<b[i][j];
    }

    for(i=0; i<rowa; ++i)
    for(j=0; j<columnb; ++j)
    {
       mult[i][j]=0;
    }

    for(i=0; i<rowa; ++i)
    for(j=0; j<columnb; ++j)
    for(k=0; k<columna; ++k)
    {
        mult[i][j]+=a[i][k]*b[k][j];
    }

    cout << endl << "\n\nOutput Matrix: " << endl;
    for(i=0; i<rowa; ++i)
    for(j=0; j<columnb; ++j)
    {
        cout << "\t" << mult[i][j];
        if(j==columnb-1)
            cout << endl;
    }
    system("pause");
    return 0;
}
