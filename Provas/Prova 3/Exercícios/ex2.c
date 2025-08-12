// EU ODEIO O ERRO SEGMENTATION FAULT
    
// TAMBÉM ODEIO O RUNTIME ERROR
    
#include <stdio.h>
#include <stdlib.h>
    
typedef struct {
    int num_likes;
    int num_retweets;
    int num_quotes;
} twitter;
    
int main() {
    int n, m, i, j, u1, u2, totalL = 0, L, totalR = 0, R, totalQ = 0, Q, op, totalop = 0;
    double mediaL, mediaR, mediaQ;
    scanf("%d", &n);
    twitter ** relations = (twitter**)malloc(n*sizeof(twitter*));
    scanf("%d", &m);
    for(i=0;i<n;i++) relations[i] = (twitter*)malloc(n*sizeof(twitter));
    for(i=0;i<m;i++)
    {
        scanf("%d%d", &u1, &u2);
        scanf("%d%d%d", &(relations[u1][u2].num_likes), &(relations[u1][u2].num_retweets), &(relations[u1][u2].num_quotes));
    }
    i = 0;
    while(1)
    {
        L = 0;
        R = 0;
        Q = 0;
        op = 0;
        if(i == n) break;
        for(j=0;j<m;j++)
        {
            if(relations[i][j].num_likes != 0 || relations[i][j].num_retweets != 0 || relations[i][j].num_quotes != 0)
            {
                L += relations[i][j].num_likes;
                R += relations[i][j].num_retweets;
                Q += relations[i][j].num_quotes;
                op++;
            }
        }
        if(op > 0)
        {
            totalL += L;
            totalR += R;
            totalQ += Q;
            printf("Usuario %d - num. likes: %d, num. retweets: %d e num. mencoes: %d\n", i, L, R, Q);
            totalop += op;
        }
        if(totalop == m) break;
        i++;
    }
    printf("Slots vazios: %d\n", n*n - m);
    mediaL = totalL/(double)(i+1);
    mediaR = totalR/(double)(i+1);
    mediaQ = totalQ/(double)(i+1);
    printf("Media de likes por usuario: %.2lf\n", mediaL);
    printf("Media de retweets por usuario: %.2lf\n", mediaR);
    printf("Media de mencoes por usuario: %.2lf\n", mediaQ);
    free(relations);
    return 0;
}