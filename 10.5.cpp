#include<stdio.h>
#include<string.h>
typedef struct {
	char loginname[64];
	char password[64];
} account ;

typedef struct {
	char stdID[20];
	char nameSurname[25];
	account stdACC;
} hoststd;

hoststd cs[5] = {
				{"66-040626-2686-9","MR.A",{"user1", "passwd1"}},
				{"66-040626-2687-1","MR.B",{"user2", "passwd2"}},
				{"66-040626-2687-2","MR.C",{"user3", "passwd3"}},
				{"66-040626-2687-3","MR.D",{"user4", "passwd4"}},
				{"66-040626-2687-4","MR.E",{"user5", "passwd5"}}};
int checkLogin(hoststd *cs,char *pass,char *user); 
int main(){
	char pass[64],user[64];
	printf("User: ");scanf("%s",user);
	printf("Pass: ");scanf("%s",pass);
	if(checkLogin(cs,pass,user)){
		printf("Welcome\n");
	}
	else{
		printf("Incorrect login or password\n");
	}
	return 0;
}

int checkLogin(hoststd *cs,char *pass,char *user){
	for(int i=0;i<5;i++){
		if(strcmp(pass,cs[i].stdACC.password)==0&&strcmp(user,cs[i].stdACC.loginname)==0) return 1;
	}
	return 0;
}
