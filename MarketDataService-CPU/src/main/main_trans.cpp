#include <cstring>
#include <string.h>
int tidJudge(char** buf,int n)
{
  int i=0;
  while(buf[2][i]!='T' || buf[2][i+1]!='i' || buf[2][i+2]!='d' || buf[2][i+3]!='\[' || buf[2][i+4]!='0' || buf[2][i+5]!='X' || buf[2][i+6]!='0' || buf[2][i+7]!='0' || buf[2][i+8]!='0' || buf[2][i+9]!='0') i++;
  if (buf[2][i+10]=='' && buf[2][i+11]=='8' && buf[2][i+12]=='0' && buf[2][i+13]=='4') return 1;
  return 0;
}
void infoPrint(char** buf,int n)
{
  int i;
  for(i=0;i<n;i++)
  {
    DEBUG()<<buf[i];
  }
  return;
}
void main()
{
  FILE* in=fopen("market.txt","r");
  char* buf[1000];
  int i=0;
  for(i=0;i<1000;i++)
  {
    buf=malloc(sizeof(char),1000);
  }
  char* flag;
  char* s="FLOW ID=\[";
  while((flag=fgets(buf[i],1000,in)!=null)
  {
    if(strmp(buf[i],s,9)==0)
    {
      if (tidJudge(buf,i))
      {
        infoPrint(buf,i);
      }
      i=0;
    } else
    {
      i++;
    }
  }
