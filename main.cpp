#include <iostream>

using namespace std;



int main()
{
    cout<<"\n\n\n\n\n\n\n\n\t\t\tWELCOME TO MY FIRST GAME"<<endl;
  char a='a',b='b',c='c';
  char d='d',e='e',f='f';
  char g='g',h='h',i='i';
  int k=1;
  for(k=1;k<=10;k++)
  {


  cout<<"\n\n\n\n"<<a;
  cout<<"\t"<<b;
  cout<<"\t"<<c;
  cout<<"\n\n"<<d;
  cout<<"\t"<<e;
  cout<<"\t"<<f;
  cout<<"\n\n"<<g;
  cout<<"\t"<<h;
  cout<<"\t"<<i;
  if((k==1)||(k==3)||(k==5)||(k==7)||(k==9))
  {
      cout<<"\n\n\nFIRST PLAYER'S TURN"<<endl;
  }
  if((k==2)||(k==4)||(k==6)||(k==8))
  {
      cout<<"\n\n\nSECOND PLAYER'S TURN"<<endl;
  }






   char z;
   cin>>z;
   if((k==1)||(k==3)||(k==5)||(k==7)||(k==9))
   {


   if(z==a)
   {
       a='x';
   }
    else if(z==b)
    {
        b='x';
    }else if(z==c)
    {
        c='x';
    }else if(z==d)
    {
        d='x';
    }else if(z==e)
    {
        e='x';
    }else if(z==f)
    {
        f='x';
    }else if(z==g)
    {
        g='x';
    }else if(z==h)
    {
        h='x';
    }else if(z==i)
    {
        i='x';
    }
   }

   if((k==2)||(k==4)||(k==6)||(k==8))
   {



      if(z==a)
   {
       a='o';
   }
    else if(z==b)
    {
        b='o';
    }else if(z==c)
    {
        c='o';
    }else if(z==d)
    {
        d='o';
    }else if(z==e)
    {
        e='o';
    }else if(z==f)
    {
        f='o';
    }else if(z==g)
    {
        g='o';
    }else if(z==h)
    {
        h='o';
    }else if(z==i)
    {
        i='o';
    }
   }

     if((k==5)||(k==6)||(k==7)||(k==8)||(k==9))
     {
         if((a=='x')&&(b=='x')&&(c=='x'))
         {
             cout<<"\n\n\n\n\n\n\n\n\nWINNER IS FIRST PLAYER"<<endl;
             break;
         }else if((d=='x')&&(e=='x')&&(f=='x'))
         {
             cout<<"\n\n\n\n\n\n\n\n\nWINNER IS FIRST PLAYER"<<endl;
             break;
         }else if((g=='x')&&(h=='x')&&(i=='x'))
         {
             cout<<"\n\n\n\n\n\n\n\n\nWINNER IS FIRST PLAYER"<<endl;
             break;
         }else if((a=='x')&&(d=='x')&&(g=='x'))
         {
             cout<<"\n\n\n\n\n\n\n\n\nWINNER IS FIRST PLAYER"<<endl;
             break;
         }else if((b=='x')&&(e=='x')&&(h=='x'))
         {
             cout<<"\n\n\n\n\n\n\n\n\nWINNER IS FIRST PLAYER"<<endl;
             break;
         }else if((c=='x')&&(f=='x')&&(i=='x'))
         {
             cout<<"\n\n\n\n\n\n\n\n\nWINNER IS FIRST PLAYER"<<endl;
             break;
         }else if((a=='x')&&(e=='x')&&(i=='x'))
         {
             cout<<"\n\n\n\n\n\n\n\n\nWINNER IS FIRST PLAYER"<<endl;
             break;
         }else if((c=='x')&&(e=='x')&&(g=='x'))
         {
             cout<<"\n\n\n\n\n\n\n\n\nWINNER IS FIRST PLAYER"<<endl;
             break;
         }else if((b=='x')&&(e=='x')&&(h=='x'))
         {
             cout<<"\n\n\n\n\n\n\n\n\nWINNER IS FIRST PLAYER"<<endl;
             break;
         }else if((d=='x')&&(e=='x')&&(f=='x'))
         {
             cout<<"\n\n\n\n\n\n\n\n\nWINNER IS FIRST PLAYER"<<endl;
             break;
         }else if(k==9)
         {
             cout<<"\n\n\n\n\n\n\nMATCH DRAW"<<endl;
         }
     }


     if((k==5)||(k==6)||(k==7)||(k==8)||(k==9))
        {
         if((a=='o')&&(b=='o')&&(c=='o'))
         {
             cout<<"\n\n\n\n\n\n\n\n\nWINNER IS SECOND PLAYER"<<endl;
             break;
         }else if((d=='o')&&(e=='o')&&(f=='o'))
         {
             cout<<"\n\n\n\n\n\n\n\n\nWINNER IS SECOND PLAYER"<<endl;
             break;
         }else if((g=='o')&&(h=='o')&&(i=='o'))
         {
             cout<<"\n\n\n\n\n\n\n\n\nWINNER IS SECOND PLAYER"<<endl;
             break;
         }else if((a=='o')&&(d=='o')&&(g=='o'))
         {
             cout<<"\n\n\n\n\n\n\n\n\nWINNER IS SECOND PLAYER"<<endl;
             break;
         }else if((b=='o')&&(e=='o')&&(h=='o'))
         {
             cout<<"\n\n\n\n\n\n\n\n\nWINNER IS SECOND PLAYER"<<endl;
             break;
         }else if((c=='o')&&(f=='o')&&(i=='o'))
         {
             cout<<"\n\n\n\n\n\n\n\n\nWINNER IS SECOND PLAYER"<<endl;
             break;
         }else if((a=='o')&&(e=='o')&&(i=='o'))
         {
             cout<<"\n\n\n\n\n\n\n\n\nWINNER IS SECOND PLAYER"<<endl;
             break;
         }else if((c=='o')&&(e=='o')&&(g=='o'))
         {
             cout<<"\n\n\n\n\n\n\n\n\nWINNER IS SECOND PLAYER"<<endl;
             break;
         }else if((b=='o')&&(e=='o')&&(h=='o'))
         {
             cout<<"\n\n\n\n\n\n\n\n\nWINNER IS SECOND PLAYER"<<endl;
             break;
         }else if((d=='o')&&(e=='o')&&(f=='o'))
         {
             cout<<"\n\n\n\n\n\n\n\n\nWINNER IS SECOND PLAYER"<<endl;
             break;
         }
     }




  }




    return 0;
}
