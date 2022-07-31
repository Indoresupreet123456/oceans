class base
{
   public:
      int n1;
      void show()
         {
             cout<<”\nn1 = “<<"base";
         }
};

class derive: public base
{

     public:
       int n2;
       void show()
          { 
              cout<<”\nn1 = “<<"Derived";
             

          }
};

int main()

{
    
   derive d;
   base *bptr; //base pointer
   bptr=&b; //address of base class
   d.show();
   return 0;
  }