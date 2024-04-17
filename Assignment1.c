// #include<stdio.h>

// int main()
// {
//     int R;
//     printf("Enter Radius:");
//     scanf("%d",&R);
//     int A = 3.14*(R*R);
//     printf("Area of Circle is %d",A);
//     return 0;
// }

// int main()
// {
//     int c= printf("Hello");
//     printf("%d",c);
//     return 0;
// }

// int main()
// {
//     printf("\"MySirG\"");
//     return 0;
// }

// int main()
// {
//     int name[20];
//     printf("enter name:");
//     scanf("%s",name);
//     printf("Hello,\"%s\"",name);
//     return 0;
// }

// int main()
// {
//     printf("\"%%d\"");   
//     return 0;
// }

// int main()
// {
//     printf("\"\\n\"");   
//     return 0;
// }

// int main()
// {
//     printf("\"\\\\\"");   
//     return 0;
// }

// int main()
// {
//     int DD,MM,YYYY;
//     printf("DD/MM/YYYY: ");
//     scanf("%d %d %d",&DD,&MM,&YYYY);
//     printf("Day-%d, Month-%d, Year-%d",DD,MM,YYYY);  
//     return 0;
// }

// int main()
// {
//     int HH,MM;
//     printf("HH/MM: ");
//     scanf("%d %d",&HH,&MM);
//     printf("%d hour and %d minute",HH,MM);  
//     return 0;
// }

// int main()
// {
//     int x = printf("ineuron");
//      printf("%d",x);
//     return 0;

// }

#include <stdio.h>
// #include <string.h>

int main() 
{
    char ch;
    char s[100];
    char sen[100];
    
    
    scanf("%c", &ch);  
    scanf("%s",s);  
    scanf(" %[^\n]s",sen);
    
    printf("%c\n%s\n%s", ch, s, sen);
    return 0;
}
