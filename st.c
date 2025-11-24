#include <stdio.h>
#include <string.h>

struct user
{
    char name[100];
    char phnno[20];
    char email[100];
};

int main()
{
    int choice, i, j, count = 0, found;
    char sname[100];
    struct user u[10];

    strcpy(u[0].name, "Sk");
    strcpy(u[0].phnno, "78568798675");
    strcpy(u[0].email, "sk@gmail.com");

    strcpy(u[1].name, "raj");
    strcpy(u[1].phnno, "9876543210");
    strcpy(u[1].email, "raj@gmail.com");

    while (1)
    {
        printf("\n1: Display\n2: Search\n3: Delete\n4: Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            if(count == 0)
            {
                printf("No contacts available!\n");
            }
            else
            {
                    printf("\nName : %s", u[count].name);
                    printf("\nPhone: %s", u[count].phnno);
                    printf("\nEmail: %s\n", u[count].email);
                    count++;
                
            }
        }

        else if (choice == 2)
        {
            found = 0;
            printf("Enter name to search: ");
            scanf("%s", &sname);

            for (i = 0; i < count; i++)
            {
                if (strcmp(u[i].name, sname) == 0)
                {
                    printf("\nContact Found:");
                    printf("\nName : %s", u[i].name);
                    printf("\nPhone: %s", u[i].phnno);
                    printf("\nEmail: %s\n", u[i].email);
                    found = 1;
                    break;
                }
            }
            if (!found)
            {
                printf("No contact found!\n");
            }
        }

        else if (choice == 3)
        {
            found = 0;
            printf("Enter name to delete: ");
            scanf("%s", &sname);

            for (i = 0; i < count; i++)
            {
                if (strcmp(u[i].name, sname) == 0)
                {
                    for (j = i; j < count - 1; j++)
                    {
                        u[j] = u[j + 1];
                    }
                    count--;
                    found = 1;
                    printf("Contact deleted successfully!\n");
                    break;
                }
            }

            if (!found)
            {
                printf("Contact not found!\n");
            }
        }

        else if (choice == 4)
        {
            printf("Exiting program...\n");
            break;
        }

        else
        {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}

