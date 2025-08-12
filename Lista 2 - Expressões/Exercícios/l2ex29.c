#include <stdio.h>

int main() {
    double num, n1 = 0, n2 = 0, n3 = 0, n4 = 0, temp1 = 0, temp2 = 0, temp3 = 0, temp4 = 0, i;
    
    for(i=0;i<4;i++)
    {
        scanf("%lf", &num);
        if(num >= n1)
        {
            temp1 = n1;
            n1 = num;
            if(n1 >= n2)
            {
                temp2 = n2;
                n2 = temp1;
                if(n2 >= n3)
                {
                    temp3 = n3;
                    n3 = temp2;
                    if(n3 >= n4)
                    {
                        temp4 = n4;
                        n4 = temp3;
                    }
                }
            }
        }
        else if(num < n1)
        {
            if(num >= n2)
            {
                temp2 = n2;
                n2 = num;
                if(n2 >= n3)
                {
                    temp3 = n3;
                    n3 = temp2;
                    if(n3 >= n4)
                    {
                        temp4 = n4;
                        n4 = temp3;
                    }
                }
            }
            else if(num < n2)
            {
                if(num >= n3)
                {
                    temp3 = n3;
                    n3 = num;
                    if(n3 >= n4)
                    {
                        temp4 = n4;
                        n4 = temp3;
                    }
                }
                else if(num < n3)
                {
                    temp4 = n4;
                    n4 = num;
                }
            }
        }
    }

    printf("%.2lf, %.2lf, %.2lf, %.2lf\n", n4, n3, n2, n1);

    return 0;
}