#include "Inheritance.h"

activity_manager::activity_manager () 
{
  
num = 0;
  
 
marked = (int *) malloc (5 * sizeof (int));
  
for (int i = 0; i < 5; i++)
    marked[i] = 0;
  
 
rating = (int *) malloc (5 * sizeof (int));
  
for (int i = 0; i < 5; i++)
    rating[i] = 0;
  
 
activities = (char **) malloc (5 * sizeof (char *));
  
for (int i = 0; i < 5; i++)
    
activities[i] = (char *) malloc (sizeof (char));
} 
 
activity_manager::~activity_manager()
{

}

void activity_manager::display () 
{
  
for (int i = 0; i < num; i++)
{
	cout << "Activity " << (i + 1) << ": " << activities[i];
	if(marked[i] == 1)
		cout << "\t This activity is marked done\tRating given: " <<rating[i];
	cout <<  endl;	
}

} 

void activity_manager::addActivity (char act[]) 
{
  
strcpy (activities[num], act);
  
num++;
} 
void

activity_manager::markActivity (char act[]) 
{
  int flag = 1;
	for (int i = 0; i < num; i++)
	{
      	if (strcmp (act, activities[i]) == 0)	
		{
			marked[i] = 1;
			flag = 0;
			rateActivity(act,i);
		}	
    }
    if(flag)
		cout << "Activity " << act << " not found" << endl;
}

void
activity_manager::rateActivity (char act[],int i) 
{
  
cout << "Enter rating(0-9): ";
	  
cin >> rating[i];
	  
}

 
void
activity_manager::remove (char act[]) 
{
  
for (int i = 0; i < num; i++)
    
    {
      
if (strcmp (act, activities[i]) == 0)
	
	{
	  
strcpy (activities[i], "");
	  
cout << "Activity " << act << " deleted" << endl;
	  
return;
	
}
    
}
  
cout << "Activity " << act << " not found." << endl;
}

 
void
activity_manager::remove_all () 
{
  
for (int i = 0; i < num; i++)
    
    {
      
strcpy (activities[i], "");
} 
} 
 
athletic::~athletic () 
{
  
for (int i = 0; i < 5; i++)
    
free (activities[i]);
  
 
free (activities);
  
free (marked);
  
free (rating);
} 
 
SightSeeing::~SightSeeing () 
{
  
for (int i = 0; i < 5; i++)
    
free (activities[i]);
  
 
free (activities);
  
free (marked);

free(rating);
} 

music::~music()
{
for (int i = 0; i < 5; i++)
free (activities[i]);
  
free (activities);
  
free (marked);

free(rating);
}
