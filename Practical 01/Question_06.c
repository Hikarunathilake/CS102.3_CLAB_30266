int main() {
    char name[20];
    int byear, cyear, age;
    printf("Enter the student's name: ");
    scanf("%s", name);
    printf("Enter the student's birth year: ");
    scanf("%d", &byear);
    cyear = 2023;
    age = cyear - byear;
    printf("Student Name: %s\n", name);
    printf("Age: %d\n", age);
}
