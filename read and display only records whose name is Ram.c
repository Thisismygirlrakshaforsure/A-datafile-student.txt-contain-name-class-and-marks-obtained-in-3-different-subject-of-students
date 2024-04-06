#include 
int main()
{
    char n[10];
    int c, e, ne, m;
    FILE *fptr;
    fptr = fopen("student.txt","r");
    while(fscanf(fptr,"%s %d %d %d %d",n,&c,&e,&ne,&m) != EOF)
    {
       strlwr(n);    
       if (strcmp(n,”ram”) == 0)
       {
        printf("%s %d  %d  %d  %d", n, c, e, ne, m);    
       }
    }
    fclose(fptr);
    return 0;
}
