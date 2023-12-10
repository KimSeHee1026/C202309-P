struct userInfo {
    char name[30];
    char file_name[30];
};

void initializeUser(struct userInfo* user);
struct userInfo* getUserInfoArray(int num_people);

