/*
项目1：结合lmits.h头文件和float.h头文件，为每个数据类型编写说明：
int type:
Type of signed char，which uses 1B，from -128 to 127
Type of unsigned char,which uses 1B, from 0 to 0xff
Type of char[*],which uses * B, have * chars,it contains: [the text of string]
*/
#include <limits.h>
#include <float.h>
#include <stdio.h>
#include <string.h>
#define ZERO 0
void int_number(void);
void float_number(void);
void print_(void);
void string(void);
int main()
{
    int_number();
    float_number();
    string();
    return 0;
}
void int_number(void)
{
    signed char example_signed_char = 123;
    unsigned char example_unsigned_char =240U;
    signed int example_signed_int = 10000;
    unsigned int example_unsigned_int = 9999999U ;
    signed long example_signed_long = 999999999L;
    unsigned long example_unsigned_long = 9999999UL;
    signed long long example_signed_longlong = 9999999999ll;
    unsigned long long example_unsigned_longlong = 99999999999ull;
    printf("%05d,%05u,%5d,%5u,%5ld,%5lu,%5lld,%5llu\n",example_signed_char,example_unsigned_char,
    example_signed_int,example_unsigned_int,example_signed_long,example_unsigned_long,
    example_unsigned_long,example_signed_longlong,example_unsigned_longlong);
    print_();
    print_();
    printf("Type of signed char,which uses %zd B,\
 from %d to %d\n",sizeof(char),SCHAR_MIN,SCHAR_MAX) ;
    printf("Type of unsigned char,which uses %zd B,\
 from %d to %#x\n",sizeof(char),ZERO,UCHAR_MAX);
    printf("Type of signed int, which uses %zd B,\
 form %#x to %#x\n",sizeof(int),INT_MIN,INT_MAX);
    printf("Type of unsigned int , which uses %zd B,\
 from %d to %u\n",sizeof(int),ZERO,UINT_MAX);
    printf("Type of signed short , which uses %zd B,\
 from %hd to %hd\n",sizeof(short),SHRT_MIN,SHRT_MIN);
    printf("Type of unsigned short , which uses %zd B,\
 from %d to %#hx\n",sizeof(short),ZERO,USHRT_MAX);
    printf("Type of signed long , which uses %zd B,\
 from %#lx to %#lx\n",sizeof(long),LONG_MIN,LONG_MAX);
    printf("Type of unsigned long , which uses %zd B,\
 from %d to %#lx\n",sizeof(long),ZERO,ULONG_MAX);
    printf("Type of signed longlong , which uses %zd B,\
 from %lld to %lld\n",sizeof(long long),LLONG_MIN,LLONG_MAX);
     printf("Type of unsigned longlong , which uses %zd B,\
 from %d to %#llx\n",sizeof(long long),ZERO,ULLONG_MAX);
    
} 
void float_number(void)
{
    print_();
    print_();
    float example_float = 3.14156;
    double example_double = 3.454545454;
    long double example_long_double = 3.13156786;
    printf("%f,%lf,%Lf\n",example_float,example_double,example_long_double);
    print_();
    print_();
    printf("Type of float, which uses %zd B,\
 from %e to %e\n",sizeof(float),FLT_MIN,FLT_MAX);
    printf("Type of double, which uses %zd B,\
 from %e to %e\n",sizeof(double),DBL_MIN,DBL_MAX);
    printf("Type of long double , which uses %zd B,\
 from %e to %e\n",sizeof(long double),LDBL_MIN,LDBL_MAX);
}
void string(void)
{
    print_();
    print_();
    char newstr[40] ="to day is a good day";
    printf("Type of char[40],which uses %zd B, \
it has %zd chars,it means : %s " ,sizeof(newstr),strlen(newstr),newstr);
}
void print_(void)
{
    printf("\n");
}