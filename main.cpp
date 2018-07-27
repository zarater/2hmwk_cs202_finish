#include "node.h"
#include<iostream>
#include<stdio.h>
#include<cstring>

int main()
{
	char inputAct[20],yesNo[4],temp[20];
	int numAct,flag=1,flag2=1,activitesPerfomed[3];
	cout << "Hello! Welcome to the world of activites" << endl;
	cout << "The following activities are available:\n1)Athletics\n2)Sight Seeing\n3)Music\n";
	cout << "NOTE: All inputs are case sensitive!" << endl;
	cout << "Which activity would you like to do? ";	
	cin.getline(inputAct,20);
	activity_manager *SightSeeingAct,*altheticAct,*musicAct;
	Node *head = NULL;

		if(strcmp("Athletics",inputAct) == 0)
		{
			cout << "\nThe following activities are available in Athletics type" << endl;
			cout << "1) Wind surfing\n2)Jet sking\n3)Hiking\n4)Kayaking" << endl; 
			cout << "These activites require a few skills" << endl;
			cout << "You would have to drive to the location and possess the respective equipment for the activites\n";
			cout << "Would you like to continue for this activity, enter Yes else No" << endl;
			cin >> yesNo;

			if(strcmp(yesNo,"Yes")==0)
			{
				altheticAct = new athletic();
				cout << "Out of those 4 activites, how many would you like to do? ";
				cin >> numAct;
				for(int i = 0 ; i < numAct ; i++)
				{
					cout << "Enter name of activity " << (i+1) << ": ";
					char ch;
					strcpy(temp,"");
					if(flag)
					{
						while(cin.get(ch) && ch != '\n');
						flag = 0;
					}
					cin.getline(temp,20);
					altheticAct->addActivity(temp);
				}

				addNode(&head,altheticAct); // adding Node to CLL
				activitesPerfomed[0] = 1;
				
				cout << "How many activites would you to like to mark as done? ";
				cin >> numAct;
				for(int i = 0 ; i < numAct ; i++)
				{
					cout << "Enter name for activity " << (i+1) << ": ";
					strcpy(temp,"");
					char ch;
					if(flag2)
					{
						while(cin.get(ch) && ch != '\n');
						flag2 = 0;
					}
					cin.getline(temp,20);
					altheticAct->markActivity(temp);
				} 
			}
		}
		else if(strcmp("Sight Seeing",inputAct) == 0)
		{
			cout << "\nThe following places are available in Sight Seeing type" << endl;
			cout << "1)Mount Rushmore\n2)Mesa Verde\n3)Carlsbad Caverns\n4)Kilauea\n5)Statue of Liberty" << endl; 
			cout << "These activites require a few things" << endl;
			cout << "You would have to drive to the location and these places are open are at only specific hours\n";
			cout << "Would you like to continue for this activity, enter Yes else No" << endl;
			cin >> yesNo;

			if(strcmp(yesNo,"Yes")==0)
			{
				SightSeeingAct = new SightSeeing();
				addNode(&head,SightSeeingAct); // adding Node to CLL
		
				cout << "Out of those 5 places, how many would you like to visit?";
				cin >> numAct;
				for(int i = 0 ; i < numAct ; i++)
				{
					cout << "Enter name of place " << (i+1) << ": ";
					char ch;
					int j=0;
					strcpy(temp,"");
					if(flag)
					{
						while(cin.get(ch) && ch != '\n');
						flag = 0;
					}
					cin.getline(temp,20);
					SightSeeingAct->addActivity(temp);
				}

				addNode(&head,SightSeeingAct);
				activitesPerfomed[1] = 1;

				cout << "How many activites would you to like to mark as done? ";
				cin >> numAct;
				for(int i = 0 ; i < numAct ; i++)
				{
					cout << "Enter name for activity " << (i+1) << ": ";
					strcpy(temp,"");
					char ch;
					if(flag2)
					{
						while(cin.get(ch) && ch != '\n');
						flag2 = 0;
					}
					cin.getline(temp,20);
					SightSeeingAct->markActivity(temp);
				} 
			}
		}
		else if(strcmp("Music",inputAct) == 0)
		{
			cout << "\nThe following activities are available in Music" << endl;
			cout << "1)Key Board\n2)Singing\n3)Drums\n4)Flute" << endl; 
			cout << "These activites require a few skills" << endl;
			cout << "You would have to drive to the location and possess the respective equipment for the activites\n";
			cout << "Would you like to continue for this activity, enter Yes else No" << endl;
			cin >> yesNo;

			if(strcmp(yesNo,"Yes")==0)
			{
				musicAct = new music();
				cout << "Out of those 4 activites, how many would you like to do? ";
				cin >> numAct;
				for(int i = 0 ; i < numAct ; i++)
				{
					cout << "Enter name of activity " << (i+1) << ": ";
					char ch;
					strcpy(temp,"");
					if(flag)
					{
						while(cin.get(ch) && ch != '\n');
						flag = 0;
					}
					cin.getline(temp,20);
					musicAct->addActivity(temp);
				}

				addNode(&head,musicAct); // adding Node to CLL
				activitesPerfomed[2] = 1;
				
				cout << "How many activites would you to like to mark as done? ";
				cin >> numAct;
				for(int i = 0 ; i < numAct ; i++)
				{
					cout << "Enter name for activity " << (i+1) << ": ";
					strcpy(temp,"");
					char ch;
					if(flag2)
					{
						while(cin.get(ch) && ch != '\n');
						flag2 = 0;
					}
					cin.getline(temp,20);
					musicAct->markActivity(temp);
				} 
			}
		}
		if(activitesPerfomed[0] == 1)
		{
			cout << endl << "Printing all althetics activities of your choice " << endl;
			altheticAct->display();
		}	
		else if(activitesPerfomed[1] == 1)
		{
			cout << endl << "Printing all Sight Seeing places of your choice " << endl;
			SightSeeingAct->display();
		}
		else if(activitesPerfomed[2] == 1)
		{
			cout << endl << "Printing all Music activities of your choice " << endl;
			musicAct->display();
		}
		displayNode(&head);
		return 0;
}