#include "types.h"
#include "stat.h"
#include "user.h"
//ADITH THANISERIKARAN
//at6115
//OS ASSIGNMENT 1
//UNIQ IMPLEMENTATION
char pb[1024],cb[1024],pb1[1024],cb1[1024];
int c,ff;

int 
main(int argc, char *argv[]) {
    

    if(argc==1)
    {
      int f1=0;

      int i=0,l=1;
      char ch[1];
      //STD IO USING CAT IT READS FROM 0 FILE DESCRIPTOR 
      

      while(read(f1,ch,sizeof(ch)))
      {
       if(ch[0]!='\n')
       {cb[i]=ch[0];
        i++;}
        else
        if(ch[0]=='\n')
        {
          if(l==1){
          cb[i]='\0';
          strcpy(pb,cb);
          i=0;
          l++;
           printf(1,"%s",cb);
           printf(1,"\n");
          }
          else
          {
             cb[i]='\0';
             if(strcmp(cb,pb)!=0)
             {
             
              printf(1,"%s",cb);
               printf(1,"\n");
             }
          strcpy(pb,cb);
          i=0;
          

          }





          
        }
        
        
      }
      close(f1);
    }
    else
    if(argc==2)
    {

      //NORMAL IMPLEMENTATION OF UNIQ 
      int f3;
      f3=open(argv[1],0);

      if(f3<0)
      {
        printf(2,"ERROR IN FILE DESCRIPTOR");
        exit();
      }

      int i=0,l=1;
      char ch[1];
      

      while(read(f3,ch,sizeof(ch)))
      {
       if(ch[0]!='\n')
       {cb[i]=ch[0];
        i++;}
        else
        if(ch[0]=='\n')
        {
          if(l==1){
          cb[i]='\0';
          strcpy(pb,cb);
          i=0;
          l++;
           printf(1,"%s",cb);
           printf(1,"\n");
          }
          else
          {
             cb[i]='\0';
             if(strcmp(cb,pb)!=0)
             {
             
              printf(1,"%s",cb);
               printf(1,"\n");
             }
          strcpy(pb,cb);
          i=0;
          

          }





          
        }
        
        
      }

      close(f3);
    }
    else
    if(argc==3)
    {
      if(strcmp(argv[1],"-d")==0)
      {
        //ONLY PRINTING DUPLICATES


        int f100=open(argv[2],0);
       

      int i=0,l=1,c;
      char ch[1];
      

      while(read(f100,ch,sizeof(ch)))
      {


       if(ch[0]!='\n')
       {cb[i]=ch[0];
        i++;}
        else
        if(ch[0]=='\n')
        {
          if(l==1){
          cb[i]='\0';
          strcpy(pb,cb);
          i=0;
          l++;
          c=1;
           
          }
          else
          {
             cb[i]='\0';
             if(strcmp(cb,pb)!=0)
             {
             
              
               c=1;
             }
             else
             {
              c++;
             }

             if(c==2)
             {printf(1,"%s",pb);
              printf(1,"\n");}

          strcpy(pb,cb);
          i=0;
          

          }





          
        }
        
        
      }
      close(f100);


        

      }
     else
      if(strcmp(argv[1],"-c")==0)
      {
        //COUNTING AND PREFIXING
         int f6=open(argv[2],0);
      

      int i=0,l=1;
      char ch[1];
      

      while(read(f6,ch,sizeof(ch)))
      {


       if(ch[0]!='\n')
       {cb[i]=ch[0];
        i++;}
        else
        if(ch[0]=='\n')
        {
          if(l==1){
          cb[i]='\0';
          strcpy(pb,cb);
          i=0;
          l++;
          c=1;
           
          }
          else
          {
             cb[i]='\0';
             if(strcmp(cb,pb)!=0)
             {

              printf(1,"%d ",c);
              printf(1,"%s\n",pb);
              
             
              
               c=1;
             }
             else
             {
              c++;
             }

            

          strcpy(pb,cb);
          i=0;
          

          }





          
        }
        
        
      }

      if(c==1)
             {

              printf(1,"%d ",c);
              printf(1,"%s\n",pb);
              
             
              
               
             }
      close(f6);


        

      }
      else
      if(strcmp(argv[1],"-i")==0)
      {
        //THIS IS IGNORING THE CASE
        int f900;
      f900=open(argv[2],0);

    

      int i=0,l=1,oo,flag;
      char ch[1];
      

      while(read(f900,ch,sizeof(ch)))
      {
       if(ch[0]!='\n')
       {cb[i]=ch[0];
        i++;}
        else
        if(ch[0]=='\n')
        {
          if(l==1){
          cb[i]='\0';
          strcpy(pb,cb);
          i=0;
          l++;
           printf(1,"%s",cb);
           printf(1,"\n");
          }
          else
          {
             cb[i]='\0';
             oo=0;
             flag=0;
             

             while(cb[oo]!='\0'||pb[oo]!='\0')
             {
              if(cb[oo]!=pb[oo])
              {
                
                if(((cb[oo]>=65&&cb[oo]<=90)||(cb[oo]>=97&&cb[oo]<=122))&&((pb[oo]>=65&&pb[oo]<=90)||(pb[oo]>=97&&pb[oo]<=122)))
                {
                 
                   if((cb[oo]-pb[oo])==32||(cb[oo]-pb[oo])==-32)
                   flag=0;
                  else
                 {flag=1;
                   break;}



                }
                else
                {flag=1;
                break;}
              }
              oo++;

             }

             if(flag==1)
             {
             
              printf(1,"%s",cb);
               printf(1,"\n");
               flag=0;
             }
          strcpy(pb,cb);
          i=0;
          

          }





          
        }
        
        
      }

      close(f900);

       

      }

      
    }
    else
    if(argc==4)
    {
      if((strcmp(argv[1],"-c")==0&&strcmp(argv[2],"-i")==0)||(strcmp(argv[1],"-i")==0&&strcmp(argv[2],"-c")==0))
      {
        //COUNTS AND PREFIXES IGNORING THE CASE
         int f88=open(argv[3],0);
      

      int i=0,l=1,oo;
      char ch[1];
      

      while(read(f88,ch,sizeof(ch)))
      {


       if(ch[0]!='\n')
       {cb[i]=ch[0];
        i++;}
        else
        if(ch[0]=='\n')
        {
          if(l==1){
          cb[i]='\0';
          strcpy(pb,cb);
          i=0;
          l++;
          c=1;
           
          }
          else
          {
             cb[i]='\0';
              oo=0;
             ff=0;
             

             while(cb[oo]!='\0'||pb[oo]!='\0')
             {
              if(cb[oo]!=pb[oo])
              {
                
                if(((cb[oo]>=65&&cb[oo]<=90)||(cb[oo]>=97&&cb[oo]<=122))&&((pb[oo]>=65&&pb[oo]<=90)||(pb[oo]>=97&&pb[oo]<=122)))
                {
                 
                   if((cb[oo]-pb[oo])==32||(cb[oo]-pb[oo])==-32)
                   ff=0;
                  else
                 {ff=1;
                   break;}



                }
                else
                {ff=1;
                break;}
              }
              oo++;

             }

             if(ff==1)
             {

              printf(1,"%d ",c);
              printf(1,"%s\n",pb);
              
             
              
               c=1;
             }
             else
             {
              c++;
             }

            

          strcpy(pb,cb);
          i=0;
          

          }





          
        }
        
        
      }

      if(c==1||(ff==0&&c>0))
             {

              printf(1,"%d ",c);
              printf(1,"%s\n",pb);
              
             
              
               
             }
      close(f88);


      }
      else
      if(((strcmp(argv[1],"-d")==0&&strcmp(argv[2],"-i")==0)||(strcmp(argv[1],"-i")==0&&strcmp(argv[2],"-d")==0)))
      {
         int f99=open(argv[3],0);
       //COUNTS DUPLICATES IGNORING THE CASE

      int i=0,l=1,oo;
      char ch[1];
      c=1;
      

      while(read(f99,ch,sizeof(ch)))
      {


       if(ch[0]!='\n')
       {cb[i]=ch[0];
        i++;}
        else
        if(ch[0]=='\n')
        {
          if(l==1){
          cb[i]='\0';
          strcpy(pb,cb);
          i=0;
          l++;
          c=1;
           
          }
          else
          {
             cb[i]='\0';
              oo=0;
             ff=0;
             

             while(cb[oo]!='\0'||pb[oo]!='\0')
             {
              if(cb[oo]!=pb[oo])
              {
                
                if(((cb[oo]>=65&&cb[oo]<=90)||(cb[oo]>=97&&cb[oo]<=122))&&((pb[oo]>=65&&pb[oo]<=90)||(pb[oo]>=97&&pb[oo]<=122)))
                {
                 
                   if((cb[oo]-pb[oo])==32||(cb[oo]-pb[oo])==-32)
                   ff=0;
                  else
                 {ff=1;
                   break;}



                }
                else
                {ff=1;
                break;}
              }
              oo++;

             }

             if(ff==1)
             {
             
              
               c=1;
             }
             else
             {
              c++;
             }

             if(c==2)
             {printf(1,"%s",pb);
              printf(1,"\n");}

          strcpy(pb,cb);
          i=0;
          

          }





          
        }
        
        
      }
      
      close(f99);
      }

    }
    exit();
}

