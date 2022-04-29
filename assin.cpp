#include <iostream>
using namespace std;
class csh_round{
	protected:
		int radius, height;
		public:
			void values(int r, int h)
			{
				radius=r;
				height=h;
				
				
			}
};
class result{
	public:
		void res(float k){
			cout<<k<<endl;
		}
};
class csh_circle:public csh_round, public result{
	public:
		int area(){
			return(3*(radius*radius));
		}
};
class csh_sphere: public csh_round{
	public:
		float volume(){
			return((4/2)*3*(radius*radius*radius)*(height));
		}
};
int main()
{
	csh_circle one;
	one.values(2,4);
	one.res(one.area());
	cout<<endl;
	
	
	return 0;
}
