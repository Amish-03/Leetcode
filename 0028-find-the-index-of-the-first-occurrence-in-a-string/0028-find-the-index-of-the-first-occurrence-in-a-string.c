int strStr(char* haystack, char* needle) {
int n = strlen(needle);
int i;
int h=strlen(haystack);
for (i=0; i<=h-n ; i++)
{
  char temp[n+1];
  int j;
  int k=0;
  for(j = i; j<i+n; j++)
  {
    
    temp[k] = haystack[j];
    k++;
  }
  temp[k] = '\0';

  
  if (strcmp(needle, temp)==0)
  return i;
}
return -1;
}