#include<stdio.h>
#define ukuran 5
int deque[ukuran]; // Corrected the name here
int f=-1, r=-1; // Declared f and r

// Function to add a value at the front
void insert_front(int x)
{
    if((f==0 && r==ukuran-1) || (f==r+1)) 
    { 
        printf("Overflow\n"); 
    } 
    else if((f==-1) && (r==-1)) 
    {
        f=r=0;
        deque[f]=x;
    }
    else if(f==0) 
    {
        f=ukuran-1;
        deque[f]=x;
    }
    else
    {
        f=f-1;
        deque[f]=x;
    }
}

// Function to add a value at the rear
void insert_rear(int x) 
{ 
    if((f==0 && r==ukuran-1) || (f==r+1)) 
    { 
        printf("Overflow\n"); 
    } 
    else if((f==-1) && (r==-1)) 
    { 
        r=0; 
        deque[r]=x; 
    } 
    else if(r==ukuran-1) 
    { 
        r=0; 
        deque[r]=x; 
    } 
    else 
    { 
        r++; 
        deque[r]=x; 
    } 
}

// Function to display all values in deque
void display() 
{ 
    if(f == -1) {
        printf("\nDeque kosong\n");
        return;
    }

    int i=f; 
    printf("\nElemen pada deque adalah: "); 
    while(i != r)
    {
        printf("%d ", deque[i]);
        i=(i+1)%ukuran;
    }
    printf("%d\n", deque[r]); // Corrected the function name here
}

// Function to retrieve the first value of deque
void getfront()
{
    if((f==-1) && (r==-1))
    {
        printf("Deque kosong\n");
    }
    else
    {
        printf("\nNilai dari elemen pada bagian depan adalah: %d\n", deque[f]);
    }
}

// Function to get the last value in the deque
void getrear() // Corrected the placement of the comment
{ 
    if((f==-1) && (r==-1)) 
    { 
        printf("Deque kosong\n"); 
    } 
    else 
    { 
        printf("\nNilai pada elemen belakang adalah %d\n", deque[r]); 
    } 
}

// Function to delete an element from the front
void delete_front()
{
    if(f == -1) // Corrected condition to check if deque is empty
    {
        printf("Deque kosong\n");
    }
    else if(f == r)
    {
        printf("\nElemen yang dihapus adalah: %d\n", deque[f]);
        f = -1;
        r = -1;
    }
    else
    {
        printf("\nElemen yang dihapus adalah: %d\n", deque[f]);
        f = (f + 1) % ukuran; // Correctly moving `f` to the next element
    }
}

// Function to delete an element from the rear
void delete_rear()
{
    if(f == -1) // Corrected condition to check if deque is empty
    {
        printf("Deque kosong\n");
    }
    else if(f == r)
    {
        printf("\nElemen yang dihapus adalah %d\n", deque[r]);
        f = -1;
        r = -1;
    }
    else
    {
        printf("\nElemen yang dihapus adalah: %d\n", deque[r]);
        r = (r - 1 + ukuran) % ukuran; // Correctly moving `r` back
    }
}

int main() 
{ 
    insert_front(20); 
    insert_front(10); 
    insert_rear(30); 
    insert_rear(50); 
    insert_rear(80); 
    display(); // Displaying values in the deque
    getfront(); // Getting the value at the front
    getrear();  // Getting the value at the rear
    delete_front(); 
    delete_rear(); 
    display(); // Displaying values after deletions
    return 0; 
}
