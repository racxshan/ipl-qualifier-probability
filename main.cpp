/***************************************************************************************
/ Modify variable done (number of matches already completed) in Line 49
/ Modify points table in Lines 206-215
/ Modify the number in bitset command equal to number of remaining matches in Line 220
****************************************************************************************/

#include "stdc++.h"
using namespace std;

#define CSK 0
#define SRH 1
#define DC 2
#define KKR 3
#define PBKS 4
#define MI 5
#define RCB 6
#define RR 7
#define GT 8
#define LSG 9

int twopower(int n)
{
    return 1<<n;
}

struct match
{
    int home;
    int away;
};

int n_largest(vector<int> a, int n)
{
    sort(a.begin(),a.end());
    return a[10-n];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string teams[10] = {"CSK","SRH","DC","KKR","PBKS","MI","RCB","RR","GT","LSG"};
    vector<double> sure_top4(10,0);
    vector<double> maybe_top4(10,0);
    vector<double> sure_top2(10,0);
    vector<double> maybe_top2(10,0);

    int done      = 40;
    int total     = 70;
    int remaining = total-done;

    int x = twopower(remaining);
    string s;

    match results[total+1];
    
    results[1].home = CSK;
    results[2].home = DC;
    results[3].home = PBKS;
    results[4].home = GT;
    results[5].home = SRH;
    results[6].home = RCB;
    results[7].home = LSG;
    results[8].home = KKR;
    results[9].home = MI;
    results[10].home = GT;
    results[11].home = CSK;
    results[12].home = SRH;
    results[13].home = RR;
    results[14].home = KKR;
    results[15].home = LSG;
    results[16].home = PBKS;
    results[17].home = CSK;
    results[18].home = RCB;
    results[19].home = KKR;
    results[20].home = RR;
    results[21].home = SRH;
    results[22].home = CSK;
    results[23].home = MI;
    results[24].home = RR;
    results[25].home = SRH;
    results[26].home = MI;
    results[27].home = DC;
    results[28].home = PBKS;
    results[29].home = GT;
    results[30].home = RR;
    results[31].home = LSG;
    results[32].home = DC;
    results[33].home = MI;
    results[34].home = DC;
    results[35].home = KKR;
    results[36].home = RCB;
    results[37].home = LSG;
    results[38].home = PBKS;
    results[39].home = RCB;
    results[40].home = GT;
    results[41].home = DC;
    results[42].home = PBKS;
    results[43].home = GT;
    results[44].home = RR;
    results[45].home = DC;
    results[46].home = SRH;
    results[47].home = KKR;
    results[48].home = GT;
    results[49].home = RCB;
    results[50].home = DC;
    results[51].home = GT;
    results[52].home = PBKS;
    results[53].home = LSG;
    results[54].home = SRH;
    results[55].home = CSK;
    results[56].home = MI;
    results[57].home = LSG;
    results[58].home = RR;
    results[59].home = CSK;
    results[60].home = RCB;
    results[61].home = KKR;
    results[62].home = CSK;
    results[63].home = LSG;
    results[64].home = PBKS;
    results[65].home = MI;
    results[66].home = KKR;
    results[67].home = RCB;
    results[68].home = RR;
    results[69].home = MI;
    results[70].home = SRH;
    
    results[1].away = KKR;
    results[2].away = MI;
    results[3].away = RCB;
    results[4].away = LSG;
    results[5].away = RR;
    results[6].away = KKR;
    results[7].away = CSK;
    results[8].away = PBKS;
    results[9].away = RR;
    results[10].away = DC;
    results[11].away = PBKS;
    results[12].away = LSG;
    results[13].away = RCB;
    results[14].away = MI;
    results[15].away = DC;
    results[16].away = GT;
    results[17].away = SRH;
    results[18].away = MI;
    results[19].away = DC;
    results[20].away = LSG;
    results[21].away = GT;
    results[22].away = RCB;
    results[23].away = PBKS;
    results[24].away = GT;
    results[25].away = KKR;
    results[26].away = LSG;
    results[27].away = RCB;
    results[28].away = SRH;
    results[29].away = CSK;
    results[30].away = KKR;
    results[31].away = RCB;
    results[32].away = PBKS;
    results[33].away = CSK;
    results[34].away = RR;
    results[35].away = GT;
    results[36].away = SRH;
    results[37].away = MI;
    results[38].away = CSK;
    results[39].away = RR;
    results[40].away = SRH;
    results[41].away = KKR;
    results[42].away = LSG;
    results[43].away = RCB;
    results[44].away = MI;
    results[45].away = LSG;
    results[46].away = CSK;
    results[47].away = RR;
    results[48].away = PBKS;
    results[49].away = CSK;
    results[50].away = SRH;
    results[51].away = MI;
    results[52].away = RR;
    results[53].away = KKR;
    results[54].away = RCB;
    results[55].away = DC;
    results[56].away = KKR;
    results[57].away = GT;
    results[58].away = DC;
    results[59].away = MI;
    results[60].away = PBKS;
    results[61].away = SRH;
    results[62].away = GT;
    results[63].away = RR;
    results[64].away = DC;
    results[65].away = SRH;
    results[66].away = LSG;
    results[67].away = GT;
    results[68].away = CSK;
    results[69].away = DC;
    results[70].away = PBKS;

    int step = x/100;
    vector<int> points;
    
    for(int t=0;t<x;t++)
    {
        points.clear();
        points.push_back(4);    //CSK
        points.push_back(10);   //SRH
        points.push_back(6);    //DC
        points.push_back(6);    //KKR
        points.push_back(8);    //PBKS
        points.push_back(0);    //MI
        points.push_back(10);   //RCB
        points.push_back(12);   //RR
        points.push_back(14);   //GT
        points.push_back(10);   //LSG

        if(t%step==0)
            printf("Step : %d\n", t/step);

        s = std::bitset<30>(t).to_string();

        for(int i=0;i<remaining;i++)
        {
            if(s[i]=='0')
                points[results[done+i+1].home] += 2;
            else
                points[results[done+i+1].away] += 2;
        }

        int fourth = n_largest(points,4);
        int fifth  = n_largest(points,5);

        if(fourth==fifth)
            for(int i=0;i<10;i++)
            {
                if(points[i]>fourth)
                    sure_top4[i]++;
                if(points[i]>=fourth)
                    maybe_top4[i]++;
            }
        else
            for(int i=0;i<10;i++)
            {
                if(points[i]>=fourth)
                {
                    sure_top4[i]++;
                    maybe_top4[i]++;
                }
            }

        int second = n_largest(points,2);
        int third  = n_largest(points,3);

        if(second==third)
            for(int i=0;i<10;i++)
            {
                if(points[i]>second)
                    sure_top2[i]++;
                if(points[i]>=second)
                    maybe_top2[i]++;
            }
        else
            for(int i=0;i<10;i++)
            {
                if(points[i]>=second)
                {
                    sure_top2[i]++;
                    maybe_top2[i]++;
                }
            }
    }

    //Sort by sure_top4 (using bubble sort since there are only 10 elements and it is done only once)
    for(int i=0;i<10;i++)
        for(int j=i+1;j<10;j++)
            if(sure_top4[j]>sure_top4[i])
            {
                swap(teams[i],teams[j]);
                swap(sure_top4[i],sure_top4[j]);
                swap(maybe_top4[i],maybe_top4[j]);
                swap(sure_top2[i],sure_top2[j]);
                swap(maybe_top2[i],maybe_top2[j]);
            }

    for(int i=0;i<10;i++)
        printf("%s \t %.0f \t %.0f \t %.0f \t %.0f\n",teams[i].c_str(),sure_top4[i],maybe_top4[i],sure_top2[i],maybe_top2[i]);
    
    
    //Converting to percentage
    for(int i=0;i<10;i++)
    {
        sure_top2[i] /= x;
        /*sure_top2[i] *= 100;*/
        maybe_top2[i] /= x;
        /*maybe_top2[i] *= 100;*/
        sure_top4[i] /= x;
        /*sure_top4[i] *= 100;*/
        maybe_top4[i] /= x;
        /*maybe_top4[i] *= 100;*/
    }
    
    /*
    for(int i=0;i<10;i++)
        printf("%s \t SURE_TOP4 : %.5f \t MAYBE_TOP4 : %.5f \t SURE_TOP2 : %.5f \t MAYBE_TOP2 : %.5f\n",teams[i].c_str(),sure_top4[i],maybe_top4[i],sure_top2[i],maybe_top2[i]);
    */
    
    for(int i=0;i<10;i++)
        printf("%s \t %.5f \t %.5f \t %.5f \t %.5f\n",teams[i].c_str(),sure_top4[i],maybe_top4[i],sure_top2[i],maybe_top2[i]);

    return 0;
}
