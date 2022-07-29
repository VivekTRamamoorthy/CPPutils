#ifndef ARRAY_H
#define ARRAY_H



class Array
{
public:
    int length;
    double* data;
    Array(){
    }
    Array(int iLength) // 
    {
    length = iLength;
    data = new double(length);
    for (int i = 0; i < length; i++)
    {
        data[i]=0.0;
    }
    
    }
    Array(double* iData,int iLength) // constructor
    {
    length = iLength;
    data = new double(length);
    for (size_t i = 0; i < length; i++)
    {
        data[i]= iData[i];
    }
    }

    // Array(double iData[],int iLength) // constructor
    // {
    // length = iLength;
    // data = new double(length);
    // for (size_t i = 0; i < length; i++)
    // {
    //     data[i]= iData[i];
    // }
    // }

    void operator+= (int numtoadd){
        for (int i = 0; i < length; i++)
        {
            data[i]+= numtoadd;
        }
    }
    void operator+= (double numtoadd){
        for (int i = 0; i < length; i++)
        {
            data[i]+= numtoadd;
        }
    }
    Array operator+ (int numToAdd){
        Array result = Array(length);
        for (int i = 0; i < length; i++)
        {
            result.data[i] = data[i]+numToAdd;
        }
        return result;
    }
    Array operator+ (double numToAdd){
        Array result = Array(length);
        for (int i = 0; i < length; i++)
        {
            result.data[i] = data[i]+numToAdd;
        }
        return result;
    }
    Array operator+ (Array arrayToAdd){
        if (arrayToAdd.length!=length){
            std::cout << "Array sizes do not match" <<std::endl;
            return Array();
        }
        Array result = Array(length);
        for (int i = 0; i < length; i++)
        {
            result.data[i] = data[i]+arrayToAdd.data[i];
        }
        return result;
    }
    // void operator= (Array equallingArray){
    //     length = equallingArray.length;
    //     free(data);

    // }

    // destructor
    ~Array(){
        // try{
        // free(data);
        // std::cout  << "Destroying array: "<<std::endl;
        // display();
        // delete data;
        // }catch(int e){
        //     std::cout << "error freeing data";
        // }
    }
    // Array operator+(Array &newArray){
    //     Array result(length);
    // }

    void display(){
        std::cout <<"length =" << length << std::endl;
        for (int i = 0; i < length; i++)
        {
            std::cout << "[" << i << "] " << data[i] << std::endl; 
        }
        
    }



};

/* code */
#endif //ARRAY_H