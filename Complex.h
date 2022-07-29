class Complex
{
public:
    double re;
    double im;
    Matrix(int real,int imag);
    Matrix(double real,double imag);
    ~Matrix();
};

Matrix::Matrix(int real,int imag)
{
    re = double(real);
    im = double(imag);   
}
Matrix::Matrix(double real,double imag)
{
    re = real;
    im = imag;   
}

Matrix::~Matrix()
{
    re=0;
    im=0;
}
