#include <stdio.h>

int initdata_age(int age[100], int score[100]);
int main()
{
    int count;
    int maxage = -1, minage = 1000;
    int maxscore = -1, minscore = 1000;
    int maxagecnt = 0, minagecnt = 0, maxscorecnt = 0, minscorecnt = 0;
    int age[100], maxagegrp[100], minagegrp[100];
    int score[100], maxscoregrp[100], minscoregrp[100];

    // == init data ==
    count = initdata_age(age, score);

    // == find max, min ==

    // find max age
    for (int i = 0; i < count; i++)
    {
        if (age[i] > maxage)
        {
            maxage = age[i];
            maxagecnt = 0;
            maxagegrp[maxagecnt] = i;
        }
        else if (age[i] == maxage)
        {
            maxagecnt++;
            maxagegrp[maxagecnt] = i;
        }
    }

    // find min age
    for (int i = 0; i < count; i++)
    {
        if (age[i] < minage)
        {
            minage = age[i];
            minagecnt = 0;
            minagegrp[minagecnt] = i;
        }
        else if (age[i] == minage)
        {
            minagecnt++;
            minagegrp[minagecnt] = i;
        }
    }

    // find max score
    for (int i = 0; i < count; i++)
    {
        if (score[i] > maxscore)
        {
            maxscore = score[i];
            maxscorecnt = 0;
            maxscoregrp[maxscorecnt] = i;
        }
        else if (score[i] == maxscore)
        {
            maxscorecnt++;
            maxscoregrp[maxscorecnt] = i;
        }
    }

    // find min score
    for (int i = 0; i < count; i++)
    {
        if (score[i] < minscore)
        {
            minscore = score[i];
            minscorecnt = 0;
            minscoregrp[minscorecnt] = i;
        }
        else if (score[i] == minscore)
        {
            minscorecnt++;
            minscoregrp[minscorecnt] = i;
        }
    }

    // == print max min ==

    // print max age
    for (int i = 0; i <= maxagecnt; i++)
        printf("Oldest age(%d) score as %d\n", maxage, score[maxagegrp[i]]);

    // print min age
    for (int i = 0; i <= minagecnt; i++)
        printf("Youngest age(%d) score as %d\n", minage, score[minagegrp[i]]);

    // print max score
    for (int i = 0; i <= maxscorecnt; i++)
        printf("Highest score(%d) age as %d\n", maxscore, age[maxscoregrp[i]]);

    // print min score
    for (int i = 0; i <= minscorecnt; i++)
        printf("Lowest score(%d) age as %d\n", minscore, age[minscoregrp[i]]);

    return 0;
}

int initdata_age(int age[100], int score[100])
{
    int i;
    for (i = 0; i < 100; i++)
    {
        int tmp_age, tmp_score;
        printf("Put age and score pair (End: -1, -1): ");
        scanf("%d %d", &tmp_age, &tmp_score);
        if (tmp_age == -1 && tmp_score == -1)
            break;
        age[i] = tmp_age;
        score[i] = tmp_score;
    }
    return i;
}