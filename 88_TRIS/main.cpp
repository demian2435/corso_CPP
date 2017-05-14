

using namespace std;

int main()
{
    int tris[3][3]={{1,2,3},
                    {4,5,6},
                    {7,8,9}};//array multidimensionale riga e colonna

    cout<<tris [1][1]<<endl<<endl;//stampa il 5

    for(int r=0;r<3;r++)//stampa multi-dimensionale
    {
        for(int c=0;c<3;c++)
            cout<<tris[r][c]<<" ";

        cout<<endl;
    }

}
