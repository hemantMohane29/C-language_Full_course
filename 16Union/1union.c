// union -> use for sigle value access



#include<stdio.h>
int main(){
union student
{
    int age;
    int height;
    int weight;
    int Roll_no;

};

union student hemant;
hemant.age = 40;
// hemant.height = 187;
// hemant.weight = 75;

printf("%d\n",hemant.age);
// printf("%d\n",hemant.height);
// printf("%d",hemant.weight);

return 0;
}