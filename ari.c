#include <ctype.h>
//#include <cs50.h>

char* ari (char* str)
{
  int noc = 0, now = 0, nos = 0, score;
  int len = strlen (str);
  for (int i = 0; i < len; i++)
    {
      if (isalnum (str[i]))
	noc++;
      if (str[i] == ' ')
	now++;
      if (str[i] == '.' || str[i] == '?' || str[i] == '!')
	nos++;
    }
  //printf("%d %d %d\n",noc,now,nos);
  float ari_value = 4.71 * noc / now + 0.5 * now / nos - 21.43;

  //printf("%f\n",ari_value);

  if ((int) ari_value < ari_value)
    score = (int) ari_value + 1;
  else if ((int) ari_value == ari_value)
    score = (int) ari_value;
  //score = ceil(ari_value);

  char* grade_level[] =
    { "Kindergarten", "First/Second Grade", "Third Grade", "Fourth Grade",
"Fifth Grade", "Sixth Grade", "Seventh Grade", "Eighth Grade", "Ninth Grade", "Tenth Grade",
"Eleventh Grade", "Twelfth Grade", "College student", "Professor" };

  //printf("%s\n",grade_level[score-1]);
  return grade_level[score - 1];
}
