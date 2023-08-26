#include <stdio.h>
#include <stdbool.h>

void my_function(int in1, int in2, int in3, int in4, int in5, int in6, int in7, int in8, int in9, int in10,
                int key1, int key2, int key3, int key4, int key5, int key6, bool key7, bool key8,
                bool key9, bool key10, bool key11, bool key12, bool key13, bool key14, bool key15,
                bool key16, bool key17, bool key18, bool key19, bool key20) {
    
    int mult1 = in1 * in2;
    int mult2 = key7 ? in1 * key1 : in1 - 2;
    int mult3 = key8 ? in3 * key2 : in3 + 10;
    int mult4 = in4 * in5;
    int mult5 = key9 ? in3 * in2 : in3 + 4;
    int mult6 = in2 * in5;
    int mult7 = key10 ? in3 * in6 : in3 + 9;
    int mult8 = in4 * in7;
    int mult9 = in4 * in8;
    int mult10 = key11 ? in6 * in9 : in6 + 100;
    int mult11 = in6 * in8;
    int mult12 = key12 ? in7 * in9 : in7 + 100;
    int mult13 = in7 * in8;
    int mult14 = in9 * in10;

    int add1 = key18 ? in1 * mult2 : in1 + 34;
    int add2 = key3 * mult4;
    int add3 = in5 * mult8;
    int add4 = mult10 * in4;
    int add5 = key14 ? in10 - mult14 : in10 * mult14;

    int add6 = key13 ? mult1 * add1 : mult1 + add1;
    int out1 = add6 + key4;

    int add7 = key15 ? mult3 - add2 : mult3 + add2;
    int add8 = key16 ? mult5 / add7 : mult5 + add7;

    int add10 = mult7 + add3;
    int add9 = mult6 + add10;

    int shf1 = key17 ? add9 << 2 : add9 << 3;
    int out2 = add8 + shf1 + key5;

    int add13 = mult9 * add4;
    int add11 = add13 + mult11;

    int add15 = key19 ? mult13 - add5 : mult13 + add5;
    int add14 = mult12 + add15;

    int shf2 = key20 ? add14 >> 4 : add14 >> 3;
    int out3 = add11 + shf2 + key6;
    
    printf("%d\n",out1);
    printf("%d\n",out2);
    printf("%d\n",out3);
    
}

int main(){



 my_function(10,20,30,40,50,60,70,80,90,100, 0,0,0,310,582,-13225,true,false,false,false,false,false,false,false,false,false,false,true,false,false);

   // my_function(1,2,3,4,5,6,7,8,9,10, -2,0,0,316,1226,-6442,true,true,true,true,true,false,true,true,true,true,true,true,false,true);

    return 0;
}