#ifndef commandComponent_H
#define commandComponent_H

class commandComponent
{
    private:
        string id;
    
    public:
        virtual int exe( vector<string>& );
  
};

#endif