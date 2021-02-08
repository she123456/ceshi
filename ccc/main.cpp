#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[21];
    char c;
    int n=0;
    while((c=getchar())!='\n')
    {
        if(isdigit(c))
        {
            ungetc(c,stdin);//将c送回输入流
            scanf("%d",&a[n++]);
        }
    }
    sort(a,a+n);
    int p = unique(a, a + n) - a;
    for(int i=0;i<p;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
