#include <stdio.h>
#include <math.h>

//Part 3 function declaration
double fsup_s(double sup[], double size, double *smallest);
double fsup_l(double sup[], double size, double *largest);
double fmich_s(double mich[], double size, double *smallest);
double fmich_l(double mich[], double size, double *largest);
double fhuron_s(double huron[], double size, double *smallest);
double fhuron_l(double huron[], double size, double *largest);
double ferie_s(double erie[], double size, double *smallest);
double ferie_l(double erie[], double size, double *largest);
double font_s(double ont[], double size, double *smallest);
double font_l(double ont[], double size, double *largest);
double fstclr_s(double stclr[], double size, double *smallest);
double fstclr_l(double stclr[], double size, double *largest);

//Part 4 function declaration
double fsmall_temp_overall(double small_temp_overall[], double size, double *smallest);
double flarge_temp_overall(double large_temp_overall[], double size, double *largest);

int main (void)
{
    //Reading File
    FILE*file;
    file = fopen("data.txt","r");
    double year[365],day[365],sup[365],mich[365],huron[365],erie[365],ont[365],stclr[365];
    int z=0;
    
    while(!feof(file))
    {
        fscanf(file,"%lf",&year[z]);
        fscanf(file,"%lf",&day[z]);
        fscanf(file,"%lf",&sup[z]);
        fscanf(file,"%lf",&mich[z]);
        fscanf(file,"%lf",&huron[z]);
        fscanf(file,"%lf",&erie[z]);
        fscanf(file,"%lf",&ont[z]);
        fscanf(file,"%lf",&stclr[z]);
        z=z+1;
    }
//Part 1 & 2
    double temp_avg_sup=0,temp_avg_mich=0,temp_avg_huron=0;
    double temp_avg_erie=0,temp_avg_ont=0,temp_avg_stclr=0;
    for (int pp=0;pp<365;pp++)
    {
        temp_avg_sup=temp_avg_sup+sup[pp];
        temp_avg_mich=temp_avg_mich+mich[pp];
        temp_avg_huron=temp_avg_huron+huron[pp];
        temp_avg_erie=temp_avg_erie+erie[pp];
        temp_avg_ont=temp_avg_ont+ont[pp];
        temp_avg_stclr=temp_avg_stclr+stclr[pp];
    }
        temp_avg_sup=temp_avg_sup/365;
        temp_avg_mich=temp_avg_mich/365;
        temp_avg_huron=temp_avg_huron/365;
        temp_avg_erie=temp_avg_erie/365;
        temp_avg_ont=temp_avg_ont/365;
        temp_avg_stclr=temp_avg_stclr/365;
        double temp_avg_total=(temp_avg_sup+temp_avg_mich+temp_avg_huron+temp_avg_erie+temp_avg_ont+temp_avg_stclr)/6;
//Part 3
    
        //Lake Superior
            //Smallest temperature
    double small_sup,small_sup_value,small_sup_day;
    small_sup_value=fsup_s(sup,365,&small_sup);
    small_sup_day=small_sup_value+1;
            //Largest temperature
    double large_sup,large_sup_value,large_sup_day;
    large_sup_value=fsup_l(sup,365,&large_sup);
    large_sup_day=large_sup_value+1;
    
        //Lake Michigan
            //Smallest temperature
    double small_mich,small_mich_value,small_mich_day;
    small_mich_value=fmich_s(mich,365,&small_mich);
    small_mich_day=small_mich_value+1;
            //Largest temperature
    double large_mich,large_mich_value,large_mich_day;
    large_mich_value=fmich_l(mich,365,&large_mich);
    large_mich_day=large_mich_value+1;
    
        //Lake Huron
            //Smallest temperature
    double small_huron,small_huron_value,small_huron_day;
    small_huron_value=fhuron_s(huron,365,&small_huron);
    small_huron_day=small_huron_value+1;
            //Largest temperature
    double large_huron,large_huron_value,large_huron_day;
    large_huron_value=fhuron_l(huron,365,&large_huron);
    large_huron_day=large_huron_value+1;
    
        //Lake Erie
            //Smallest temperature
    double small_erie,small_erie_value,small_erie_day;
    small_erie_value=ferie_s(erie,365,&small_erie);
    small_erie_day=small_erie_value+1;
            //Largest temperature
    double large_erie,large_erie_value,large_erie_day;
    large_erie_value=ferie_l(erie,365,&large_erie);
    large_erie_day=large_erie_value+1;
    
        //Lake Ontario
            //Smallest temperature
    double small_ont,small_ont_value,small_ont_day;
    small_ont_value=font_s(ont,365,&small_ont);
    small_ont_day=small_ont_value+1;
            //Largest temperature
    double large_ont,large_ont_value,large_ont_day;
    large_ont_value=font_l(ont,365,&large_ont);
    large_ont_day=large_ont_value+1;
    
        //Lake St. Clair
            //Smallest temperature
    double small_stclr,small_stclr_value,small_stclr_day;
    small_stclr_value=fstclr_s(stclr,365,&small_stclr);
    small_stclr_day=small_stclr_value+1;
            //Largest temperature
    double large_stclr,large_stclr_value,large_stclr_day;
    large_stclr_value=fstclr_l(stclr,365,&large_stclr);
    large_stclr_day=large_stclr_value+1;
    
    
    //Month values declaration
    int small_sup_m_int,small_mich_m_int,small_huron_m_int,small_erie_m_int,small_ont_m_int,small_stclr_m_int;
    int large_sup_m_int,large_mich_m_int,large_huron_m_int,large_erie_m_int,large_ont_m_int,large_stclr_m_int;
    
    //Day values declaration
    double small_sup_d,small_mich_d,small_huron_d,small_erie_d,small_ont_d,small_stclr_d;
    double large_sup_d,large_mich_d,large_huron_d,large_erie_d,large_ont_d,large_stclr_d;
    
    //cold date values declaration
    double small_temp_dates[6]={small_sup_day,small_mich_day,small_huron_day,small_erie_day,small_ont_day,small_stclr_day};
    double small_temp_monthz[6];
    double small_temp_dayz[6];
    
    //warm date values declaration
    double large_temp_dates[6]={large_sup_day,large_mich_day,large_huron_day,large_erie_day,large_ont_day,large_stclr_day};
    double large_temp_monthz[6];
    double large_temp_dayz[6];
    

    int ve_s=0,ve_l=0;
    //coldest temp dates
    for(int i=0;i<6;i++)
    {
        //January
        if(small_temp_dates[ve_s]>0 && small_temp_dates[ve_s]<32)
        {
            small_temp_monthz[ve_s]=0;
            small_temp_dayz[ve_s]=small_temp_dates[ve_s];
        }
        //February
        else if(small_temp_dates[ve_s]>31 && small_temp_dates[ve_s]<60)
        {
            small_temp_monthz[ve_s]=1;
            small_temp_dayz[ve_s]=small_temp_dates[ve_s]-31;
        }
        //March
        else if(small_temp_dates[ve_s]>59 && small_temp_dates[ve_s]<91)
        {
            small_temp_monthz[ve_s]=2;
            small_temp_dayz[ve_s]=small_temp_dates[ve_s]-31-28;
        }
        //April
        else if(small_temp_dates[ve_s]>90 && small_temp_dates[ve_s]<121)
        {
            small_temp_monthz[ve_s]=3;
            small_temp_dayz[ve_s]=small_temp_dates[ve_s]-31-28-31;
        }
        //May
        else if(small_temp_dates[ve_s]>120 && small_temp_dates[ve_s]<152)
        {
            small_temp_monthz[ve_s]=4;
            small_temp_dayz[ve_s]=small_temp_dates[ve_s]-31-28-31-30;
        }
        //June
        else if(small_temp_dates[ve_s]>151 && small_temp_dates[ve_s]<182)
        {
            small_temp_monthz[ve_s]=5;
            small_temp_dayz[ve_s]=small_temp_dates[ve_s]-31-28-31-30-31;
        }
        //July
        else if(small_temp_dates[ve_s]>181 && small_temp_dates[ve_s]<213)
        {
            small_temp_monthz[ve_s]=6;
            small_temp_dayz[ve_s]=small_temp_dates[ve_s]-31-28-31-30-31-30;
        }
        //August
        else if(small_temp_dates[ve_s]>212 && small_temp_dates[ve_s]<244)
        {
            small_temp_monthz[ve_s]=7;
            small_temp_dayz[ve_s]=small_temp_dates[ve_s]-31-28-31-30-31-30-31;
        }
        //September
        else if(small_temp_dates[ve_s]>243 && small_temp_dates[ve_s]<274)
        {
            small_temp_monthz[ve_s]=8;
            small_temp_dayz[ve_s]=small_temp_dates[ve_s]-31-28-31-30-31-30-31-31;
        }
        //October
        else if(small_temp_dates[ve_s]>273 && small_temp_dates[ve_s]<305)
        {
            small_temp_monthz[ve_s]=9;
            small_temp_dayz[ve_s]=small_temp_dates[ve_s]-31-28-31-30-31-30-31-31-30;
        }
        //November
        else if(small_temp_dates[ve_s]>304 && small_temp_dates[ve_s]<335)
        {
            small_temp_monthz[ve_s]=10;
            small_temp_dayz[ve_s]=small_temp_dates[ve_s]-31-28-31-30-31-30-31-31-30-31;
        }
        //December
        else if(small_temp_dates[ve_s]>334 && small_temp_dates[ve_s]<366)
        {
            small_temp_monthz[ve_s]=11;
            small_temp_dayz[ve_s]=small_temp_dates[ve_s]-31-28-31-30-31-30-31-31-30-31-30;
        }
        ve_s=ve_s+1;
    }
    
    //warmest temp dates
    for(int i=0;i<6;i++)
    {
        //January
        if(large_temp_dates[ve_l]>0 && large_temp_dates[ve_l]<32)
        {
            large_temp_monthz[ve_l]=0;
            large_temp_dayz[ve_l]=large_temp_dates[ve_l];
        }
        //February
        else if(large_temp_dates[ve_l]>31 && large_temp_dates[ve_l]<60)
        {
            large_temp_monthz[ve_l]=1;
            large_temp_dayz[ve_l]=large_temp_dates[ve_l]-31;
        }
        //March
        else if(large_temp_dates[ve_l]>59 && large_temp_dates[ve_l]<91)
        {
            large_temp_monthz[ve_l]=2;
            large_temp_dayz[ve_l]=large_temp_dates[ve_l]-31-28;
        }
        //April
        else if(large_temp_dates[ve_l]>90 && large_temp_dates[ve_l]<121)
        {
            large_temp_monthz[ve_l]=3;
            large_temp_dayz[ve_l]=large_temp_dates[ve_l]-31-28-31;
        }
        //May
        else if(large_temp_dates[ve_l]>120 && large_temp_dates[ve_l]<152)
        {
            large_temp_monthz[ve_l]=4;
            large_temp_dayz[ve_l]=large_temp_dates[ve_l]-31-28-31-30;
        }
        //June
        else if(large_temp_dates[ve_l]>151 && large_temp_dates[ve_l]<182)
        {
            large_temp_monthz[ve_l]=5;
            large_temp_dayz[ve_l]=large_temp_dates[ve_l]-31-28-31-30-31;
        }
        //July
        else if(large_temp_dates[ve_l]>181 && large_temp_dates[ve_l]<213)
        {
            large_temp_monthz[ve_l]=6;
            large_temp_dayz[ve_l]=large_temp_dates[ve_l]-31-28-31-30-31-30;
        }
        //August
        else if(large_temp_dates[ve_l]>212 && large_temp_dates[ve_l]<244)
        {
            large_temp_monthz[ve_l]=7;
            large_temp_dayz[ve_l]=large_temp_dates[ve_l]-31-28-31-30-31-30-31;
        }
        //September
        else if(large_temp_dates[ve_l]>243 && large_temp_dates[ve_l]<274)
        {
            large_temp_monthz[ve_l]=8;
            large_temp_dayz[ve_l]=large_temp_dates[ve_l]-31-28-31-30-31-30-31-31;
        }
        //October
        else if(large_temp_dates[ve_l]>273 && large_temp_dates[ve_l]<305)
        {
            large_temp_monthz[ve_l]=9;
            large_temp_dayz[ve_l]=large_temp_dates[ve_l]-31-28-31-30-31-30-31-31-30;
        }
        //November
        else if(large_temp_dates[ve_l]>304 && large_temp_dates[ve_l]<335)
        {
            large_temp_monthz[ve_l]=10;
            large_temp_dayz[ve_l]=large_temp_dates[ve_l]-31-28-31-30-31-30-31-31-30-31;
        }
        //December
        if(large_temp_dates[ve_l]>334 && large_temp_dates[ve_l]<366)
        {
            large_temp_monthz[ve_l]=11;
            large_temp_dayz[ve_l]=large_temp_dates[ve_l]-31-28-31-30-31-30-31-31-30-31-30;
        }
        ve_l=ve_l+1;
    }
    
    //Warm temperatures, assigning month and day values
        //Month values
    large_sup_m_int=large_temp_monthz[0];
    large_mich_m_int=large_temp_monthz[1];
    large_huron_m_int=large_temp_monthz[2];
    large_erie_m_int=large_temp_monthz[3];
    large_ont_m_int=large_temp_monthz[4];
    large_stclr_m_int=large_temp_monthz[5];
        //Day Values
    large_sup_d=large_temp_dayz[0];
    large_mich_d=large_temp_dayz[1];
    large_huron_d=large_temp_dayz[2];
    large_erie_d=large_temp_dayz[3];
    large_ont_d=large_temp_dayz[4];
    large_stclr_d=large_temp_dayz[5];
    
    //Cold temperatures, assigning month and day values
        //Month values
    small_sup_m_int=small_temp_monthz[0];
    small_mich_m_int=small_temp_monthz[1];
    small_huron_m_int=small_temp_monthz[2];
    small_erie_m_int=small_temp_monthz[3];
    small_ont_m_int=small_temp_monthz[4];
    small_stclr_m_int=small_temp_monthz[5];
        //Day Values
    small_sup_d=small_temp_dayz[0];
    small_mich_d=small_temp_dayz[1];
    small_huron_d=small_temp_dayz[2];
    small_erie_d=small_temp_dayz[3];
    small_ont_d=small_temp_dayz[4];
    small_stclr_d=small_temp_dayz[5];

    
//Part 4
    double small_temp_overall[6]={small_sup,small_mich,small_huron,small_erie,small_ont,small_stclr};
    double large_temp_overall[6]={large_sup,large_mich,large_huron,large_erie,large_ont,large_stclr};
            //Smallest temperature overall
    double  small_temp_;
    fsmall_temp_overall(small_temp_overall,6,&small_temp_);
            //Largest temperature overall
    double large_temp_;
    flarge_temp_overall(large_temp_overall,6,&large_temp_);

//Part 3 & 4 Months

    char months [12][10] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    

//Part 5
    double summer_avg_sup=0,summer_avg_mich=0,summer_avg_huron=0;
    double summer_avg_erie=0,summer_avg_ont=0,summer_avg_stclr=0;
    for (int ppp=171;ppp<265;ppp++)
    {
        summer_avg_sup=summer_avg_sup+sup[ppp];
        summer_avg_mich=summer_avg_mich+mich[ppp];
        summer_avg_huron=summer_avg_huron+huron[ppp];
        summer_avg_erie=summer_avg_erie+erie[ppp];
        summer_avg_ont=summer_avg_ont+ont[ppp];
        summer_avg_stclr=summer_avg_stclr+stclr[ppp];
    }
        summer_avg_sup = summer_avg_sup/93;
        summer_avg_mich = summer_avg_mich/93;
        summer_avg_huron = summer_avg_huron/93;
        summer_avg_erie = summer_avg_erie/93;
        summer_avg_ont = summer_avg_ont/93;
        summer_avg_stclr = summer_avg_stclr/93;
		
        int ze, i;
        double temp;
        double summeravg[6] = {summer_avg_sup, summer_avg_mich, summer_avg_huron, summer_avg_erie, summer_avg_ont, summer_avg_stclr};
              for (ze = 0; ze < 5; ze++)
              {
                  for(i=0; i < 5 - ze; i++)
                  {
                      if(summeravg[i] < summeravg[i+1])
                      {
                          temp = summeravg[i];
                          summeravg[i] = summeravg[i+1];
                          summeravg[i+1] = temp;
                      }
                  }
              }
//Part 6
    double winter_avg_sup=0,winter_avg_mich=0,winter_avg_huron=0;
    double winter_avg_erie=0,winter_avg_ont=0,winter_avg_stclr=0;
    for (int pppp=0;pppp<79;pppp++)
    {
        winter_avg_sup=winter_avg_sup+sup[pppp];
        winter_avg_mich=winter_avg_mich+mich[pppp];
        winter_avg_huron=winter_avg_huron+huron[pppp];
        winter_avg_erie=winter_avg_erie+erie[pppp];
        winter_avg_ont=winter_avg_ont+ont[pppp];
        winter_avg_stclr=winter_avg_stclr+stclr[pppp];
    }
    for (int ppppp=354;ppppp<365;ppppp++)
    {
        winter_avg_sup=winter_avg_sup+sup[ppppp];
        winter_avg_mich=winter_avg_mich+mich[ppppp];
        winter_avg_huron=winter_avg_huron+huron[ppppp];
        winter_avg_erie=winter_avg_erie+erie[ppppp];
        winter_avg_ont=winter_avg_ont+ont[ppppp];
        winter_avg_stclr=winter_avg_stclr+stclr[ppppp];
    }
        winter_avg_sup=winter_avg_sup/88;
        winter_avg_mich=winter_avg_mich/88;
        winter_avg_huron=winter_avg_huron/88;
        winter_avg_erie=winter_avg_erie/88;
        winter_avg_ont=winter_avg_ont/88;
        winter_avg_stclr=winter_avg_stclr/88;
  
        int zo, n;
        double swap;
        double winteravg[6] = {winter_avg_sup, winter_avg_mich, winter_avg_huron, winter_avg_erie, winter_avg_ont, winter_avg_stclr};
    
              for (zo = 0; zo < 5; zo++)
              {
                  for(n=0; n < 5 - zo; n++)
                  {
                      if(winteravg[n] < winteravg[n+1])
                      {
                          swap = winteravg[n];
                          winteravg[n] = winteravg[n+1];
                          winteravg[n+1] = swap;
                      }
                  }
              }

fclose(file);

//Part 7
    FILE *f = fopen("data.txt","r");
    double y[365], d[365], s[365], mic[365];
    double hur[365], eri[365], on[365], stcl[365];
    int v=0;
    int x;
    
    while(!feof(f))
    {
        fscanf(f,"%lf",&y[v]);
        fscanf(f,"%lf",&d[v]);
        fscanf(f,"%lf",&s[v]);
        fscanf(f,"%lf",&mic[v]);
        fscanf(f,"%lf",&hur[v]);
        fscanf(f,"%lf",&eri[v]);
        fscanf(f,"%lf",&on[v]);
        fscanf(f,"%lf",&stcl[v]);
        v++;
    }
    
    //Lake Sup//
    
    int swim_sup = 0;
    
    for(x=0; x<365; x++)
    {
        if(s[x]>20)
            swim_sup++;
        continue;
    }
    //Lake Mich//
    int swim_mich = 0;
    
    for(x=0; x<365; x++)
    {
        if(mic[x]>20)
            swim_mich++;
        continue;
    }
    //Lake Huron//
    int swim_huron = 0;
    
    for(x=0; x<365; x++)
    {
        if(hur[x]>20)
            swim_huron++;
        continue;
    }
    //Lake Erie//
    int swim_erie = 0;
    
    for(x=0; x<365; x++)
    {
        if(eri[x]>20)
            swim_erie++;
        continue;
    }
    //Lake Ontario//
    int swim_ont = 0;
    
    for(x=0; x<365; x++)
    {
        if(on[x]>20)
            swim_ont++;
        continue;
    }
    //Lake St.Clr//
    int swim_stclr = 0;
    
    for(x=0; x<365; x++)
    {
        if(stcl[x]>20)
            swim_stclr++;
        continue;
    }
    
//Part 8
    //Lake Sup//
    int freeze_sup = 0;
    
    for(i=0; i<365; i++)
    {
        if(sup[i]<0)
            freeze_sup++;
        continue;
    }
    //Lake Mich//
    int freeze_mich = 0;
    
    for(i=0; i<365; i++)
    {
        if(mich[i]<0)
            freeze_mich++;
        continue;
    }
    //Lake Huron//
    int freeze_huron = 0 ;
    
    for(i=0; i<365; i++)
    {
        if(huron[i]<0)
            freeze_huron++;
        continue;
    }
    //Lake Erie//
    int freeze_erie = 0;
    
    for(i=0; i<365; i++)
    {
        if(erie[i]<0)
            freeze_erie++;
        continue;
    }
    //Lake Ont//
    int freeze_ont = 0;
    
    for(i=0; i<365; i++)
    {
        if(ont[i]<0)
            freeze_ont++;
        continue;
    }
    //Lake St. Clr//
    int freeze_stclr = 0;
    
    for(i=0; i<365; i++)
    {
        if(stclr[i]<0)
            freeze_stclr++;
        continue;
    }
    fclose(f);
    
//Part 9
    //Reading File
    FILE*fil;
    fil = fopen("2018data.txt","r");
    double _year[365],_day[365],_sup[365],_mich[365],_huron[365],_erie[365],_ont[365],_stclr[365];
    int zx=0;
    
    while(!feof(file))
    {
        fscanf(file,"%lf",&_year[zx]);
        fscanf(file,"%lf",&_day[zx]);
        fscanf(file,"%lf",&_sup[zx]);
        fscanf(file,"%lf",&_mich[zx]);
        fscanf(file,"%lf",&_huron[zx]);
        fscanf(file,"%lf",&_erie[zx]);
        fscanf(file,"%lf",&_ont[zx]);
        fscanf(file,"%lf",&_stclr[zx]);
        zx=zx+1;
    }
    //Averages
    double _temp_avg_sup=0,_temp_avg_mich=0,_temp_avg_huron=0;
    double _temp_avg_erie=0,_temp_avg_ont=0,_temp_avg_stclr=0;
    for (int pp=0;pp<365;pp++)
    {
        _temp_avg_sup=_temp_avg_sup+_sup[pp];
        _temp_avg_mich=_temp_avg_mich+_mich[pp];
        _temp_avg_huron=_temp_avg_huron+_huron[pp];
        _temp_avg_erie=_temp_avg_erie+_erie[pp];
        _temp_avg_ont=_temp_avg_ont+_ont[pp];
        _temp_avg_stclr=_temp_avg_stclr+_stclr[pp];
    }
        _temp_avg_sup=_temp_avg_sup/365;
        _temp_avg_mich=_temp_avg_mich/365;
        _temp_avg_huron=_temp_avg_huron/365;
        _temp_avg_erie=_temp_avg_erie/365;
        _temp_avg_ont=_temp_avg_ont/365;
        _temp_avg_stclr=_temp_avg_stclr/365;
    
    fclose(fil);

//Part 1 print out statements
    printf("----------PART 1---------- \n\n");
    printf("-----------------------------------------------------\n");
    printf("|    Name of Lake     |     Average Temperature     |\n");
    printf("-----------------------------------------------------\n");
    printf("|    Superior         |           %0.2lf °C           |\n",temp_avg_sup);
    printf("|    Michigan         |           %0.2lf °C           |\n",temp_avg_mich);
    printf("|    Huron            |           %0.2lf °C           |\n",temp_avg_huron);
    printf("|    Erie             |           %0.2lf °C          |\n",temp_avg_erie);
    printf("|    Ontario          |           %0.2lf °C           |\n",temp_avg_ont);
    printf("|    St. Clair        |           %0.2lf °C          |\n",temp_avg_stclr);
    printf("|    All Six          |           %0.2lf °C           |\n",temp_avg_total);
    printf("-----------------------------------------------------\n");

//Part 2 print out statements
    printf("\n----------PART 2---------- \n");
            //warmest
    if (temp_avg_sup>temp_avg_mich && temp_avg_sup>temp_avg_huron && temp_avg_sup>temp_avg_erie && temp_avg_sup>temp_avg_ont && temp_avg_sup>temp_avg_stclr)
    {
        printf("\nThe warmest lake is lake Superior.");
    }
    if (temp_avg_mich>temp_avg_sup && temp_avg_mich>temp_avg_huron && temp_avg_mich>temp_avg_erie && temp_avg_mich>temp_avg_ont && temp_avg_mich>temp_avg_stclr)
    {
        printf("\nThe warmest lake is lake Michigan.");
    }
    if (temp_avg_huron>temp_avg_mich && temp_avg_huron>temp_avg_sup && temp_avg_huron>temp_avg_erie && temp_avg_huron>temp_avg_ont && temp_avg_huron>temp_avg_stclr)
    {
        printf("\nThe warmest lake is lake Huron.");
    }
    if (temp_avg_erie>temp_avg_mich && temp_avg_erie>temp_avg_huron && temp_avg_erie>temp_avg_sup && temp_avg_erie>temp_avg_ont && temp_avg_erie>temp_avg_stclr)
    {
        printf("\nThe warmest lake is lake Erie.");
    }
    if (temp_avg_ont>temp_avg_mich && temp_avg_ont>temp_avg_huron && temp_avg_ont>temp_avg_erie && temp_avg_ont>temp_avg_sup && temp_avg_ont>temp_avg_stclr)
    {
        printf("\nThe warmest lake is lake Ontario.");
    }
    if (temp_avg_stclr>temp_avg_mich && temp_avg_stclr>temp_avg_huron && temp_avg_stclr>temp_avg_erie && temp_avg_stclr>temp_avg_ont && temp_avg_stclr>temp_avg_sup)
    {
        printf("\nThe warmest lake is lake St. Clair.");
    }
            //coldest
    if (temp_avg_sup<temp_avg_mich && temp_avg_sup<temp_avg_huron && temp_avg_sup<temp_avg_erie && temp_avg_sup<temp_avg_ont && temp_avg_sup<temp_avg_stclr)
    {
        printf("\nThe coldest lake is lake Superior.");
    }
    if (temp_avg_mich<temp_avg_sup && temp_avg_mich<temp_avg_huron && temp_avg_mich<temp_avg_erie && temp_avg_mich<temp_avg_ont && temp_avg_mich<temp_avg_stclr)
    {
        printf("\nThe coldest lake is lake Michigan.");
    }
    if (temp_avg_huron<temp_avg_mich && temp_avg_huron<temp_avg_sup && temp_avg_huron<temp_avg_erie && temp_avg_huron<temp_avg_ont && temp_avg_huron<temp_avg_stclr)
    {
        printf("\nThe coldest lake is lake Huron.");
    }
    if (temp_avg_erie<temp_avg_mich && temp_avg_erie<temp_avg_huron && temp_avg_erie<temp_avg_sup && temp_avg_erie<temp_avg_ont && temp_avg_erie<temp_avg_stclr)
    {
        printf("\nThe coldest lake is lake Erie.");
    }
    if (temp_avg_ont<temp_avg_mich && temp_avg_ont<temp_avg_huron && temp_avg_ont<temp_avg_erie && temp_avg_ont<temp_avg_sup && temp_avg_ont<temp_avg_stclr)
    {
        printf("\nThe coldest lake is lake Ontario.");
    }
    if (temp_avg_stclr<temp_avg_mich && temp_avg_stclr<temp_avg_huron && temp_avg_stclr<temp_avg_erie && temp_avg_stclr<temp_avg_ont && temp_avg_stclr<temp_avg_sup)
    {
        printf("\nThe coldest lake is lake St. Clair.");
    }
    printf("\n\n");
    printf("----------------------------------------------------------------");
    printf("\n|    Name of Lake    |    Compairson to Average Temperature    |\n");
    printf("----------------------------------------------------------------");

            //Average
    if (temp_avg_sup>temp_avg_total)
    {
        printf("\n|    Lake Superior   |                  Above                  |");
    }
    else
    {
        printf("\n|    Lake Superior   |                  Below                  |");
    }
    if (temp_avg_mich>temp_avg_total)
    {
        printf("\n|    Lake Michigan   |                  Above                  |");
    }
    else
    {
        printf("\n|    Lake Michigan   |                  Below                  |");
    }
    if (temp_avg_huron>temp_avg_total)
    {
        printf("\n|    Lake Huron      |                  Above                  |");
    }
    else
    {
        printf("\n|    Lake Huron      |                  Below                  |");
    }
    if (temp_avg_erie>temp_avg_total)
    {
        printf("\n|    Lake Erie       |                  Above                  |");
    }
    else
    {
        printf("\n|    Lake Erie       |                  Below                  |");
    }
    if (temp_avg_ont>temp_avg_total)
    {
        printf("\n|    Lake Ontario    |                  Above                  |");
    }
    else
    {
        printf("\n|    Lake Ontario    |                  Below                  |");
    }
    if (temp_avg_stclr>temp_avg_total)
    {
        printf("\n|    Lake St. Clair  |                  Above                  |");
    }
    else
    {
        printf("\n|    Lake St. Clair  |                  Below                  |");
    }
    printf("\n----------------------------------------------------------------");


//Part 3 print out statements
    printf("\n\n----------PART 3---------- \n\n");
    printf("----------------------------------------------------------------------------------------");
    printf("\n|    Name of Lake    |    Warm/Cold    |    Temperature    |    Month      |    Day    |\n");
    printf("----------------------------------------------------------------------------------------");
        //Lake Superior
            //Smallest temperature
    printf("\n|    Lake Superior   |     Coldest     |      %0.2lf °C      |    %s      |     %1.0lf     |",small_sup, months[small_sup_m_int], small_sup_d);
            //Largest temperature
    printf("\n|    Lake Superior   |     Warmest     |      %0.2lf °C     |    %s     |     %1.0lf    |",large_sup, months[large_sup_m_int], large_sup_d);
    
        //Lake Michigan
            //Smallest temperature
    printf("\n|    Lake Michigan   |     Coldest     |      %0.2lf °C      |    %s      |     %1.0lf     |",small_mich, months[small_mich_m_int], small_mich_d);
            //Largest temperature
    printf("\n|    Lake Michigan   |     Warmest     |      %0.2lf °C     |    %s     |     %1.0lf    |",large_mich, months[large_mich_m_int], large_mich_d);
    
        //Lake Huron
            //Smallest temperature
    printf("\n|    Lake Huron      |     Coldest     |      %0.2lf °C      |    %s      |     %1.0lf     |",small_huron, months[small_huron_m_int], small_huron_d);
            //Largest temperature
    printf("\n|    Lake Huron      |     Warmest     |      %0.2lf °C     |    %s     |     %1.0lf     |",large_huron, months[large_huron_m_int], large_huron_d);

        //Lake Erie
            //Smallest temperature
    printf("\n|    Lake Erie       |     Coldest     |      %0.2lf °C      |    %s   |     %1.0lf     |",small_erie, months[small_erie_m_int], small_erie_d);
            //Largest temperature
    printf("\n|    Lake Erie       |     Warmest     |      %0.2lf °C     |    %s     |     %1.0lf     |",large_erie, months[large_erie_m_int], large_erie_d);

        //Lake Ontario
            //Smallest temperature
    printf("\n|    Lake Ontario    |     Coldest     |      %0.2lf °C      |    %s      |     %1.0lf     |",small_ont, months[small_ont_m_int], small_ont_d);
            //Largest temperature
    printf("\n|    Lake Ontario    |     Warmest     |      %0.2lf °C     |    %s     |     %1.0lf     |",large_ont, months[large_ont_m_int], large_ont_d);

        //Lake St. Clair
            //Smallest temperature
    printf("\n|    Lake St. Clair  |     Coldest     |      %0.2lf °C      |    %s    |     %1.0lf    |",small_stclr, months[small_stclr_m_int], small_stclr_d);
            //Largest temperature
    printf("\n|    Lake St. Clair  |     Warmest     |      %0.2lf °C     |    %s       |     %1.0lf    |",large_stclr, months[large_stclr_m_int], large_stclr_d);
        printf("\n----------------------------------------------------------------------------------------");

//Part 4 Print out statements
    printf("\n\n----------PART 4---------- \n");
    printf("\n------------------------------------------------------------------------------------------------");
    printf("\n|    Name of Lake    |    Warmest/Coldest    |    Temperature    |     Month       |    Day    |\n");
    printf("------------------------------------------------------------------------------------------------");
            //warmest overall
    if (large_sup==large_temp_)
    {
        printf("\n|    Superior       |       %0.2lf       |     %s      |    %1.0lf     |", large_sup, months[large_sup_m_int], large_sup_d);
    }
    if (large_mich==large_temp_)
    {
        printf("\n|    Michigan       |       %0.2lf       |     %s      |    %1.0lf     |", large_mich, months[large_mich_m_int], large_mich_d);
    }
    if (large_huron==large_temp_)
    {
        printf("\n|    Huron       |       %0.2lf       |     %s      |    %1.0lf     |", large_huron, months[large_huron_m_int], large_huron_d);
    }
    if (large_erie==large_temp_)
    {
        printf("\n|    Erie       |       %0.2lf       |     %s      |    %1.0lf     |", large_erie, months[large_erie_m_int], large_erie_d);
    }
    if (large_ont==large_temp_)
    {
        printf("\n|    Ontario       |       %0.2lf       |     %s      |    %1.0lf     |", large_ont, months[large_ont_m_int], large_ont_d);
    }
    if (large_stclr==large_temp_)
    {
        printf("\n|    St. Clair       |        Warmest        |       %0.2lf       |     %s        |    %1.0lf     |", large_stclr, months[large_stclr_m_int], large_stclr_d);
    }
            //coldest overall
    if (small_sup==small_temp_)
    {
        printf("\n|    Superior        |        Coldest        |       %0.2lf        |     %s       |    %1.0lf      |", small_sup, months[small_sup_m_int], small_sup_d);
    }
    if (small_mich==small_temp_)
    {
        printf("\n|    Michigan       |        Coldest         |      %0.2lf       |     %s        |    %1.0lf     |", small_mich, months[small_mich_m_int], small_mich_d);
    }
    if (small_huron==small_temp_)
    {
        printf("\n|    Huron           |        Coldest        |       %0.2lf        |     %s       |    %1.0lf      |", small_huron, months[small_huron_m_int], small_huron_d);
    }
    if (small_erie==small_temp_)
    {
        printf("\n|    Erie            |        Coldest        |       %0.2lf        |     %s    |    %1.0lf      |", small_erie, months[small_erie_m_int], small_erie_d);
    }
    if (small_ont==small_temp_)
    {
        printf("\n|    Ontario       |        Coldest          |     %0.2lf        |     %s     |    %1.0lf     |", small_ont, months[small_ont_m_int], small_ont_d);
    }
    if (small_stclr==small_temp_)
    {
        printf("\n|    St. Clair       |        Coldest        |       %0.2lf        |     %s     |    %1.0lf     |", small_stclr, months[small_stclr_m_int], small_stclr_d);
    }
    printf("\n------------------------------------------------------------------------------------------------");

       
//Part 5 printout statements
    printf("\n\n----------PART 5---------- \n\n");
    printf("          Summer          \n");
    printf("--------------------------\n");
    printf("|         Warmest        |\n");
    printf("--------------------------\n");

        for (i=0; i < 6; i++)
        {
            if (summeravg[i] == summer_avg_sup)
                printf("|      Lake Superior     |\n");
            
            else if (summeravg[i] == summer_avg_mich)
                printf("|      Lake Michigan     |\n");
            
            else if (summeravg[i] == summer_avg_huron)
                printf("|      Lake Huron        |\n");
            
            else if (summeravg[i] == summer_avg_erie)
                printf("|      Lake Erie         |\n");
            
            else if (summeravg[i] == summer_avg_ont)
                printf("|      Lake Ontario      |\n");
            
            else if (summeravg[i] == summer_avg_stclr)
                printf("|      Lake St. Clair    |\n");
        }
    printf("--------------------------\n");
    printf("|         Coldest        |\n");
//Part 6 printout statemetns
    printf("\n----------PART 6---------- \n\n");
    printf("          Winter          \n");
    printf("--------------------------\n");
    printf("|         Warmest        |\n");
    printf("--------------------------\n");
            
              for (n=0; n < 6; n++)
                     {
                         if (winteravg[n] == winter_avg_sup)
                             printf("|      Lake Superior     |\n");

                         else if (winteravg[n] == winter_avg_mich)
                             printf("|      Lake Michigan     |\n");

                         else if (winteravg[n] == winter_avg_huron)
                             printf("|      Lake Huron        |\n");

                         else if (winteravg[n] == winter_avg_erie)
                             printf("|      Lake Erie         |\n");

                         else if (winteravg[n] == winter_avg_ont)
                             printf("|      Lake Ontario      |\n");

                         else if (winteravg[n] == winter_avg_stclr)
                             printf("|      Lake St. Clair    |\n");
                     }
    printf("--------------------------\n");
    printf("|         Coldest        |\n");
//Part 7 printout statements
    printf("\n----------PART 7---------- \n\n");
    printf("--------------------------------------------------------");
    printf("\n|    Name of Lake    |    Number of Swimmable Days     |\n");
    printf("--------------------------------------------------------");
    printf("\n|    Superior        |                %d                |",swim_sup);
    printf("\n|    Michigan        |                %d               |",swim_mich);
    printf("\n|    Huron           |                %d                |",swim_huron);
    printf("\n|    Erie            |                %d               |",swim_erie);
    printf("\n|    Ontario         |                %d               |",swim_ont);
    printf("\n|    St. Clair       |                %d               |",swim_stclr);
    printf("\n--------------------------------------------------------\n");

//Part 8 printout statements
    printf("\n----------PART 8---------- \n\n");
    printf("--------------------------------------------------------");
    printf("\n|    Name of Lake    |    Number of Freeze Days        |\n");
    printf("--------------------------------------------------------");
    printf("\n|    Superior        |                %d                |",freeze_sup);
    printf("\n|    Michigan        |                %d                |",freeze_mich);
    printf("\n|    Huron           |                %d                |",freeze_huron);
    printf("\n|    Erie            |                %d                |",freeze_erie);
    printf("\n|    Ontario         |                %d                |",freeze_ont);
    printf("\n|    St. Clair       |                %d                |",freeze_stclr);
    printf("\n--------------------------------------------------------\n");

//Part 9 printout statements
    printf("\n----------PART 9---------- \n\n");
    printf("---------------------------------------------------------------------------------------------\n");
    printf("|    Lake Name    |    Temperature Average for 2018    |    Temperature Average for 2019    |\n");
    printf("---------------------------------------------------------------------------------------------\n");
    printf("|    Superior     |               %0.2lf                 |                %0.2lf                |",_temp_avg_sup,temp_avg_sup);
    printf("\n|    Michigan     |               %0.2lf                 |                %0.2lf                |",_temp_avg_mich,temp_avg_mich);
    printf("\n|    Huron        |               %0.2lf                 |                %0.2lf                |",_temp_avg_huron,temp_avg_huron);
    printf("\n|    Erie         |               %0.2lf                |                %0.2lf               |",_temp_avg_erie,temp_avg_erie);
    printf("\n|    Ontario      |               %0.2lf                |                %0.2lf                |",_temp_avg_ont,temp_avg_ont);
    printf("\n|    St. Clair    |               %0.2lf                |                %0.2lf               |",_temp_avg_stclr,temp_avg_stclr);
    printf("\n---------------------------------------------------------------------------------------------\n\n");

    return 0;
}


//Part 3 functions
    //Lake Superior
        //Smallest value
double fsup_s(double sup[], double size, double *smallest)
{
     int i,value;
     *smallest = sup[0];
     value = 0;
    for (i=0; i<size; ++i)
       if (sup[i] < *smallest)
       {
          *smallest = sup[i];
          value = i;
       }
    return (value);
}
        //largest value
double fsup_l(double sup[], double size, double *largest)
{
     int i,value;
     *largest = sup[0];
     value = 0;
    for (i=0; i<size; ++i)
       if (sup[i] > *largest)
       {
          *largest = sup[i];
          value = i;
       }
    return (value);
}

    //Lake Michigan
        //Smallest value
double fmich_s(double mich[], double size, double *smallest)
{
     int i,value;
     *smallest = mich[0];
     value = 0;
    for (i=0; i<size; ++i)
       if (mich[i] < *smallest)
       {
          *smallest = mich[i];
          value = i;
       }
    return (value);
}
        //largest value
double fmich_l(double mich[], double size, double *largest)
{
     int i,value;
     *largest = mich[0];
     value = 0;
    for (i=0; i<size; ++i)
       if (mich[i] > *largest)
       {
          *largest = mich[i];
          value = i;
       }
    return (value);
}

    //Lake Huron
        //Smallest value
double fhuron_s(double huron[], double size, double *smallest)
{
     int i,value;
     *smallest = huron[0];
     value = 0;
    for (i=0; i<size; ++i)
       if (huron[i] < *smallest)
       {
          *smallest = huron[i];
          value = i;
       }
    return (value);
}
        //largest value
double fhuron_l(double huron[], double size, double *largest)
{
     int i,value;
     *largest = huron[0];
     value = 0;
    for (i=0; i<size; ++i)
       if (huron[i] > *largest)
       {
          *largest = huron[i];
          value = i;
       }
    return (value);
}

    //Lake Erie
        //Smallest value
double ferie_s(double erie[], double size, double *smallest)
{
     int i,value;
     *smallest = erie[0];
     value = 0;
    for (i=0; i<size; ++i)
       if (erie[i] < *smallest)
       {
          *smallest = erie[i];
          value = i;
       }
    return (value);
}
        //largest value
double ferie_l(double erie[], double size, double *largest)
{
     int i,value;
     *largest = erie[0];
     value = 0;
    for (i=0; i<size; ++i)
       if (erie[i] > *largest)
       {
          *largest = erie[i];
          value = i;
       }
    return (value);
}

    //Lake Ontario
        //Smallest value
double font_s(double ont[], double size, double *smallest)
{
     int i,value;
     *smallest = ont[0];
     value = 0;
    for (i=0; i<size; ++i)
       if (ont[i] < *smallest)
       {
          *smallest = ont[i];
          value = i;
       }
    return (value);
}
        //largest value
double font_l(double ont[], double size, double *largest)
{
     int i,value;
     *largest = ont[0];
     value = 0;
    for (i=0; i<size; ++i)
       if (ont[i] > *largest)
       {
          *largest = ont[i];
          value = i;
       }
    return (value);
}

    //Lake St. Clair
        //Smallest value
double fstclr_s(double stclr[], double size, double *smallest)
{
     int i,value;
     *smallest = stclr[0];
     value = 0;
    for (i=0; i<size; ++i)
       if (stclr[i] < *smallest)
       {
          *smallest = stclr[i];
          value = i;
       }
    return (value);
}
        //largest value
double fstclr_l(double stclr[], double size, double *largest)
{
     int i,value;
     *largest = stclr[0];
     value = 0;
    for (i=0; i<size; ++i)
       if (stclr[i] > *largest)
       {
          *largest = stclr[i];
          value = i;
       }
    return (value);
}
//Part 4 functions
        //Smallest value(temperature overall)
double fsmall_temp_overall(double small_temp_overall[], double size, double *smallest)
{
     int i,value;
     *smallest = small_temp_overall[0];
     value = 0;
    for (i=0; i<size; ++i)
       if (small_temp_overall[i] < *smallest)
       {
          *smallest = small_temp_overall[i];
          value = i;
       }
    return (value);
}
        //largest value(temperature overall)
double flarge_temp_overall(double large_temp_overall[], double size, double *largest)
{
     int i,value;
     *largest = large_temp_overall[0];
     value = 0;
    for (i=0; i<size; ++i)
       if (large_temp_overall[i] > *largest)
       {
          *largest = large_temp_overall[i];
          value = i;
       }
    return (value);
}
