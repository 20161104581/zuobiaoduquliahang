//
//  main.c
//  zuobiaoduquliahang
//
//  Created by 20161104581 on 17/6/26.
//  Copyright © 2017年 20161104581. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    FILE *fp;
    char s1[50];
    char s2[50];
    char lat[10];
    char lng[10];
    //char alt[10];
    //char time[10];
    int i,y,b;
    fp=fopen("//Users//c20161104581//Desktop//坐标//GPS170510.log","r+");
    fscanf(fp,"%s%s",s1,s2);
    printf("输出:%s\n%s\n",s1,s2);
    for(i=0;i<8;i++)
        lat[i]=s1[i+16];
    lat[8]='\0';
    printf("纬度:%s\n",lat);
    for(y=0;y<9;y++)
        lng[y]=s1[y+27];
    lng[9]='\0';
    printf("经度:%s\n",lng);
    for(b=0;

    fclose(fp);
    
    return 0;
}
