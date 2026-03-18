#include <iostream> 
#include "SchoolGirl.h" 
#include "SchoolBoy.h"
#include "Teacher.h"
#include "Admin.h"
using namespace std; 

void printAllPupils(pupil* pupils[], int pupilsNo);
void printAllWorkers(worker* workers[], int workersNo);

int main()
{ 
    SchoolGirl g1("Nowak Agnieszka", 17, "3A"); 
    g1.setNote(POLSKI,3.5); 
    g1.setNote(INFORMATYKA, 4.5);
    g1.setNote(CHEMIA, 3.5); 
    g1.setNote(FIZYKA, 3.5);
    g1.setNote(NIEMIECKI, 3.0);


    SchoolGirl g2("Sobota Paulina", 18, "4B");
    g2.setNote(POLSKI, 3.5);
    g2.setNote(MATEMATYKA, 4.5);
    g2.setNote(CHEMIA, 3.5);
    g2.setNote(ANGIELSKI, 3.5);


    SchoolGirl g3("Kozub Maria", 17, "3A");
    g3.setNote(POLSKI, 3.5);
    g3.setNote(MATEMATYKA, 4.5);
    g3.setNote(INFORMATYKA, 3.5);
    g3.setNote(NIEMIECKI, 3.0); 


    SchoolBoy b1("Kowalski Marcin",17,"3B");
    b1.setNote(POLSKI, 3.5);
    b1.setNote(MATEMATYKA, 4.5);
    b1.setNote(CHEMIA, 3.5);


    SchoolBoy b2("Pawelek Marcin", 18, "4B");
    b2.setNote(POLSKI, 3.5);
    b2.setNote(MATEMATYKA, 4.5);
    b2.setNote(ANGIELSKI, 4);


    pupil* pupils[] ={&g1, &g2, &g3, &b1, &b2}; 
    printAllPupils(pupils,sizeof(pupils)/sizeof(pupil*));
    cout<<endl;

///////////////////////////////////////////////////////////////////////

    Teacher t1("Tomasz Swic", 30, 4200, 12, POLONISTA);
    Teacher t2("Roszak Malgorzata", 57, 1500, 25, CHEMIK, "3B");
    Teacher t3("Staskowska Danuta", 43, 1500, 5, MATEMATYK, "3A");
    Teacher t4("Baranik Kacper", 8, 1500, 7, INFORMATYK);
    Teacher t5("Kozlowski Mateusz", 35, 1500, 14, FIZYK);

    Admin a1("Helinski Mariusz", 23, 1900, 20, YOUNG);
    Admin a2("Walenski Kondrad", 34, 2500, 20, OLD);


    worker* workers[] ={&t1, &t2, &t3, &t4, &t5, &a1, &a2}; 
    printAllWorkers(workers,sizeof(workers)/sizeof(worker*));

    return 0;
}

void printAllPupils(pupil* pupils[], int pupilsNo)
{
    for(int i = 0;i < pupilsNo;i++)
    { 
        pupils[i]->calcAve();
        pupils[i]->printPupil(); 
        cout<<endl;
    }
}

void printAllWorkers(worker* workers[], int workersNo)
{
    for(int j=0; j <= workersNo/2; j++)
    { 
        int max = j;
        int min = j;
        for(int i = j; i < workersNo-j; i++)
        {
            double temp = workers[i]->getSalary();

            if( temp > workers[max]->getSalary() )
                max = i;
            else if( temp < workers[min]->getSalary() )
                min = i;
        }
        worker* temp = workers[j];
        workers[j] = workers[max];
        workers[max] = temp;
        if( min == j )
            min = max;

        temp = workers[workersNo-j-1];
        workers[workersNo-j-1] = workers[min];
        workers[min] = temp;
    }
    for(int i = 0; i < workersNo; i++)
    { 
        workers[i]->printWorker(); 
    }
}