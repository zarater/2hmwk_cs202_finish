#include<cstdlib>
#include<cstring>
#include <iostream>

using namespace std;

class activity_manager
{
	protected:
		int *marked; // array to mark activities if done or not
		int *rating;
		int num;
		char **activities;
		
	public:
		activity_manager();
		activity_manager(const activity_manager&);
		virtual ~activity_manager();
		void display();
		void addActivity(char act[]);
		void markActivity(char act[]);
		void rateActivity(char act[],int i);
		void remove(char act[]);
		void remove_all();
};

class athletic: public activity_manager
{
	public:			
		~athletic();
};

class SightSeeing: public activity_manager
{
	public:
		~SightSeeing();
};

class music : public activity_manager
{
	public:
		 ~music();
};
