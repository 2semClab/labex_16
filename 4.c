#include<stdio.h>
int main(){
    typedef struct employee{
        char name[1000];
        char gender;
        char designation[1000];
        char department[1000];
        int basic_pay;
        int gross_pay;
    } data;


printf("Enter number of employees :");
int n; scanf("%d",&n);
data info[n];
for(int i =0;i<n;i++){
    printf("Enter Employee %d data :\n",i+1);
    printf("Enter employee name : ");
    scanf(" %[^\n]s",info[i].name);
    printf("Enter gender : ");
    scanf(" %c",&info[i].gender);
    printf("Enter designation : ");
    scanf(" %[^\n]s",&info[i].designation);
    printf("Enter department : ");
    scanf(" %[^\n]s",&info[i].department);
    printf("Enter basic pay : ");
    scanf("%d",&info[i].basic_pay);
    info[i].gross_pay = 2 * info[i].basic_pay;
}
printf("\n\nName Gender Designation Department Basic Pay Gross Pay\n\n");

for(int i =0;i<n;i++){
    printf("%s %c %s %s %d %d\n",info[i].name,info[i].gender,info[i].designation,info[i].department,info[i].basic_pay,info[i].gross_pay);
}
return 0;
}