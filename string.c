<<<<<<< HEAD
+char *my_strcpy(char *t, char *s)
int main(void)
=======
const int main(void)
>>>>>>> 05f4524c7f28759819593654934e333b96d82f9c
12{
   int i;
   char *s[] = 
   {
      "Git tutorials",
      "Tutorials Point"
   };

   for (i = 0; i < 2; ++i)
      
   printf("string lenght of %s = %d\n", s[i], my_strlen(s[i]));

   return 0;
}