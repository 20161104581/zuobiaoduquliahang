//
//  main.c
//  zuobiaoduquliahang
//
//  Created by 20161104581 on 17/6/26.
//  Copyright © 2017年 20161104581. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    // insert code here...
    
    FILE *fp2;
    FILE *fp3;
    char s1[50];
    char s2[50];
    char lat[10];//纬度//
    char lng[10];//经度//
    char day[10];//日期//
    char time[10];//时间//
    char high[10];
    char su[9];
    char sl[3];
    int i,b,t1,t2,j,s;
    fp2=fopen("//Users//c20161104581//Desktop//zuobiaoduquliahang//GPS1705101.log","r+");
    fp3=fopen("//Users//c20161104581//Desktop//zuobiaoduquliahang//GPS.CSV","w+");
    if(fp2==NULL)
        printf("打开文件错误");
    else
        fprintf(fp3,"日期  ,时间  ,纬度  ,经度  ,速率 , 卫星 ,海拔  \n");
    while(!feof(fp2))
    {
      fscanf(fp2,"%s%s",s1,s2);
      //printf("%s\n%s\n",s1,s2);
      for(i=0;i<2;i++)
      {
        day[i]=s1[i+55];//riqi//
      }
            day[2]='\0';
            printf("%s年 ",day);
            fprintf(fp3,"%s年 ",day);
        for(i=0;i<2;i++)
        {
            day[i]=s1[i+53];
        }
            day[2]='\0';
        printf("%s月 ",day);
        fprintf(fp3,"%s月 ",day);
        for(i=0;i<2;i++)
        {
            day[i]=s1[i+51];
        }
            day[2]='\0';
        printf("%s日 ",day);
        fprintf(fp3,"%s日, ",day);
            for(i=0;i<2;i++)
            {
                time[i]=s1[i+7];
            }
            time[2]='\0';
            t1=(time[0]-'0')*10;
            t2=(time[1]-'0')*1+t1+8;
            printf("%d时 ",t2);
            fprintf(fp3,"%d时",t2);
            for(i=0;i<2;i++)
            {
                time[i]=s1[i+9];
            }
            time[2]='\0';
            printf("%s分 ",time);
            fprintf(fp3,"%s分 ",time);
            for(i=0;i<2;i++)
            {
                time[i]=s1[i+11];
            }
            time[2]='\0';
            printf("%s秒 ",time);
            fprintf(fp3,"%s秒, ",time);
            for(b=0;b<8;b++)
            {
                lat[b]=s1[b+16];
            }
                lat[8]='\0';
            printf("%s,",lat);
            fprintf(fp3,"%s,",lat);
        
        
            for(j=0;j<3;j++)
            {
                lng[j]=s1[j+27];
            }
            lng[3]='\0';
            printf("%s.",lng);
            fprintf(fp3,"%s.",lng);
            for(j=0;j<6;j++)
            {
                lng[j]=s1[j+30];
            }
            lng[6]='\0';
            printf("%s, ",lng);
            fprintf(fp3,"%s, ",lng);
        for(s=0;s<5;s++)
        {
            su[s]=s1[s+39];
        }
        su[5]='\0';
        printf("%s,",su);
        fprintf(fp3,"%s,",su);
        for(s=0;s<2;s++)
        {
            sl[s]=s2[s+39];
        }
        sl[2]='\0';
        printf("%s,",sl);
        fprintf(fp3,"%s,",sl);
            for(s=0;s<4;s++)
            {
                high[s]=s2[s+43];
            }
            high[4]='\0';
            printf("海拔:%sm\n",high);
            fprintf(fp3,"%sm\n  ",high);
        
        }
        fclose(fp2);
        fclose(fp3);
    return 0;
}
